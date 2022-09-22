from typing import Any, Dict

from .crypto import keccak


def collapse_if_tuple(abi: Dict[str, Any]) -> str:
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
            "The 'type' must be a string, but got %r of type %s" % (typ, type(typ))
        )
    elif not typ.startswith("tuple"):
        return typ

    delimited = ",".join(collapse_if_tuple(c) for c in abi["components"])
    # Whatever comes after "tuple" is the array dims.  The ABI spec states that
    # this will have the form "", "[]", or "[k]".
    array_dim = typ[5:]
    collapsed = "({}){}".format(delimited, array_dim)

    return collapsed


def _abi_to_signature(abi: Dict[str, Any]) -> str:
    function_signature = "{fn_name}({fn_input_types})".format(
        fn_name=abi["name"],
        fn_input_types=",".join(
            [collapse_if_tuple(abi_input) for abi_input in abi.get("inputs", [])]
        ),
    )
    return function_signature


def function_signature_to_4byte_selector(event_signature: str) -> bytes:
    return keccak(text=event_signature.replace(" ", ""))[:4]


def function_abi_to_4byte_selector(function_abi: Dict[str, Any]) -> bytes:
    function_signature = _abi_to_signature(function_abi)
    return function_signature_to_4byte_selector(function_signature)


def function_abi_to_solidity(function_abi: Dict[str, Any]) -> str:
    inputs = [
        input["type"] + collapse_if_tuple(input)
        if input["type"] == "tuple"
        else input["type"]
        for input in function_abi["inputs"]
    ]
    res_info = ""
    if (
        function_abi.get("stateMutability", "")
        and function_abi["stateMutability"] != "nonpayable"
    ):
        res_info += function_abi["stateMutability"] + " "
    elif function_abi.get("constant", ""):
        res_info += "view "
    outputs = [
        output["type"] + collapse_if_tuple(output)
        if output["type"] == "tuple"
        else output["type"]
        for output in function_abi["outputs"]
    ]

    gas_info = (
        " @{} ".format(function_abi["gas"]) if function_abi.get("gas", "") else ""
    )
    return "function {}({}) {}{} ({}){}".format(
        function_abi["name"],
        ", ".join(inputs),
        res_info,
        "returns",
        ", ".join(outputs),
        gas_info,
    )


def event_signature_to_log_topic(event_signature: str) -> bytes:
    return keccak(text=event_signature.replace(" ", ""))


def event_abi_to_log_topic(event_abi: Dict[str, Any]) -> bytes:
    event_signature = _abi_to_signature(event_abi)
    return event_signature_to_log_topic(event_signature)


def event_abi_to_solidity(event_abi: Dict[str, Any]) -> str:
    inputs = [
        input["type"] + collapse_if_tuple(input)
        if input["type"] == "tuple"
        else input["type"]
        for input in event_abi["inputs"]
    ]
    anonymous = " anonymous" if event_abi.get("anonymous", False) else ""
    return "event {}({}){}".format(event_abi["name"], ", ".join(inputs), anonymous)
