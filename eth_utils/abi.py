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
    ABIFunction,
    ABIFunctionParam,
    HexStr,
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
    EthUtilsABIValidationError,
    ValidationError,
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


def collapse_if_tuple(abi: ABIFunctionParam) -> str:
    """
    Converts a tuple from a dict to a parenthesized list of its types.

    >>> from eth_utils.abi import collapse_if_tuple
    >>> collapse_if_tuple(
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
    """
    typ = abi["type"]
    if not isinstance(typ, str):
        raise TypeError(
            f"The 'type' must be a string, but got {repr(typ)} of type {type(typ)}"
        )
    elif not typ.startswith("tuple"):
        return typ

    delimited = ",".join(collapse_if_tuple(c) for c in abi["components"])
    # Whatever comes after "tuple" is the array dims. The ABI spec states that
    # this will have the form "", "[]", or "[k]".
    array_dim = typ[5:]
    collapsed = f"({delimited}){array_dim}"

    return collapsed


def _abi_inputs_types(
    abi_inputs: Union[Sequence[ABIFunctionParam], None] = None
) -> str:
    if abi_inputs is None:
        abi_inputs = []

    return ",".join([collapse_if_tuple(abi_input) for abi_input in abi_inputs])


def _abi_to_signature(abi: ABI) -> str:
    function_signature = f"{abi['name']}({_abi_inputs_types(abi.get('inputs', []))})"
    return function_signature


def _filter_by_type(_type: str, contract_abi: ABI) -> List[ABIElement]:
    return [abi for abi in contract_abi if abi["type"] == _type]


def _filter_by_name(name: str, contract_abi: ABI) -> List[ABIElement]:
    return [
        abi
        for abi in contract_abi
        if (
            abi["type"] not in ("fallback", "constructor", "receive")
            and abi["name"] == name
        )
    ]


def _filter_by_encodability(
    abi_codec: Any,
    args: Sequence[Any],
    kwargs: Dict[str, Any],
    contract_abi: ABI,
) -> List[ABIFunction]:
    return [
        cast(ABIFunction, function_abi)
        for function_abi in contract_abi
        if _check_if_arguments_can_be_encoded(
            cast(ABIFunction, function_abi), abi_codec, args, kwargs
        )
    ]


def _filter_by_argument_name(
    argument_names: Collection[str], contract_abi: ABI
) -> List[ABIElement]:
    return [
        abi
        for abi in contract_abi
        if set(argument_names).intersection(get_abi_input_names(abi))
        == set(argument_names)
    ]


def _filter_by_argument_count(
    num_arguments: int, contract_abi: ABI
) -> List[ABIElement]:
    return [abi for abi in contract_abi if len(abi["inputs"]) == num_arguments]


def _check_if_arguments_can_be_encoded(
    function_abi: ABIFunction,
    abi_codec: Any,
    args: Sequence[Any],
    kwargs: Dict[str, Any],
) -> bool:
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
    Takes a list of positional args (``args``) and a dict of keyword args
    (``kwargs``) defining values to be passed to a call to the contract function
    described by ``function_abi``.  Checks to ensure that the correct number of
    args were given, no duplicate args were given, and no unknown args were
    given.  Returns a list of argument values aligned to the order of inputs
    defined in ``function_abi``.
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

    if sorted_args:
        return sorted_args[1]
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
        tuple(collapse_if_tuple(abi) for abi in input_abis),
        type(args)(_align_abi_input(abi, arg) for abi, arg in zip(input_abis, args)),
    )


def _align_abi_input(
    arg_abi: ABIFunctionParam, arg: Any
) -> Union[Any, Tuple[Any, ...]]:
    """
    Aligns the values of any mapping at any level of nesting in ``arg``
    according to the layout of the corresponding abi spec.
    """
    tuple_parts = _get_tuple_type_str_parts(arg_abi["type"])

    if tuple_parts is None:
        # Arg is non-tuple.  Just return value.
        return arg

    tuple_prefix, tuple_dims = tuple_parts
    if tuple_dims is None:
        # Arg is non-list tuple.  Each sub arg in `arg` will be aligned
        # according to its corresponding abi.
        sub_abis = arg_abi["components"]
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


def _get_tuple_type_str_parts(s: str) -> Optional[Tuple[str, Optional[str]]]:
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


def _log_entry_data_to_bytes(
    log_entry_data: Union[Primitives, HexStr, str],
) -> HexBytes:
    return hexstr_if_str(to_bytes, log_entry_data)


def _raise_function_abi_validation_error(
    function_identifier: str,
    matching_function_signatures: Sequence[str],
    arg_count_matches: int,
    encoding_matches: int,
    args: Optional[Sequence[Any]] = None,
    kwargs: Optional[Any] = None,
) -> None:
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

    message = (
        f"\nCould not identify the intended function with name "
        f"`{function_identifier}`, positional arguments with type(s) "
        f"`{collapsed_args}` and keyword arguments with type(s) "
        f"`{collapsed_kwargs}`."
        f"\nFound {len(matching_function_signatures)} function(s) with the name "
        f"`{function_identifier}`: {matching_function_signatures}{diagnosis}"
    )

    raise EthUtilsABIValidationError(message)


def get_all_function_abis(abi: ABI) -> ABIFunction:
    """
    Return interfaces for each function in the contract ABI.

    :param abi: Contract ABI.
    :param type: `ABI`
    :return: List of ABIs for each function interface.
    :rtype: `list[ABIFunction]`
    """
    return cast(ABIFunction, _filter_by_type("function", abi))


