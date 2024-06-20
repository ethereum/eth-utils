from collections import (
    abc,
)
import copy
import itertools
import re
from typing import (
    Any,
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
    ABICallable,
    ABIComponent,
    ABIElement,
    ABIError,
    ABIEvent,
    ABIFunction,
)

from eth_utils.types import (
    is_list_like,
)

from .crypto import (
    keccak,
)


def _abi_input_types(
    abi_inputs: Sequence[ABIComponent],
) -> str:
    """
    Parse type(s) from a list of function or event ABI arguments.

    Returns a string of each type separated by commas.
    """
    return ",".join([collapse_if_tuple(abi_input) for abi_input in abi_inputs])


def _align_abi_input(arg_abi: ABIComponent, arg: Any) -> Union[Any, Tuple[Any, ...]]:
    """
    Aligns the values of any mapping at any level of nesting in ``arg``
    according to the layout of the corresponding abi spec.
    """
    tuple_parts = _get_tuple_type_str_and_dims(arg_abi["type"])

    if tuple_parts is None:
        # Arg is non-tuple.  Just return value.
        return arg

    sub_abis: Iterable[ABIComponent] = []
    tuple_prefix, tuple_dims = tuple_parts
    if tuple_dims is None:
        # Arg is non-list tuple.  Each sub arg in `arg` will be aligned
        # according to its corresponding abi.
        sub_abis = cast(Iterable[ABIComponent], arg_abi["components"])
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


def collapse_if_tuple(abi: Union[ABIComponent, str]) -> str:
    """
    Extract argument types from a function or event ABI parameter.

    With tuple argument types, return a Tuple of each type.
    Returns the param if `abi` is an instance of str or another non-tuple
    type.

    :param abi: A Function or Event ABI component or a string with type info.
    :type abi: `ABIComponent` or `str`
    :return: Type(s) for the function or event ABI param.
    :rtype: `str`

    .. doctest::

        >>> from eth_utils.abi import collapse_if_tuple
        >>> abi = {
        ...   'components': [
        ...     {'name': 'anAddress', 'type': 'address'},
        ...     {'name': 'anInt', 'type': 'uint256'},
        ...     {'name': 'someBytes', 'type': 'bytes'},
        ...   ],
        ...   'type': 'tuple',
        ... }
        >>> collapse_if_tuple(abi)
        '(address,uint256,bytes)'
    """
    if isinstance(abi, str):
        return abi

    element_type = abi["type"]
    if not isinstance(element_type, str):
        raise TypeError(
            f"The 'type' must be a string, but got {repr(element_type)} of type "
            f"{type(element_type)}"
        )
    elif not element_type.startswith("tuple"):
        return element_type

    delimited = ",".join(collapse_if_tuple(c) for c in abi["components"])
    # Whatever comes after "tuple" is the array dims. The ABI spec states that
    # this will have the form "", "[]", or "[k]".
    array_dim = element_type[5:]
    collapsed = f"({delimited}){array_dim}"

    return collapsed


def abi_to_signature(abi_element: ABIElement) -> str:
    """
    Returns a string signature representation of the function or event ABI
    and arguments.

    Signatures consist of the name followed by a list of arguments.

    :param abi_element: ABI element.
    :type abi_element: `ABIElement`
    :return: Stringified ABI signature
    :rtype: `str`

    .. doctest::

        >>> from eth_utils import abi_to_signature
        >>> abi_element = {
        ...   'constant': False,
        ...   'inputs': [
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     }
        ...   ],
        ...   'name': 'f',
        ...   'outputs': [],
        ...   'payable': False,
        ...   'stateMutability': 'nonpayable',
        ...   'type': 'function'
        ... }
        >>> abi_to_signature(abi_element)
        'f(uint256)'
    """
    signature = "{name}({input_types})"

    abi_type = str(abi_element.get("type", ""))
    if abi_type == "fallback" or abi_type == "receive":
        return signature.format(name=abi_type, input_types="")

    if abi_type == "constructor":
        fn_name = abi_type
    else:
        fn_name = str(abi_element.get("name", abi_type))

    abi_inputs = cast(Sequence[ABIComponent], abi_element.get("inputs", []))
    if len(abi_inputs) == 0:
        return signature.format(name=fn_name, input_types="")
    else:
        fn_input_types = _abi_input_types(abi_inputs)
        return signature.format(name=fn_name, input_types=fn_input_types)


