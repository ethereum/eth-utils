from collections import (
    abc,
)
import copy
import functools
import itertools
import re
from typing import (
    Any,
    Collection,
    Dict,
    Iterable,
    List,
    Mapping,
    Optional,
    Sequence,
    Tuple,
    Union,
    cast,
)

from eth_typing import (
    ABI,
    ABIElement,
    ABIEvent,
    ABIEventParam,
    ABIFunction,
    ABIFunctionInfo,
    ABIFunctionParam,
    HexStr,
    MismatchedABI,
    Primitives,
)
from hexbytes import (
    HexBytes,
)

from eth_utils.conversions import (
    hexstr_if_str,
    to_bytes,
)
from eth_utils.encoding import (
    get_default_codec,
)
from eth_utils.exceptions import (
    ValidationError,
)
from eth_utils.hexadecimal import (
    encode_hex,
)
from eth_utils.types import (
    is_list_like,
    is_text,
)

from .crypto import (
    keccak,
)
from .toolz import (
    pipe,
)


def _abi_inputs_types(
    abi_inputs: Optional[Sequence[Union[ABIFunctionParam, ABIEventParam]]] = None
) -> str:
    """
    Parse type(s) from a list of function or event ABI arguments.

    Returns a string of each type separated by commas.
    """
    if abi_inputs is None:
        abi_inputs = []

    return ",".join(
        [get_normalized_abi_arg_type(abi_input) for abi_input in abi_inputs]
    )


def _abi_to_signature(abi: ABIElement) -> str:
    """
    Returns a string signature representation of the function or event ABI
    and arguments.

    Signatures consist of the name followed by a list of arguments.

    Function signature example: ``f(address,uint256,bytes)``
    """
    if abi["type"] == "fallback" or abi["type"] == "receive":
        name = str(abi["type"])
        abi_inputs = None
    elif abi["type"] == "constructor":
        name = abi["type"]
        abi_inputs = abi["inputs"]
    elif abi["type"] == "event":
        name = abi["name"]
        abi_inputs = abi["inputs"]
    else:
        name = str(abi.get("name", abi["type"]))
        abi_inputs = abi.get("inputs")

    return f"{name}({_abi_inputs_types(abi_inputs)})"


def _filter_by_type(_type: str, contract_abi: ABI) -> List[ABIElement]:
    """
    Return a list of each ``ABIElement`` that is of type ``_type``.
    """
    return [abi for abi in contract_abi if abi["type"] == _type]


def _filter_by_name(name: str, contract_abi: ABI) -> List[ABIElement]:
    """
    Return a list of each ``ABIElement`` that matches the provided ``name``.
    """
    return [
        abi
        for abi in contract_abi
        if (
            abi["type"] not in ("fallback", "constructor", "receive")
            and abi.get("name", "") == name
        )
    ]


def _filter_by_encodability(
    abi_codec: Any,
    args: Sequence[Any],
    kwargs: Dict[str, Any],
    contract_abi: ABI,
) -> List[ABIFunction]:
    """
    Return a list of each ``ABIFunction`` that can be encoded with the provided
    arguments.
    """
    return [
        abi
        for abi in contract_abi
        if abi["type"] == "function"
        and _check_if_arguments_can_be_encoded(abi, abi_codec, args, kwargs)
    ]


def _filter_by_argument_name(
    argument_names: Collection[str], contract_abi: ABI
) -> List[ABIElement]:
    """
    Return a list of each ``ABIElement`` which contain arguments matching provided
    names.
    """
    abis_with_matching_args = []
    for abi_element in contract_abi:
        try:
            abi_arg_names = get_abi_input_names(abi_element)

            if set(argument_names).intersection(abi_arg_names) == set(abi_arg_names):
                abis_with_matching_args.append(abi_element)
        except TypeError:
            # fallback or receive functions do not have arguments
            # proceed to next ABIElement
            continue

    return abis_with_matching_args


