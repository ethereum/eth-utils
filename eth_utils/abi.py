from typing import (
    Any,
    Dict,
    Union,
)

from typing_extensions import (
    deprecated,
)

from .crypto import (
    keccak,
)


@deprecated(
    "`collapse_if_tuple` is deprecated, use "
    "`get_normalized_abi_component_type` instead."
)
def collapse_if_tuple(abi: Dict[str, Any]) -> str:
    """
    DEPRECATED: `collapse_if_tuple` will be removed in the next major version.
    Use `get_normalized_abi_component_type` instead.

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


def get_normalized_abi_component_type(abi_component: Union[Dict[str, Any], str]) -> str:
    """
    Extract argument types from a function or event ABI parameter.
    With tuple argument types, return a Tuple of each type.
    Returns the param if `abi_component` is an instance of str or another non-tuple
    type.
    :param abi_component: A string with type info.
    :type abi_component: `Dict[str, Any]` or `str`
    :return: Type(s) for the function or event ABI param.
    :rtype: `str`
    .. doctest:
        >>> from eth_utils.abi import get_normalized_abi_component_type
        >>> abi_component = {
        ...   'components': [
        ...     {'name': 'anAddress', 'type': 'address'},
        ...     {'name': 'anInt', 'type': 'uint256'},
        ...     {'name': 'someBytes', 'type': 'bytes'},
        ...   ],
        ...   'type': 'tuple',
        ... }
        >>> get_normalized_abi_component_type(abi_component)
        '(address,uint256,bytes)'
    """
    if isinstance(abi_component, str):
        return abi_component

    element_type = abi_component["type"]
    if not isinstance(element_type, str):
        raise TypeError(
            f"The 'type' must be a string, but got {repr(element_type)} of type "
            f"{type(element_type)}"
        )
    elif not element_type.startswith("tuple"):
        return element_type

    delimited = ",".join(
        get_normalized_abi_component_type(c) for c in abi_component["components"]
    )
    # Whatever comes after "tuple" is the array dims. The ABI spec states that
    # this will have the form "", "[]", or "[k]".
    array_dim = element_type[5:]
    collapsed = f"({delimited}){array_dim}"

    return collapsed