def filter_abi_by_name(
    name: str, contract_abi: ABI
) -> List[Union[ABIFunction, ABIEvent, ABIError]]:
    """
    Get one or more function and event ABIs by name.

    :param name: Name of the function, event or error.
    :type name: `str`
    :param contract_abi: Contract ABI.
    :type contract_abi: `ABI`
    :return: Function or event ABIs with matching name.
    :rtype: `List[ABIFunction, ABIEvent, ABIError]`

    .. doctest::

            >>> from eth_utils.abi import filter_abi_by_name
            >>> abi = [
            ...     {
            ...         "constant": False,
            ...         "inputs": [],
            ...         "name": "func_1",
            ...         "outputs": [],
            ...         "type": "function",
            ...     },
            ...     {
            ...         "constant": False,
            ...         "inputs": [
            ...             {"name": "a", "type": "uint256"},
            ...         ],
            ...         "name": "func_2",
            ...         "outputs": [],
            ...         "type": "function",
            ...     },
            ...     {
            ...         "constant": False,
            ...         "inputs": [
            ...             {"name": "a", "type": "uint256"},
            ...             {"name": "b", "type": "uint256"},
            ...         ],
            ...         "name": "func_3",
            ...         "outputs": [],
            ...         "type": "function",
            ...     },
            ...     {
            ...         "constant": False,
            ...         "inputs": [
            ...             {"name": "a", "type": "uint256"},
            ...             {"name": "b", "type": "uint256"},
            ...             {"name": "c", "type": "uint256"},
            ...         ],
            ...         "name": "func_4",
            ...         "outputs": [],
            ...         "type": "function",
            ...     },
            ... ]
            >>> filter_abi_by_name("func_1", abi)
            [{'constant': False, 'inputs': [], 'name': 'func_1', 'outputs': [], \
'type': 'function'}]
    """
    return [
        abi
        for abi in contract_abi
        if (
            (
                abi["type"] == "function"
                or abi["type"] == "event"
                or abi["type"] == "error"
            )
            and abi["name"] == name
        )
    ]


def filter_abi_by_type(type: str, contract_abi: ABI) -> List[ABIElement]:
    """
    Return a list of each ``ABIElement`` that is of type ``type``.

    :param type: Type of ABI element to filter by.
    :type type: `str`
    :param contract_abi: Contract ABI.
    :type contract_abi: `ABI`
    :return: List of ABI elements of the specified type.
    :rtype: `List[ABIElement]`

    .. doctest::

        >>> from eth_utils import filter_abi_by_type
        >>> abi = [
        ...   {"type": "function", "name": "myFunction", "inputs": [], "outputs": []},
        ...   {"type": "function", "name": "myFunction2", "inputs": [], "outputs": []},
        ...   {"type": "event", "name": "MyEvent", "inputs": []}
        ... ]
        >>> filter_abi_by_type("function", abi)
        [{'type': 'function', 'name': 'myFunction', 'inputs': [], 'outputs': []}, \
{'type': 'function', 'name': 'myFunction2', 'inputs': [], 'outputs': []}]
    """
    return [abi for abi in contract_abi if abi["type"] == type]


def get_all_function_abis(contract_abi: ABI) -> Sequence[ABIFunction]:
    """
    Return interfaces for each function in the contract ABI.

    :param abi: Contract ABI.
    :type abi: `ABI`
    :return: List of ABIs for each function interface.
    :rtype: `list[ABIFunction]`

    .. doctest::

        >>> from eth_utils import get_all_function_abis
        >>> contract_abi = [
        ...   {"type": "function", "name": "myFunction", "inputs": [], "outputs": []},
        ...   {"type": "function", "name": "myFunction2", "inputs": [], "outputs": []},
        ...   {"type": "event", "name": "MyEvent", "inputs": []}
        ... ]
        >>> get_all_function_abis(contract_abi)
        [{'type': 'function', 'name': 'myFunction', 'inputs': [], 'outputs': []}, \
{'type': 'function', 'name': 'myFunction2', 'inputs': [], 'outputs': []}]
    """
    return [
        cast(ABIFunction, function_abi)
        for function_abi in filter_abi_by_type("function", contract_abi)
    ]


