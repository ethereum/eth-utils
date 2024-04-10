import functools
from typing import (
    Any,
    Collection,
    Dict,
    List,
    Optional,
    Sequence,
    cast,
)

from eth_typing import (
    ABI,
    ABIElement,
    ABIEvent,
    ABIFunction,
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


def _abi_to_signature(abi: Dict[str, Any]) -> str:
    fn_input_types = ",".join(
        [collapse_if_tuple(abi_input) for abi_input in abi.get("inputs", [])]
    )
    function_signature = f"{abi['name']}({fn_input_types})"
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


def _filter_by_argument_name(
    argument_names: Collection[str], contract_abi: ABI
) -> List[ABIElement]:
    return [
        abi
        for abi in contract_abi
        if set(argument_names).intersection(get_abi_input_names(abi))
        == set(argument_names)
    ]


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
        return [
            collapse_if_tuple(cast(Dict[str, Any], arg))
            for arg in abi_element["inputs"]
        ]


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
        return [
            collapse_if_tuple(cast(Dict[str, Any], arg))
            for arg in function_abi["outputs"]
        ]


def function_signature_to_4byte_selector(event_signature: str) -> bytes:
    return keccak(text=event_signature.replace(" ", ""))[:4]


def function_abi_to_4byte_selector(function_abi: Dict[str, Any]) -> bytes:
    function_signature = _abi_to_signature(function_abi)
    return function_signature_to_4byte_selector(function_signature)


def event_signature_to_log_topic(event_signature: str) -> bytes:
    return keccak(text=event_signature.replace(" ", ""))


def event_abi_to_log_topic(event_abi: Dict[str, Any]) -> bytes:
    event_signature = _abi_to_signature(event_abi)
    return event_signature_to_log_topic(event_signature)