def _abi_match_num_arguments(abi_element: ABIElement, num_arguments: int) -> bool:
    """
    Return True if the provided ABI has the expected number of arguments.
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        # only return True for fallback and receive if 0 arguments expected
        return num_arguments == 0
    elif abi_element["type"] == "function" or abi_element["type"] == "constructor":
        return len(abi_element["inputs"]) == num_arguments

    return False


def _filter_by_argument_count(
    num_arguments: int, contract_abi: ABI
) -> List[ABIElement]:
    """
    Return a list of each ``ABIElement`` which has the given number of arguments.
    """
    return [abi for abi in contract_abi if _abi_match_num_arguments(abi, num_arguments)]


def _check_if_arguments_can_be_encoded(
    function_abi: ABIFunction,
    abi_codec: Any,
    args: Sequence[Any],
    kwargs: Dict[str, Any],
) -> bool:
    """
    Validates the function and arguments for encoding.

    Returns True if the function ABI can be encoded with the provided argument
    (``args``) and keyword args (``kwargs``).

    False is returned if arguments do not align with the ABI spec.
    """
    try:
        arguments = _merge_args_and_kwargs(function_abi, args, kwargs)
    except TypeError:
        return False

    if len(function_abi.get("inputs", [])) != len(arguments):
        return False

    try:
        types, aligned_args = _get_aligned_abi_inputs(function_abi, arguments)
    except TypeError:
        return False

    return all(
        abi_codec.is_encodable(_type, arg) for _type, arg in zip(types, aligned_args)
    )


def _merge_args_and_kwargs(
    function_abi: ABIFunction, args: Sequence[Any], kwargs: Dict[str, Any]
) -> Tuple[Any, ...]:
    """
    Return a Tuple of arguments for use in contract function calls.

    Flattens positional args (``args``) and keyword args (``kwargs``) and uses the
    ``function_abi`` for validation.

    Checks to ensure that the correct number of args were given, no duplicate args were
    given, and no unknown args were given.  Returns a list of argument values aligned
    to the order of inputs defined in ``function_abi``.

    :param function_abi: Function ABI.
    :type function_abi: `ABIFunction`
    :return: Arguments list.
    :rtype: `Tuple[Any]`
    """
    # Ensure the function is being applied to the correct number of args
    if len(args) + len(kwargs) != len(function_abi.get("inputs", [])):
        raise TypeError(
            f"Incorrect argument count. Expected '{len(function_abi['inputs'])}'"
            f". Got '{len(args) + len(kwargs)}'"
        )

    # If no keyword args were given, we don't need to align them
    if not kwargs:
        return cast(Tuple[Any, ...], args)

    kwarg_names = set(kwargs.keys())
    sorted_arg_names = tuple(arg_abi["name"] for arg_abi in function_abi["inputs"])
    args_as_kwargs = dict(zip(sorted_arg_names, args))

    # Check for duplicate args
    duplicate_args = kwarg_names.intersection(args_as_kwargs.keys())
    if duplicate_args:
        raise TypeError(
            f"{function_abi.get('name')}() got multiple values for argument(s) "
            f"'{', '.join(duplicate_args)}'"
        )

    # Check for unknown args
    unknown_args = kwarg_names.difference(sorted_arg_names)
    if unknown_args:
        if function_abi.get("name"):
            raise TypeError(
                f"{function_abi.get('name')}() got unexpected keyword argument(s)"
                f" '{', '.join(unknown_args)}'"
            )
        raise TypeError(
            f"Type: '{function_abi.get('type')}' got unexpected keyword argument(s)"
            f" '{', '.join(unknown_args)}'"
        )

    # Sort args according to their position in the ABI and unzip them from their
    # names
    sorted_args = tuple(
        zip(
            *sorted(
                itertools.chain(kwargs.items(), args_as_kwargs.items()),
                key=lambda kv: sorted_arg_names.index(kv[0]),
            )
        )
    )

    if len(sorted_args) > 0:
        return tuple(sorted_args[1])
    else:
        return tuple()


def _get_aligned_abi_inputs(
    abi: ABIFunction, args: Union[Tuple[Any, ...], Mapping[Any, Any]]
) -> Tuple[Tuple[Any, ...], Tuple[Any, ...]]:
    """
    Takes a function ABI (``abi``) and a sequence or mapping of args (``args``).
    Returns a list of type strings for the function's inputs and a list of
    arguments which have been aligned to the layout of those types.  The args
    contained in ``args`` may contain nested mappings or sequences corresponding
    to tuple-encoded values in ``abi``.
    """
    input_abis = abi.get("inputs", [])

    if isinstance(args, abc.Mapping):
        # `args` is mapping.  Align values according to abi order.
        args = tuple(args[abi["name"]] for abi in input_abis)

    return (
        tuple(get_normalized_abi_arg_type(abi) for abi in input_abis),
        type(args)(_align_abi_input(abi, arg) for abi, arg in zip(input_abis, args)),
    )


def _align_abi_input(
    arg_abi: ABIFunctionParam, arg: Any
) -> Union[Any, Tuple[Any, ...]]:
    """
    Aligns the values of any mapping at any level of nesting in ``arg``
    according to the layout of the corresponding abi spec.
    """
    tuple_parts = _get_tuple_type_str_and_dims(arg_abi["type"])

    if tuple_parts is None:
        # Arg is non-tuple.  Just return value.
        return arg

    sub_abis: Iterable[ABIFunctionParam] = []
    tuple_prefix, tuple_dims = tuple_parts
    if tuple_dims is None:
        # Arg is non-list tuple.  Each sub arg in `arg` will be aligned
        # according to its corresponding abi.
        sub_abis = cast(Iterable[ABIFunctionParam], arg_abi["components"])
    else:
        num_dims = tuple_dims.count("[")

        # Arg is list tuple.  A non-list version of its abi will be used to
        # align each element in `arg`.
        new_abi = copy.copy(arg_abi)
        new_abi["type"] = tuple_prefix + "[]" * (num_dims - 1)

        sub_abis = itertools.repeat(new_abi)

    if isinstance(arg, abc.Mapping):
        # Arg is mapping.  Align values according to abi order.
        aligned_arg = tuple(arg[abi["name"]] for abi in sub_abis)
    else:
        aligned_arg = arg

    if not is_list_like(aligned_arg):
        raise TypeError(
            f'Expected non-string sequence for "{arg_abi.get("type")}" '
            f"component type: got {aligned_arg}"
        )

    # convert NamedTuple to regular tuple
    typing = tuple if isinstance(aligned_arg, tuple) else type(aligned_arg)

    return typing(
        _align_abi_input(sub_abi, sub_arg)
        for sub_abi, sub_arg in zip(sub_abis, aligned_arg)
    )


def _get_tuple_type_str_and_dims(s: str) -> Optional[Tuple[str, Optional[str]]]:
    """
    Takes a JSON ABI type string.  For tuple type strings, returns the separated
    prefix and array dimension parts.  For all other strings, returns ``None``.
    """
    tuple_type_str_re = "^(tuple)((\\[([1-9]\\d*\b)?])*)??$"
    match = re.compile(tuple_type_str_re).match(s)

    if match is not None:
        tuple_prefix = match.group(1)
        tuple_dims = match.group(2)

        return tuple_prefix, tuple_dims

    return None


def _log_topic_bytes(
    log_topic: Union[Primitives, HexStr, str],
) -> bytes:
    """
    Return bytes from the provided topic.
    """
    return hexstr_if_str(to_bytes, log_topic)


def _raise_mismatched_abi_error(
    function_identifier: str,
    matching_function_signatures: Sequence[str],
    arg_count_matches: int,
    encoding_matches: int,
    args: Optional[Sequence[Any]] = None,
    kwargs: Optional[Any] = None,
) -> None:
    """
    Raise a ``MismatchedABI`` when a function ABI lookup results in an error.

    An error may result from multiple functions matching the provided signature and
    arguments or no functions are identified.
    """
    if arg_count_matches == 0:
        diagnosis = "\nFunction invocation failed due to improper number of arguments."
    elif encoding_matches == 0:
        diagnosis = "\nFunction invocation failed due to no matching argument types."
    elif encoding_matches > 1:
        diagnosis = (
            "\nAmbiguous argument encoding. "
            "Provided arguments can be encoded to multiple functions "
            "matching this call."
        )

    if args is not None:
        collapsed_args = _abi_inputs_types(args)
    else:
        collapsed_args = ""

    if kwargs is not None:
        collapsed_kwargs = dict(
            {(k, _abi_inputs_types([v])) for k, v in kwargs.items()}
        )
    else:
        collapsed_kwargs = {}

    raise MismatchedABI(
        f"\nCould not identify the intended function with name "
        f"`{function_identifier}`, positional arguments with type(s) "
        f"`{collapsed_args}` and keyword arguments with type(s) "
        f"`{collapsed_kwargs}`."
        f"\nFound {len(matching_function_signatures)} function(s) with the name "
        f"`{function_identifier}`: {matching_function_signatures}{diagnosis}"
    )


def get_all_function_abis(abi: ABI) -> Sequence[ABIFunction]:
    """
    Return interfaces for each function in the contract ABI.

    :param abi: Contract ABI.
    :type abi: `ABI`
    :return: List of ABIs for each function interface.
    :rtype: `list[ABIFunction]`
    """
    return [
        cast(ABIFunction, function_abi)
        for function_abi in _filter_by_type("function", abi)
    ]


def get_function_abi(
    abi: ABI,
    function_identifier: str,
    args: Optional[Sequence[Any]] = None,
    kwargs: Optional[Any] = None,
    abi_codec: Optional[Any] = None,
) -> ABIFunction:
    """
    Return the interface for an ``ABIFunction`` which matches the provided identifier
    and arguments.

    The ABI which matches the provided identifier, named arguments (``args``) and
    keyword args (``kwargs``) will be returned.

    The `abi_codec` may be overridden if custom encoding and decoding is required. The
    default is used if no codec is provided. More details about customizations are in
    the `eth-abi Codecs Doc <https://eth-abi.readthedocs.io/en/latest/codecs.html>`__.

    :param abi: Contract ABI.
    :type abi: `ABI`
    :param function_identifier: Find a function ABI with matching name.
    :type function_identifier: `str`
    :param args: Find a function ABI with matching args.
    :type args: `list[Any]`
    :param kwargs: Find a function ABI with matching kwargs.
    :type kwargs: `Any`
    :param abi_codec: Codec used for encoding and decoding. Default with \
    `strict_bytes_type_checking` enabled.
    :type abi_codec: `Any`

    :return: ABI for the function interface.
    :rtype: `ABIFunction`
    """
    if function_identifier is None or not is_text(function_identifier):
        raise TypeError("Unsupported function identifier")

    if abi_codec is None:
        abi_codec = get_default_codec()

    args = args or tuple()
    kwargs = kwargs or dict()
    num_arguments = len(args) + len(kwargs)

    name_filter = functools.partial(_filter_by_name, function_identifier)
    arg_count_filter = functools.partial(_filter_by_argument_count, num_arguments)
    encoding_filter = functools.partial(
        _filter_by_encodability, abi_codec, args, kwargs
    )

    function_candidates = cast(
        Sequence[ABIFunction], pipe(abi, name_filter, arg_count_filter)
    )

    if len(function_candidates) != 1:
        matching_identifiers = name_filter(abi)
        matching_function_signatures = [
            _abi_to_signature(func) for func in matching_identifiers
        ]

        arg_count_matches = len(arg_count_filter(matching_identifiers))
        encoding_matches = len(encoding_filter(matching_identifiers))

        _raise_mismatched_abi_error(
            function_identifier,
            matching_function_signatures,
            arg_count_matches,
            encoding_matches,
            args,
            kwargs,
        )

    return function_candidates[0]


def get_function_info(
    abi: ABI,
    function_identifier: str,
    args: Optional[Sequence[Any]] = None,
    kwargs: Optional[Any] = None,
    abi_codec: Optional[Any] = None,
) -> ABIFunctionInfo:
    """
    Return the function ABI, selector and input arguments.

    The ABI which matches the provided identifier, named arguments (``args``) and
    keyword args (``kwargs``) will be returned.

    :param abi: Contract ABI.
    :type abi: `ABI`
    :param function_identifier: Find a function ABI with matching identifier.
    :type function_identifier: `str`
    :param args: Find a function ABI with matching args.
    :type args: `list[Any]`
    :param kwargs: Find a function ABI with matching kwargs.
    :type kwargs: `Any`
    :return: Function information including the ABI, selector and args.
    :rtype: `ABIFunctionInfo`
    """
    args = args or tuple()
    kwargs = kwargs or dict()

    fn_abi = get_function_abi(
        abi, function_identifier, args, kwargs, abi_codec=abi_codec
    )
    fn_selector = encode_hex(function_abi_to_4byte_selector(fn_abi))
    fn_arguments = _merge_args_and_kwargs(fn_abi, args, kwargs)
    _, aligned_fn_arguments = _get_aligned_abi_inputs(fn_abi, fn_arguments)

    return ABIFunctionInfo(
        abi=fn_abi, selector=fn_selector, arguments=aligned_fn_arguments
    )


def get_event_log_topics(
    event_abi: ABIEvent,
    topics: Optional[Sequence[HexBytes]] = None,
) -> Sequence[HexBytes]:
    """
    Return topics from an event ABI.

    :param event_abi: Event ABI.
    :type event_abi: `ABIEvent`
    :param topics: Transaction topics from a `LogReceipt`.
    :type topics: `list[HexBytes]`
    :return: Event topics from the event ABI.
    :rtype: `list[HexBytes]`
    """
    if topics is None:
        topics = []

    if event_abi["anonymous"]:
        return topics
    elif len(topics) == 0:
        raise MismatchedABI("Expected non-anonymous event to have 1 or more topics")
    elif event_abi_to_log_topic(event_abi) != _log_topic_bytes(topics[0]):
        raise MismatchedABI("The event signature did not match the provided ABI")
    else:
        return topics[1:]


def get_all_event_abis(abi: ABI) -> Sequence[ABIEvent]:
    """
    Return interfaces for each event in the contract ABI.

    :param abi: Contract ABI.
    :type abi: `ABI`
    :return: List of ABIs for each event interface.
    :rtype: `list[ABIEvent]`
    """
    return [cast(ABIEvent, event) for event in _filter_by_type("event", abi)]


def get_event_abi(
    abi: ABI,
    event_name: str,
    argument_names: Optional[Sequence[str]] = None,
) -> ABIEvent:
    """
    Find the event interface with the given name and/or arguments.

    :param abi: Contract ABI.
    :type abi: `ABI`
    :param event_name: Find an event abi with matching event name.
    :type event_name: `str`
    :param argument_names: Find an event abi with matching arguments.
    :type argument_names: `list[str]`
    :return: ABI for the event interface.
    :rtype: `ABIEvent`
    """
    filters = [
        functools.partial(_filter_by_type, "event"),
    ]

    if event_name is None or event_name == "":
        raise ValidationError("event_name is required in order to match an event ABI.")

    filters.append(functools.partial(_filter_by_name, event_name))

    if argument_names is not None:
        filters.append(functools.partial(_filter_by_argument_name, argument_names))

    event_abi_candidates = cast(Sequence[ABIEvent], pipe(abi, *filters))

    if len(event_abi_candidates) == 1:
        return event_abi_candidates[0]
    elif len(event_abi_candidates) == 0:
        raise ValueError("No matching events found")
    else:
        raise ValueError("Multiple events found")


def get_abi_input_names(abi_element: ABIElement) -> List[str]:
    """
    Return names for each input from the function or event ABI.

    :param abi_element: Function or Event ABI.
    :type abi_element: `ABIFunction` or `ABIEvent`
    :return: Names for each input in the function or event ABI.
    :rtype: `List[str]`
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        raise ValueError(
            f"Inputs not supported for function types 'fallback' or 'receive'. Provided"
            f" ABI type was '{abi_element['type']}'."
        )
    return [arg["name"] for arg in abi_element["inputs"]]