def get_all_event_abis(contract_abi: ABI) -> Sequence[ABIEvent]:
    """
    Return interfaces for each event in the contract ABI.

    :param abi: Contract ABI.
    :type abi: `ABI`
    :return: List of ABIs for each event interface.
    :rtype: `list[ABIEvent]`

    .. doctest::

        >>> from eth_utils import get_all_event_abis
        >>> contract_abi = [
        ...   {"type": "function", "name": "myFunction", "inputs": [], "outputs": []},
        ...   {"type": "function", "name": "myFunction2", "inputs": [], "outputs": []},
        ...   {"type": "event", "name": "MyEvent", "inputs": []}
        ... ]
        >>> get_all_event_abis(contract_abi)
        [{'type': 'event', 'name': 'MyEvent', 'inputs': []}]
    """
    return [
        cast(ABIEvent, event) for event in filter_abi_by_type("event", contract_abi)
    ]


def get_normalized_abi_inputs(
    abi_element: ABIElement,
    args: Sequence[Any],
    kwargs: Dict[str, Any],
) -> Tuple[Any, ...]:
    r"""
    Flattens positional args (``args``) and keyword args (``kwargs``) into a Tuple and
    uses the ``abi_element`` for validation.

    Checks to ensure that the correct number of args were given, no duplicate args were
    given, and no unknown args were given.  Returns a list of argument values aligned
    to the order of inputs defined in ``abi_element``.

    :param abi_element: ABI element.
    :type abi_element: `ABIElement`
    :param args: Positional arguments for the function.
    :type args: `Sequence[Any]`
    :param kwargs: Keyword arguments for the function.
    :type kwargs: `Dict[str, Any]`
    :return: Arguments list.
    :rtype: `Tuple[Any]`

    .. doctest::

        >>> from eth_utils import get_normalized_abi_inputs
        >>> abi = {
        ...   'constant': False,
        ...   'inputs': [
        ...     {
        ...       'name': 'name',
        ...       'type': 'string'
        ...     },
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     },
        ...     {
        ...       'name': 't',
        ...       'components': [
        ...         {'name': 'anAddress', 'type': 'address'},
        ...         {'name': 'anInt', 'type': 'uint256'},
        ...         {'name': 'someBytes', 'type': 'bytes'},
        ...       ],
        ...       'type': 'tuple'
        ...     }
        ...   ],
        ...   'name': 'f',
        ...   'outputs': [],
        ...   'payable': False,
        ...   'stateMutability': 'nonpayable',
        ...   'type': 'function'
        ... }
        >>> get_normalized_abi_inputs(abi, ('myName', 123), {'t': ('0x1', 1, b'\x01')})
        ('myName', 123, ('0x1', 1, b'\x01'))
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        raise ValueError(
            f"Inputs not supported for function types 'fallback' or 'receive'. Provided"
            f" ABI type was `{abi_element.get('type')}` with inputs "
            f"`{abi_element.get('inputs')}`."
        )

    function_inputs = abi_element["inputs"]
    if len(args) + len(kwargs) != len(function_inputs):
        raise TypeError(
            f"Incorrect argument count. Expected '{len(function_inputs)}'"
            f". Got '{len(args) + len(kwargs)}'"
        )

    # If no keyword args were given, we don't need to align them
    if not kwargs:
        return cast(Tuple[Any, ...], args)

    kwarg_names = set(kwargs.keys())
    sorted_arg_names = tuple(arg_abi["name"] for arg_abi in function_inputs)
    args_as_kwargs = dict(zip(sorted_arg_names, args))

    # Check for duplicate args
    duplicate_args = kwarg_names.intersection(args_as_kwargs.keys())
    if duplicate_args:
        raise TypeError(
            f"{abi_element.get('name')}() got multiple values for argument(s) "
            f"'{', '.join(duplicate_args)}'"
        )

    # Check for unknown args
    unknown_args = kwarg_names.difference(sorted_arg_names)
    if unknown_args:
        if abi_element.get("name"):
            raise TypeError(
                f"{abi_element.get('name')}() got unexpected keyword argument(s)"
                f" '{', '.join(unknown_args)}'"
            )
        raise TypeError(
            f"Type: '{abi_element.get('type')}' got unexpected keyword argument(s)"
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


def get_aligned_abi_inputs(
    abi_element: ABIElement,
    args: Union[Tuple[Any, ...], Mapping[Any, Any]],
) -> Tuple[Tuple[Any, ...], Tuple[Any, ...]]:
    """
    Returns a pair of nested Tuples containing a list of types and a list of input
    names sorted by the order specified by the ``abi``.

    The args contained in ``args`` may contain nested mappings or sequences
    corresponding to tuple-encoded values in ``abi``.

    :param abi_element: ABI element.
    :type abi_element: `ABIElement`
    :param args: Arguments for the function.
    :type args: `Union[Tuple[Any, ...], Mapping[Any, Any]]`
    :return: Tuple of types and aligned arguments.
    :rtype: `Tuple[Tuple[Any, ...], Tuple[Any, ...]]`

    .. doctest::

        >>> from eth_utils import get_aligned_abi_inputs
        >>> abi = {
        ...   'constant': False,
        ...   'inputs': [
        ...     {
        ...       'name': 'name',
        ...       'type': 'string'
        ...     },
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     }
        ...   ],
        ...   'name': 'f',
        ...   'outputs': [],
        ...   'payable': False,
        ...   'stateMutability': 'nonpayable',
        ...   'type': 'function'
        ... }
        >>> get_aligned_abi_inputs(abi, ('myName', 123))
        (('string', 'uint256'), ('myName', 123))
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        raise ValueError(
            f"Inputs not supported for function types 'fallback' or 'receive'. Provided"
            f" ABI type was `{abi_element.get('type')}` with inputs "
            f"`{abi_element.get('inputs')}`."
        )

    if isinstance(args, abc.Mapping):
        # `args` is mapping.  Align values according to abi order.
        args = tuple(args[abi["name"]] for abi in abi_element["inputs"])

    return (
        tuple(collapse_if_tuple(abi) for abi in abi_element["inputs"]),
        type(args)(
            _align_abi_input(abi, arg) for abi, arg in zip(abi_element["inputs"], args)
        ),
    )