def get_function_abi(
    abi: ABI,
    function_identifier: Optional[str] = None,
    args: Optional[Sequence[Any]] = None,
    kwargs: Optional[Any] = None,
    abi_codec: Optional[Any] = None,
) -> ABIFunction:
    """
    Return the interface for a contract function.

    :param abi: Contract ABI.
    :param type: `ABI`
    :param function_identifier: Find a function ABI with matching name.
    :param type: `str`
    :param args: Find a function ABI with matching args.
    :param type: `list[Any]`
    :param kwargs: Find a function ABI with matching kwargs.
    :param type: `Any`
    :param abi_codec: Codec used for encoding and decoding. Default with
    `strict_bytes_type_checking` enabled.
    :param type: `Any`
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

    function_candidates = pipe(abi, name_filter, arg_count_filter)

    if len(function_candidates) == 1:
        return function_candidates[0]

    else:
        matching_identifiers = name_filter(abi)
        matching_function_signatures = [
            _abi_to_signature(func) for func in matching_identifiers
        ]

        arg_count_matches = len(arg_count_filter(matching_identifiers))
        encoding_matches = len(encoding_filter(matching_identifiers))

        _raise_function_abi_validation_error(
            function_identifier,
            matching_function_signatures,
            arg_count_matches,
            encoding_matches,
            args,
            kwargs,
        )


def get_event_log_topics(
    event_abi: ABIEvent,
    topics: Optional[Sequence[HexBytes]] = None,
) -> Sequence[HexBytes]:
    """
    Return topics from an event ABI.

    :param event_abi: Event ABI.
    :param type: `ABIEvent`
    :param topics: Transaction topics from a `LogReceipt`.
    :param type: `list[HexBytes]`
    :return: Event topics from the event ABI.
    :rtype: `list[HexBytes]`
    """
    if topics is None:
        topics = []

    if event_abi["anonymous"]:
        return topics
    elif len(topics) == 0:
        # raise MismatchedABI("Expected non-anonymous event to have 1 or more topics")
        raise ValidationError("Expected non-anonymous event to have 1 or more topics")
    elif event_abi_to_log_topic(dict(event_abi)) != _log_entry_data_to_bytes(topics[0]):
        # raise MismatchedABI("The event signature did not match the provided ABI")
        raise ValidationError("The event signature did not match the provided ABI")
    else:
        return topics[1:]


def get_all_event_abis(abi: ABI) -> Sequence[ABIEvent]:
    """
    Return interfaces for each event in the contract ABI.

    :param abi: Contract ABI.
    :param type: `ABI`
    :return: List of ABIs for each event interface.
    :rtype: `list[ABIEvent]`
    """
    return [ABIEvent(event) for event in _filter_by_type("event", abi)]


def get_event_abi(
    abi: ABI,
    event_name: Optional[str] = None,
    argument_names: Optional[Sequence[str]] = None,
) -> ABIEvent:
    """
    Find the event interface with the given name and arguments.

    :param abi: Contract ABI.
    :param type: `ABI`
    :param event_name: Find an event abi with matching event name.
    :param type: `str`
    :param argument_names: Find an event abi with matching arguments.
    :param type: `list[str]`
    :return: ABI for the event interface.
    :rtype: `ABIEvent`
    """
    filters = [
        functools.partial(_filter_by_type, "event"),
    ]

    if event_name is not None:
        filters.append(functools.partial(_filter_by_name, event_name))

    if argument_names is not None:
        filters.append(functools.partial(_filter_by_argument_name, argument_names))

    event_abi_candidates = pipe(abi, *filters)

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
    :param type: `ABIFunction` or `ABIEvent`
    :return: Names for each input in the function or event ABI.
    :rtype: `List[str]`
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        return []
    return [arg["name"] for arg in abi_element["inputs"]]


def get_abi_input_types(abi_element: ABIElement) -> List[str]:
    """
    Return types for each input from the function or event ABI.

    :param abi_element: Function or Event ABI.
    :param type: `ABIFunction` or `ABIEvent`
    :return: Types for each input in the function or event ABI.
    :rtype: `List[str]`
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        return []
    else:
        return [collapse_if_tuple(cast(ABI, arg)) for arg in abi_element["inputs"]]


def get_abi_output_names(function_abi: ABIFunction) -> List[str]:
    """
    Return names for each output from the function ABI.

    :param function_abi: Function ABI.
    :param type: `ABIFunction`
    :return: Names for each function output in the function ABI.
    :rtype: `List[str]`
    """
    if "outputs" not in function_abi or function_abi["type"] != "function":
        return []
    return [arg["name"] for arg in function_abi["outputs"]]


def get_abi_output_types(function_abi: ABIFunction) -> List[str]:
    """
    Return types for each output from the function ABI.

    :param function_abi: Function ABI.
    :param type: `ABIFunction`
    :return: Types for each function output in the function ABI.
    :rtype: `List[str]`
    """
    if "outputs" not in function_abi or function_abi["type"] != "function":
        return []
    else:
        return [collapse_if_tuple(cast(ABI, arg)) for arg in function_abi["outputs"]]


def function_signature_to_4byte_selector(event_signature: str) -> bytes:
    return keccak(text=event_signature.replace(" ", ""))[:4]


def function_abi_to_4byte_selector(function_abi: ABIFunction) -> bytes:
    function_signature = _abi_to_signature(function_abi)
    return function_signature_to_4byte_selector(function_signature)


def event_signature_to_log_topic(event_signature: str) -> bytes:
    return keccak(text=event_signature.replace(" ", ""))


def event_abi_to_log_topic(event_abi: ABIEvent) -> bytes:
    event_signature = _abi_to_signature(event_abi)
    return event_signature_to_log_topic(event_signature)