def get_abi_input_types(abi_element: ABIElement) -> List[str]:
    """
    Return types for each input from the function or event ABI.

    :param abi_element: Function or Event ABI.
    :type abi_element: `ABIFunction` or `ABIEvent`
    :return: Types for each input in the function or event ABI.
    :rtype: `List[str]`
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        raise ValueError(
            f"Inputs not supported for function types 'fallback' or 'receive'. Provided"
            f" ABI type was '{abi_element['type']}'."
        )

    return [get_normalized_abi_arg_type(arg) for arg in abi_element["inputs"]]


def get_abi_output_names(function_abi: ABIFunction) -> List[str]:
    """
    Return names for each output from the function ABI.

    :param function_abi: Function ABI.
    :type function_abi: `ABIFunction`
    :return: Names for each function output in the function ABI.
    :rtype: `List[str]`
    """
    if "outputs" not in function_abi or function_abi["type"] != "function":
        raise ValueError(
            f"Outputs only supported for ABI type 'function'. Provided"
            f" ABI type was '{function_abi['type']}'."
        )
    return [arg["name"] for arg in function_abi["outputs"]]


def get_abi_output_types(function_abi: ABIFunction) -> List[str]:
    """
    Return types for each output from the function ABI.

    :param function_abi: Function ABI.
    :type function_abi: `ABIFunction`
    :return: Types for each function output in the function ABI.
    :rtype: `List[str]`
    """
    if function_abi["type"] == "function":
        return [get_normalized_abi_arg_type(arg) for arg in function_abi["outputs"]]

    raise ValueError(
        f"Outputs only supported for ABI type 'function'. Provided"
        f" ABI type was '{function_abi['type']}'."
    )


def function_signature_to_4byte_selector(function_signature: str) -> bytes:
    """
    Return the 4-byte function signature from a function signature string.

    :param event_signature: String representation of the event name and arguments.
    :type event_signature: `string`
    :return: 4-byte function signature.
    :rtype: `bytes`
    """
    return keccak(text=function_signature.replace(" ", ""))[:4]


def function_abi_to_4byte_selector(function_abi: ABIFunction) -> bytes:
    """
    Return the 4-byte function signature of the provided function ABI.

    :param function_abi: Function ABI.
    :type function_abi: `ABIFunction`
    :return: 4-byte function signature.
    :rtype: `bytes`
    """
    function_signature = _abi_to_signature(function_abi)
    return function_signature_to_4byte_selector(function_signature)


def event_signature_to_log_topic(event_signature: str) -> bytes:
    """
    Return the keccak signature of the log topic for an event signature.

    :param event_signature: String representation of the event name and arguments.
    :type event_signature: `string`
    :return: Log topic bytes.
    :rtype: `bytes`
    """
    return keccak(text=event_signature.replace(" ", ""))


def event_abi_to_log_topic(event_abi: ABIEvent) -> bytes:
    """
    Return the keccak signature of the log topic from an event ABI.

    :param event_abi: Event ABI.
    :type event_abi: `ABIEvent`
    :return: Log topic bytes.
    :rtype: `bytes`

    """
    event_signature = _abi_to_signature(event_abi)
    return event_signature_to_log_topic(event_signature)


def get_normalized_abi_arg_type(
    abi_element_param: Union[ABIFunctionParam, ABIEventParam]
) -> str:
    """
    Extract argument types from a function or event ABI parameter.

    With tuple argument types, return a Tuple of each type.
    Non-tuple types just return the type.

    >>> from eth_utils.abi import get_normalized_abi_arg_type
    >>> get_normalized_abi_arg_type(
    ...     {
    ...         'components': [
    ...             {'name': 'anAddress', 'type': 'address'},
    ...             {'name': 'anInt', 'type': 'uint256'},
    ...             {'name': 'someBytes', 'type': 'bytes'},
    ...         ],
    ...         'type': 'tuple',
    ...     }
    ... )
    '(address,uint256,bytes)'

    :param abi_element_param: Function or Event ABI parameter.
    :type abi_element_param: `ABIFunction` or `ABIEvent`
    :return: Type(s) in the function or event ABI param.
    :rtype: `str`
    """
    element_type = abi_element_param.get("type")
    if not isinstance(element_type, str):
        raise TypeError(
            f"The 'type' must be a string, but got {repr(element_type)} of type "
            f"{type(element_type)}"
        )
    elif not element_type.startswith("tuple"):
        return element_type

    delimited = ",".join(
        get_normalized_abi_arg_type(c) for c in abi_element_param["components"]
    )
    # Whatever comes after "tuple" is the array dims. The ABI spec states that
    # this will have the form "", "[]", or "[k]".
    array_dim = element_type[5:]
    collapsed = f"({delimited}){array_dim}"

    return collapsed