def get_abi_input_names(abi_element: ABIElement) -> List[str]:
    """
    Return names for each input from the function or event ABI.

    :param abi_element: ABI element.
    :type abi_element: `ABIElement`
    :return: Names for each input in the function or event ABI.
    :rtype: `List[str]`

    .. doctest::

        >>> from eth_utils import get_abi_input_names
        >>> abi = {
        ...   'constant': False,
        ...   'inputs': [
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     }
        ...   ],
        ...   'name': 'f',
        ...   'outputs': [],
        ...   'payable': False,
        ...   'stateMutability': 'nonpayable',
        ...   'type': 'function'
        ... }
        >>> get_abi_input_names(abi)
        ['s']
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        raise ValueError(
            f"Inputs not supported for function types 'fallback' or 'receive'. Provided"
            f" ABI type was '{abi_element.get('type')}'."
        )
    return [arg["name"] for arg in abi_element["inputs"]]


def get_abi_input_types(abi_element: ABIElement) -> List[str]:
    """
    Return types for each input from the function or event ABI.

    :param abi_element: ABI element.
    :type abi_element: `ABIElement`
    :return: Types for each input in the function or event ABI.
    :rtype: `List[str]`

    .. doctest::

        >>> from eth_utils import get_abi_input_types
        >>> abi = {
        ...   'constant': False,
        ...   'inputs': [
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     }
        ...   ],
        ...   'name': 'f',
        ...   'outputs': [],
        ...   'payable': False,
        ...   'stateMutability': 'nonpayable',
        ...   'type': 'function'
        ... }
        >>> get_abi_input_types(abi)
        ['uint256']
    """
    if (
        "inputs" not in abi_element
        or abi_element["type"] == "fallback"
        or abi_element["type"] == "receive"
    ):
        raise ValueError(
            f"Inputs not supported for function types 'fallback' or 'receive'. Provided"
            f" ABI type was '{abi_element.get('type')}'."
        )

    return [collapse_if_tuple(arg) for arg in abi_element["inputs"]]


def get_abi_output_names(abi_element: ABIElement) -> List[str]:
    """
    Return names for each output from the ABI element.

    :param abi_element: ABI element.
    :type abi_element: `ABIElement`
    :return: Names for each function output in the function ABI.
    :rtype: `List[str]`

    .. doctest::

        >>> from eth_utils import get_abi_output_names
        >>> abi = {
        ...   'constant': False,
        ...   'inputs': [
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     }
        ...   ],
        ...   'name': 'f',
        ...   'outputs': [
        ...     {
        ...       'name': 'name',
        ...       'type': 'string'
        ...     },
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     }
        ...   ],
        ...   'payable': False,
        ...   'stateMutability': 'nonpayable',
        ...   'type': 'function'
        ... }
        >>> get_abi_output_names(abi)
        ['name', 's']
    """
    if "outputs" not in abi_element or abi_element["type"] != "function":
        raise ValueError(
            f"Outputs only supported for ABI type 'function'. Provided"
            f" ABI type was '{abi_element.get('type')}'."
        )
    return [arg["name"] for arg in abi_element["outputs"]]


def get_abi_output_types(abi_element: ABIElement) -> List[str]:
    """
    Return types for each output from the function ABI.

    :param abi_element: ABI element.
    :type abi_element: `ABIElement`
    :return: Types for each function output in the function ABI.
    :rtype: `List[str]`

    .. doctest::

        >>> from eth_utils import get_abi_output_types
        >>> abi = {
        ...   'constant': False,
        ...   'inputs': [
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     }
        ...   ],
        ...   'name': 'f',
        ...   'outputs': [
        ...     {
        ...       'name': 'name',
        ...       'type': 'string'
        ...     },
        ...     {
        ...       'name': 's',
        ...       'type': 'uint256'
        ...     }
        ...   ],
        ...   'payable': False,
        ...   'stateMutability': 'nonpayable',
        ...   'type': 'function'
        ... }
        >>> get_abi_output_types(abi)
        ['string', 'uint256']

    """
    if "outputs" not in abi_element or abi_element["type"] != "function":
        raise ValueError(
            f"Outputs only supported for ABI type `function`. Provided"
            f" ABI type was `{abi_element.get('type')}` and outputs were "
            f"`{abi_element.get('outputs')}`."
        )
    return [collapse_if_tuple(arg) for arg in abi_element["outputs"]]


def function_signature_to_4byte_selector(function_signature: str) -> bytes:
    r"""
    Return the 4-byte function selector from a function signature string.

    :param function_signature: String representation of the function name and arguments.
    :type function_signature: `string`
    :return: 4-byte function selector.
    :rtype: `bytes`

    .. doctest::

        >>> from eth_utils import function_signature_to_4byte_selector
        >>> function_signature_to_4byte_selector('myFunction()')
        b'\xc3x\n:'
    """
    return keccak(text=function_signature.replace(" ", ""))[:4]


def function_abi_to_4byte_selector(callable_abi: ABICallable) -> bytes:
    r"""
    Return the 4-byte function signature of the provided function ABI.

    :param callable_abi: Callable function ABI.
    :type callable_abi: `ABICallable`
    :return: 4-byte function signature.
    :rtype: `bytes`

    .. doctest::

        >>> from eth_utils import function_abi_to_4byte_selector
        >>> callable_abi = {
        ...   'type': 'function',
        ...   'name': 'myFunction',
        ...   'inputs': [],
        ...   'outputs': []
        ... }
        >>> function_abi_to_4byte_selector(callable_abi)
        b'\xc3x\n:'
    """
    function_signature = abi_to_signature(callable_abi)
    return function_signature_to_4byte_selector(function_signature)


def event_signature_to_log_topic(event_signature: str) -> bytes:
    r"""
    Return the 32-byte keccak signature of the log topic for an event signature.

    :param event_signature: String representation of the event name and arguments.
    :type event_signature: `string`
    :return: Log topic bytes.
    :rtype: `bytes`

    .. doctest::

        >>> from eth_utils import event_signature_to_log_topic
        >>> event_signature_to_log_topic('MyEvent()')
        b'M\xbf\xb6\x8bC\xdd\xdf\xa1+Q\xeb\xe9\x9a\xb8\xfd\xedb\x0f\x9a\n\xc21B\x87\x9aO\x19*\x1byR\xd2'
    """
    return keccak(text=event_signature.replace(" ", ""))


def event_abi_to_log_topic(event_abi: ABIEvent) -> bytes:
    r"""
    Return the 32-byte keccak signature of the log topic from an event ABI.

    :param event_abi: Event ABI.
    :type event_abi: `ABIEvent`
    :return: Log topic bytes.
    :rtype: `bytes`

    .. doctest::

        >>> from eth_utils import event_abi_to_log_topic
        >>> abi = {
        ...   'type': 'event',
        ...   'anonymous': False,
        ...   'name': 'MyEvent',
        ...   'inputs': []
        ... }
        >>> event_abi_to_log_topic(abi)
        b'M\xbf\xb6\x8bC\xdd\xdf\xa1+Q\xeb\xe9\x9a\xb8\xfd\xedb\x0f\x9a\n\xc21B\x87\x9aO\x19*\x1byR\xd2'
    """
    event_signature = abi_to_signature(event_abi)
    return event_signature_to_log_topic(event_signature)
