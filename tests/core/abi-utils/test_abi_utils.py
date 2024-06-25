import pytest
import re
from typing import (
    Any,
    Dict,
    Mapping,
    NamedTuple,
    Sequence,
    Tuple,
    Type,
    Union,
)

from eth_typing import (
    ABI,
    ABIComponent,
    ABIComponentIndexed,
    ABIConstructor,
    ABIElement,
    ABIError,
    ABIEvent,
    ABIFallback,
    ABIFunction,
    ABIReceive,
    HexStr,
)

from eth_utils.abi import (
    abi_to_signature,
    collapse_if_tuple,
    event_abi_to_log_topic,
    event_signature_to_log_topic,
    filter_abi_by_name,
    filter_abi_by_type,
    function_abi_to_4byte_selector,
    function_signature_to_4byte_selector,
    get_abi_input_names,
    get_abi_input_types,
    get_abi_output_names,
    get_abi_output_types,
    get_aligned_abi_inputs,
    get_all_event_abis,
    get_all_function_abis,
    get_normalized_abi_inputs,
)
from eth_utils.hexadecimal import (
    encode_hex,
)

FN_ABI_A: ABIFunction = {"name": "tokenLaunched", "type": "function", "inputs": []}
FN_ABI_B: ABIFunction = {"name": "CEILING", "type": "function", "inputs": []}
FN_ABI_C: ABIFunction = {
    "name": "Registrar",
    "type": "function",
    "inputs": [
        {"type": "address", "name": "a"},
        {"type": "bytes32", "name": "b"},
        {"type": "address", "name": "c"},
    ],
}
FN_ABI_D: ABIFunction = {
    "constant": False,
    "inputs": [
        {"name": "a", "type": "int256"},
        {"name": "b", "type": "int256"},
        {"name": "c", "type": "int256"},
        {"name": "d", "type": "int256"},
    ],
    "name": "testFn",
    "outputs": [],
    "type": "function",
}
FN_ABI_E: ABIFunction = {
    "constant": False,
    "inputs": [
        {"name": "", "type": "int256"},
        {"name": "", "type": "int256"},
    ],
    "name": "testFn",
    "outputs": [],
    "type": "function",
}
FN_ABI_F: ABIFunction = {
    "constant": False,
    "inputs": [
        {"name": "x", "type": "uint256"},
        {"name": "y", "type": "uint256"},
    ],
    "name": "add",
    "outputs": [{"name": "sum", "type": "uint256"}],
    "type": "function",
}
FN_ABI_DUPLICATE_NAMES: ABIFunction = {
    "constant": False,
    "inputs": [
        {"name": "b", "type": "int256"},
        {"name": "b", "type": "int256"},
        {"name": "a", "type": "int256"},
    ],
    "name": "testFn",
    "outputs": [],
    "type": "function",
}
FN_ABI_NESTED_TUPLE_INPUTS: ABIFunction = {
    "inputs": [
        {
            "components": [
                {"name": "anAddress", "type": "address"},
                {"name": "anInt", "type": "uint256"},
                {"name": "someBytes", "type": "bytes"},
                {
                    "name": "aTuple",
                    "type": "tuple",
                    "components": [
                        {"name": "anAddress", "type": "address"},
                        {"name": "anInt", "type": "uint256"},
                        {"name": "someBytes", "type": "bytes"},
                    ],
                },
            ],
            "type": "tuple",
            "name": "aTuple",
        }
    ],
    "name": "nestedTupleInputs",
    "type": "function",
}
FN_ABI_NO_INPUTS: ABIFunction = {"name": "noInputs", "type": "function"}
FN_ABI_ZERO_TUPLE_INPUT: ABIFunction = {
    "inputs": [{"components": [], "type": "tuple", "name": "zroTuple"}],
    "name": "zeroTupleInput",
    "type": "function",
}
FN_ABI_SINGLETON_TUPLE_INPUT: ABIFunction = {
    "inputs": [
        {
            "components": [{"name": "anAddress", "type": "address"}],
            "type": "tuple",
            "name": "aTuple",
        }
    ],
    "name": "singletonTupleInput",
    "type": "function",
}
FN_ABI_ARRAY_OF_TUPLES: ABIFunction = {
    "name": "tupleArrayInput",
    "type": "function",
    "inputs": [
        {
            "name": "tupleArray",
            "type": "tuple[]",
            "components": [
                {"name": "anAddress", "type": "address"},
                {"name": "anInt", "type": "uint256"},
                {"name": "someBytes", "type": "bytes"},
            ],
        }
    ],
}
FN_ABI_FIXED_ARRAY_OF_TUPLES: ABIFunction = {
    "name": "tupleFixedArrayInput",
    "type": "function",
    "inputs": [
        {
            "name": "tupleArrayFixed",
            "type": "tuple[5]",
            "components": [
                {"name": "anAddress", "type": "address"},
                {"name": "anInt", "type": "uint256"},
                {"name": "someBytes", "type": "bytes"},
            ],
        }
    ],
}

FN_ABI_MULTI_TUPLE_INPUTS: ABIFunction = {
    "constant": False,
    "inputs": [
        {
            "components": [
                {"name": "a", "type": "uint256"},
                {"name": "b", "type": "uint256[]"},
                {
                    "components": [
                        {"name": "x", "type": "uint256"},
                        {"name": "y", "type": "uint256"},
                    ],
                    "name": "c",
                    "type": "tuple[]",
                },
            ],
            "name": "s",
            "type": "tuple",
        },
        {
            "components": [
                {"name": "x", "type": "uint256"},
                {"name": "y", "type": "uint256"},
            ],
            "name": "t",
            "type": "tuple",
        },
        {"name": "a", "type": "uint256"},
        {
            "components": [
                {"name": "x", "type": "uint256"},
                {"name": "y", "type": "uint256"},
            ],
            "name": "b",
            "type": "tuple[][]",
        },
    ],
    "name": "f",
    "outputs": [],
    "payable": False,
    "stateMutability": "nonpayable",
    "type": "function",
}
CONSTRUCTOR_ABI: ABIConstructor = {
    "inputs": [{"name": "started", "type": "str"}],
    "type": "constructor",
}
FALLBACK_ABI: ABIFallback = {"type": "fallback"}
RECEIVE_ABI: ABIReceive = {"type": "receive"}
ERROR_ABI: ABIError = {
    "name": "Invalid",
    "type": "error",
    "inputs": [
        {"type": "address", "name": "a"},
        {"type": "bytes32", "name": "b"},
    ],
}
EVENT_ABI_TRANSFER: ABIEvent = {
    "anonymous": False,
    "name": "Transfer",
    "type": "event",
    "inputs": [
        {"indexed": True, "name": "from", "type": "address"},
        {"indexed": True, "name": "to", "type": "address"},
        {"indexed": False, "name": "value", "type": "uint256"},
    ],
}
EVENT_ABI_LOG_NO_ARG: ABIEvent = {
    "anonymous": False,
    "name": "LogNoArg",
    "type": "event",
    "inputs": [],
}
EVENT_ABI_LOG_SINGLE_ARG: ABIEvent = {
    "anonymous": False,
    "name": "LogSingleArg",
    "type": "event",
    "inputs": [{"name": "arg0", "type": "uint256"}],
}
EVENT_ABI_LOG_SINGLE_WITH_INDEX: ABIEvent = {
    "anonymous": False,
    "name": "LogSingleWithIndex",
    "type": "event",
    "inputs": [{"indexed": True, "name": "arg0", "type": "uint256"}],
}
EVENT_ABI_LOG_TWO_EVENTS: ABIEvent = {
    "anonymous": False,
    "name": "logTwoEvents",
    "type": "event",
    "inputs": [
        {"name": "_arg0", "type": "uint256"},
    ],
}


@pytest.mark.parametrize(
    "fn_abi,expected",
    ((FN_ABI_A, "0xde78e78a"), (FN_ABI_B, "0xc51bf934"), (FN_ABI_C, "0xa31d5580")),
)
def test_fn_abi_to_4byte_selector(fn_abi: ABIFunction, expected: HexStr) -> None:
    bytes_selector = function_abi_to_4byte_selector(fn_abi)
    hex_selector = encode_hex(bytes_selector)
    assert hex_selector == expected


@pytest.mark.parametrize(
    "signature,expected",
    (
        ("tokenLaunched()", "0xde78e78a"),
        ("CEILING()", "0xc51bf934"),
        ("Registrar(address,bytes32,address)", "0xa31d5580"),
    ),
)
def test_fn_signature_to_4byte_selector(signature: str, expected: HexStr) -> None:
    bytes_selector = function_signature_to_4byte_selector(signature)
    hex_selector = encode_hex(bytes_selector)
    assert hex_selector == expected


@pytest.mark.parametrize(
    "abi_function,expected",
    (
        (
            FN_ABI_NESTED_TUPLE_INPUTS,
            "nestedTupleInputs((address,uint256,bytes,(address,uint256,bytes)))",
        ),
        (FN_ABI_NO_INPUTS, "noInputs()"),
        (FN_ABI_ARRAY_OF_TUPLES, "tupleArrayInput((address,uint256,bytes)[])"),
        (
            FN_ABI_FIXED_ARRAY_OF_TUPLES,
            "tupleFixedArrayInput((address,uint256,bytes)[5])",
        ),
        (FN_ABI_ZERO_TUPLE_INPUT, "zeroTupleInput(())"),
        (FN_ABI_SINGLETON_TUPLE_INPUT, "singletonTupleInput((address))"),
        ({"type": "constructor"}, "constructor()"),
        (
            {"type": "constructor", "inputs": [{"state": "started", "type": "str"}]},
            "constructor(str)",
        ),
        (
            {
                "type": "error",
                "name": "failed",
                "inputs": [
                    {"x": b"1", "type": "bytes32"},
                    {"y": "value", "type": "str"},
                ],
            },
            "failed(bytes32,str)",
        ),
        ({"type": "error", "name": "myError"}, "myError()"),
        ({"type": "event", "name": "foo"}, "foo()"),
        (
            {
                "type": "event",
                "inputs": [
                    {"x": 1, "type": "int"},
                ],
            },
            "event(int)",
        ),
        ({"type": "fallback"}, "fallback()"),  # If no name, fall back to abi type
        ({"type": "receive"}, "receive()"),
        ({"type": "function"}, "function()"),
        ({"type": "error"}, "error()"),
    ),
)
def test_abi_to_signature(abi_function: ABIFunction, expected: str) -> None:
    assert abi_to_signature(abi_function) == expected


def build_contract_abi(abi_elements: Sequence[ABIElement]) -> ABI:
    return list(abi_elements)


@pytest.mark.parametrize(
    "contract_abi,expected_event_abis",
    (
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C]),
            [],
        ),
        (
            build_contract_abi(
                [
                    EVENT_ABI_LOG_NO_ARG,
                    EVENT_ABI_LOG_SINGLE_ARG,
                    EVENT_ABI_LOG_SINGLE_WITH_INDEX,
                ]
            ),
            [
                EVENT_ABI_LOG_NO_ARG,
                EVENT_ABI_LOG_SINGLE_ARG,
                EVENT_ABI_LOG_SINGLE_WITH_INDEX,
            ],
        ),
        (
            build_contract_abi(
                [
                    FN_ABI_A,
                    EVENT_ABI_LOG_NO_ARG,
                ]
            ),
            [
                EVENT_ABI_LOG_NO_ARG,
            ],
        ),
        (
            build_contract_abi([FN_ABI_F]),
            [],
        ),
        (
            build_contract_abi([FN_ABI_F, FALLBACK_ABI, RECEIVE_ABI, CONSTRUCTOR_ABI]),
            [],
        ),
        (
            build_contract_abi(
                [
                    EVENT_ABI_LOG_NO_ARG,
                    FN_ABI_F,
                    FALLBACK_ABI,
                    RECEIVE_ABI,
                    CONSTRUCTOR_ABI,
                    EVENT_ABI_LOG_SINGLE_WITH_INDEX,
                ]
            ),
            [
                EVENT_ABI_LOG_NO_ARG,
                EVENT_ABI_LOG_SINGLE_WITH_INDEX,
            ],
        ),
    ),
)
def test_get_all_event_abis(
    contract_abi: ABI, expected_event_abis: Sequence[ABIEvent]
) -> None:
    assert get_all_event_abis(contract_abi) == expected_event_abis


@pytest.mark.parametrize(
    "contract_abi,abi_name,expected_element_abis",
    (
        (
            build_contract_abi([EVENT_ABI_LOG_NO_ARG]),
            "LogNoArg",
            [EVENT_ABI_LOG_NO_ARG],
        ),
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C]),
            "tokenLaunched",
            [FN_ABI_A],
        ),
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C]),
            "notafunction",
            [],
        ),
        (
            build_contract_abi([ERROR_ABI]),
            "Invalid",
            [ERROR_ABI],
        ),
        (
            build_contract_abi([RECEIVE_ABI]),  # receive abi has no name
            "receive",
            [],
        ),
        (
            build_contract_abi([FALLBACK_ABI]),  # fallback abi has no name
            "fallback",
            [],
        ),
        (
            build_contract_abi([CONSTRUCTOR_ABI]),  # constructor abi has no name
            "constructor",
            [],
        ),
        (
            build_contract_abi([FN_ABI_A, FN_ABI_A]),
            "tokenLaunched",
            [FN_ABI_A, FN_ABI_A],
        ),
    ),
)
def test_filter_abi_by_name(
    contract_abi: ABI, abi_name: str, expected_element_abis: Sequence[ABIElement]
) -> None:
    assert filter_abi_by_name(abi_name, contract_abi) == expected_element_abis


@pytest.mark.parametrize(
    "contract_abi,abi_type,expected_abis",
    (
        (
            build_contract_abi(
                [EVENT_ABI_LOG_TWO_EVENTS, FN_ABI_A, FN_ABI_B, FN_ABI_C]
            ),
            "function",
            [FN_ABI_A, FN_ABI_B, FN_ABI_C],
        ),
        (
            build_contract_abi(
                [EVENT_ABI_LOG_TWO_EVENTS, FN_ABI_A, FN_ABI_B, FN_ABI_C]
            ),
            "notatype",
            [],
        ),
    ),
)
def test_filter_abi_by_type(
    contract_abi: ABI, abi_type: str, expected_abis: Sequence[ABIElement]
) -> None:
    assert filter_abi_by_type(abi_type, contract_abi) == expected_abis


@pytest.mark.parametrize(
    "abi_element,input_args",
    (
        (
            ABIEvent(
                {
                    "type": "event",
                    "name": "LogSingleArg",
                    "inputs": [{"name": "arg0", "type": "uint256"}],
                }
            ),
            [{"name": "arg0", "type": "uint256"}],
        ),
        (
            ABIEvent(
                {
                    "type": "event",
                    "name": "LogSingleWithIndex",
                    "inputs": [{"name": "arg0", "type": "uint256", "indexed": True}],
                }
            ),
            [{"name": "arg0", "type": "uint256", "indexed": True}],
        ),
        (
            ABIEvent(
                {
                    "type": "event",
                    "name": "LogMultiArg",
                    "inputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "uint256"},
                        {"name": "arg2", "type": "uint256"},
                    ],
                }
            ),
            [
                {"name": "arg0", "type": "uint256"},
                {"name": "arg1", "type": "uint256"},
                {"name": "arg2", "type": "uint256"},
            ],
        ),
        (
            ABIEvent({"type": "event", "name": "LogNoArg", "inputs": []}),
            [],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnSingleArg",
                    "inputs": [{"name": "arg0", "type": "uint256"}],
                }
            ),
            [{"name": "arg0", "type": "uint256"}],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnMultiArg",
                    "inputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "uint256"},
                    ],
                }
            ),
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "uint256"}],
        ),
        (
            ABIConstructor(
                {
                    "type": "constructor",
                    "inputs": [{"name": "inputs", "type": "uint256"}],
                }
            ),
            [{"name": "inputs", "type": "uint256"}],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnNoArg",
                    "inputs": [],
                }
            ),
            [],
        ),
    ),
)
def test_get_input_names_from_abi_element(
    abi_element: ABIElement, input_args: Sequence[ABIElement]
) -> None:
    assert get_abi_input_names(abi_element) == [arg.get("name") for arg in input_args]


@pytest.mark.parametrize(
    "abi_element",
    (
        ABIFallback({"type": "fallback"}),
        ABIReceive({"type": "receive"}),
    ),
)
def test_get_input_names_raises_for_fallback_or_receive_abi(
    abi_element: ABIElement,
) -> None:
    with pytest.raises(
        ValueError,
        match=f"Inputs not supported for function types 'fallback' or 'receive'."
        f" Provided ABI type was '{abi_element['type']}'.",
    ):
        get_abi_input_names(abi_element)


@pytest.mark.parametrize(
    "abi_element,input_args",
    [
        (
            ABIEvent(
                {
                    "type": "event",
                    "name": "LogSingleArg",
                    "inputs": [{"name": "arg0", "type": "uint256"}],
                }
            ),
            [{"name": "arg0", "type": "uint256"}],
        ),
        (
            ABIEvent(
                {
                    "type": "event",
                    "name": "LogSingleWithIndex",
                    "inputs": [
                        ABIComponentIndexed(
                            {"name": "arg0", "type": "uint256", "indexed": True}
                        )
                    ],
                }
            ),
            [{"name": "arg0", "type": "uint256", "indexed": True}],
        ),
        (
            ABIEvent(
                {
                    "type": "event",
                    "name": "LogMultiArg",
                    "inputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "uint256"},
                        {"name": "arg2", "type": "uint256"},
                    ],
                }
            ),
            [
                {"name": "arg0", "type": "uint256"},
                {"name": "arg1", "type": "uint256"},
                {"name": "arg2", "type": "uint256"},
            ],
        ),
        (
            ABIEvent({"type": "event", "name": "LogNoArg", "inputs": []}),
            [],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnSingleArg",
                    "inputs": [{"name": "arg0", "type": "uint256"}],
                }
            ),
            [{"name": "arg0", "type": "uint256"}],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnMultiArg",
                    "inputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "uint256"},
                    ],
                }
            ),
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "uint256"}],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnMultiTypedArg",
                    "inputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "bytes32"},
                    ],
                }
            ),
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "bytes32"}],
        ),
        (
            ABIConstructor(
                {
                    "type": "constructor",
                    "inputs": [{"name": "inputs", "type": "uint256"}],
                }
            ),
            [{"name": "inputs", "type": "uint256"}],
        ),
    ],
)
def test_get_input_types_from_abi_element(
    abi_element: ABIElement, input_args: Sequence[ABIElement]
) -> None:
    assert get_abi_input_types(abi_element) == [arg.get("type") for arg in input_args]


@pytest.mark.parametrize(
    "abi_element",
    (
        ABIFallback({"type": "fallback"}),
        ABIReceive({"type": "receive"}),
    ),
)
def test_get_input_types_raises_for_fallback_or_receive_abi(
    abi_element: ABIElement,
) -> None:
    with pytest.raises(
        ValueError,
        match=f"Inputs not supported for function types 'fallback' or 'receive'."
        f" Provided ABI type was '{abi_element['type']}'.",
    ):
        get_abi_input_types(abi_element)


@pytest.mark.parametrize(
    "abi_element,outputs",
    [
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnSingleArg",
                    "outputs": [{"name": "arg0", "type": "uint256"}],
                }
            ),
            [{"name": "arg0", "type": "uint256"}],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnMultiArg",
                    "outputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "uint256"},
                    ],
                }
            ),
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "uint256"}],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnMultiTypedArg",
                    "outputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "bytes32"},
                    ],
                }
            ),
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "bytes32"}],
        ),
    ],
)
def test_get_abi_output_names(
    abi_element: ABIElement, outputs: Sequence[ABIElement]
) -> None:
    assert get_abi_output_names(abi_element) == [
        output.get("name") for output in outputs
    ]


@pytest.mark.parametrize(
    "abi_element",
    (
        (ABIFallback({"type": "fallback"})),
        (ABIReceive({"type": "receive"})),
        (ABIConstructor({"type": "constructor"})),
        (ABIEvent({"type": "event", "name": "LogNoArg", "inputs": []})),
    ),
)
def test_get_abi_output_names_raises_for_non_function_types(
    abi_element: ABIElement,
) -> None:
    with pytest.raises(
        ValueError,
        match=f"Outputs only supported for ABI type 'function'."
        f" Provided ABI type was '{abi_element['type']}'.",
    ):
        get_abi_output_names(abi_element)


@pytest.mark.parametrize(
    "abi_element,outputs",
    [
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnSingleArg",
                    "outputs": [{"name": "arg0", "type": "uint256"}],
                }
            ),
            [{"name": "arg0", "type": "uint256"}],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnMultiArg",
                    "outputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "uint256"},
                    ],
                }
            ),
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "uint256"}],
        ),
        (
            ABIFunction(
                {
                    "type": "function",
                    "name": "FnMultiTypedArg",
                    "outputs": [
                        {"name": "arg0", "type": "uint256"},
                        {"name": "arg1", "type": "bytes32"},
                    ],
                }
            ),
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "bytes32"}],
        ),
    ],
)
def test_get_abi_output_types(
    abi_element: ABIElement, outputs: Sequence[ABIElement]
) -> None:
    assert get_abi_output_types(abi_element) == [
        output.get("type") for output in outputs
    ]


@pytest.mark.parametrize(
    "abi_element",
    [
        ABIConstructor(
            {
                "type": "constructor",
                "inputs": [{"name": "started", "type": "str"}],
            }
        ),
        ABIFallback({"type": "fallback"}),
        ABIReceive({"type": "receive"}),
        ABIError(
            {
                "type": "error",
                "name": "Invalid",
                "inputs": [
                    {"type": "address", "name": "a"},
                    {"type": "bytes32", "name": "b"},
                ],
            }
        ),
        ABIEvent(
            {
                "type": "event",
                "name": "finished",
                "inputs": [],
            }
        ),
    ],
)
def test_get_abi_output_types_raises_for_non_function_types(
    abi_element: ABIElement,
) -> None:
    with pytest.raises(
        ValueError,
        match=f"Outputs only supported for ABI type `function`."
        f" Provided ABI type was `{abi_element['type']}` and outputs were `None`.",
    ):
        get_abi_output_types(abi_element)


@pytest.mark.parametrize(
    "contract_abi,expected_function_abis",
    (
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C]),
            [FN_ABI_A, FN_ABI_B, FN_ABI_C],
        ),
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C, EVENT_ABI_LOG_NO_ARG]),
            [FN_ABI_A, FN_ABI_B, FN_ABI_C],
        ),
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C, ERROR_ABI]),
            [FN_ABI_A, FN_ABI_B, FN_ABI_C],
        ),
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C, FALLBACK_ABI]),
            [FN_ABI_A, FN_ABI_B, FN_ABI_C],
        ),
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C, RECEIVE_ABI]),
            [FN_ABI_A, FN_ABI_B, FN_ABI_C],
        ),
        (
            build_contract_abi([FN_ABI_A, FN_ABI_B, FN_ABI_C, CONSTRUCTOR_ABI]),
            [FN_ABI_A, FN_ABI_B, FN_ABI_C],
        ),
        (
            build_contract_abi(
                [
                    FN_ABI_A,
                    FN_ABI_B,
                    FN_ABI_C,
                    FALLBACK_ABI,
                    RECEIVE_ABI,
                    CONSTRUCTOR_ABI,
                ]
            ),
            [FN_ABI_A, FN_ABI_B, FN_ABI_C],
        ),
        (
            build_contract_abi([FALLBACK_ABI, RECEIVE_ABI, CONSTRUCTOR_ABI]),
            [],
        ),
    ),
)
def test_get_all_function_abis(
    contract_abi: ABI, expected_function_abis: Sequence[ABIFunction]
) -> None:
    function_abis = get_all_function_abis(contract_abi)
    assert function_abis == expected_function_abis


@pytest.mark.parametrize(
    "event_abi,expected",
    (
        (
            EVENT_ABI_TRANSFER,
            "0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef",
        ),
    ),
)
def test_event_abi_to_log_topic(event_abi: ABIEvent, expected: HexStr) -> None:
    bytes_topic = event_abi_to_log_topic(event_abi)
    hex_topic = encode_hex(bytes_topic)
    assert hex_topic == expected


@pytest.mark.parametrize(
    "event_signature,expected",
    (
        (
            "Transfer(address,address,uint256)",
            "0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef",
        ),
    ),
)
def test_event_signature_to_log_topic(event_signature: str, expected: HexStr) -> None:
    bytes_topic = event_signature_to_log_topic(event_signature)
    hex_topic = encode_hex(bytes_topic)
    assert hex_topic == expected


@pytest.mark.parametrize(
    "abi_component,expected_type_signature",
    (
        (
            (
                ABIComponent(
                    {
                        "components": [
                            {"name": "anAddress", "type": "address"},
                            {"name": "anInt", "type": "uint256"},
                            {"name": "someBytes", "type": "bytes"},
                        ],
                        "type": "tuple",
                        "name": "aTuple",
                    }
                )
            ),
            "(address,uint256,bytes)",
        ),
        (
            (
                ABIComponent(
                    {
                        "components": [
                            {"name": "bytes32", "type": "bytes32[]"},
                            {"name": "bytes", "type": "bytes"},
                            {"name": "someMoarBytes", "type": "bytes"},
                        ],
                        "type": "tuple[]",
                        "name": "aTupleArray",
                    }
                )
            ),
            "(bytes32[],bytes,bytes)[]",
        ),
        (
            (
                ABIComponent(
                    {
                        "components": [
                            {"name": "anAddress", "type": "address"},
                            {"name": "anInt", "type": "uint256"},
                            {"name": "someBytes", "type": "bytes"},
                        ],
                        "type": "tuple[3]",
                        "name": "aMultiDimensionalTuple",
                    }
                )
            ),
            "(address,uint256,bytes)[3]",
        ),
        (
            (
                {
                    "type": "uint256",
                }
            ),
            "uint256",
        ),
        (
            "uint256",
            "uint256",
        ),
    ),
)
def test_collapse_if_tuple(
    abi_component: Union[ABIComponent, Dict[str, Any], str],
    expected_type_signature: str,
) -> None:
    assert collapse_if_tuple(abi_component) == expected_type_signature


@pytest.mark.parametrize(
    "abi_component,message",
    (
        (
            {
                "type": False,
            },
            "The 'type' must be a string, but got False of type <class 'bool'>",
        ),
        (
            {
                "type": "tuple",
                "components": [{"type": 1}],
            },
            "The 'type' must be a string, but got 1 of type <class 'int'>",
        ),
        (
            {"name": "notype"},
            "The 'type' must be a string, but got None of type <class 'NoneType'>",
        ),
    ),
)
def test_collapse_if_tuple_raises_for_invalid_component(
    abi_component: Union[ABIComponent, Dict[str, Any], str],
    message: str,
) -> None:
    with pytest.raises(TypeError, match=re.escape(message)):
        collapse_if_tuple(abi_component)


@pytest.mark.parametrize(
    "abi_element,args,kwargs,expected",
    (
        (
            FN_ABI_C,
            (
                "0x1234567890123456789012345678901234567890",
                b"bar",
                "0x1234567890123456789012345678901234567890",
            ),
            {},
            (
                "0x1234567890123456789012345678901234567890",
                b"bar",
                "0x1234567890123456789012345678901234567890",
            ),
        ),
        (
            FN_ABI_C,
            [],
            {
                "a": "0x1234567890123456789012345678901234567890",
                "b": b"bar",
                "c": "0x1234567890123456789012345678901234567890",
            },
            (
                "0x1234567890123456789012345678901234567890",
                b"bar",
                "0x1234567890123456789012345678901234567890",
            ),
        ),
        (
            FN_ABI_C,
            [1, "0x1234567890123456789012345678901234567890", b"bar"],
            {},
            [
                1,
                "0x1234567890123456789012345678901234567890",
                b"bar",
            ],
        ),
        (
            FN_ABI_E,
            (1, 2),
            {},
            (1, 2),
        ),
        (
            FN_ABI_DUPLICATE_NAMES,
            (1, 2, 3),
            {},
            (1, 2, 3),
        ),
        (
            ERROR_ABI,
            (
                "0x1234567890123456789012345678901234567890",
                b"bar",
            ),
            {},
            (
                "0x1234567890123456789012345678901234567890",
                b"bar",
            ),
        ),
        (
            EVENT_ABI_LOG_TWO_EVENTS,
            (1,),
            {},
            (1,),
        ),
    ),
)
def test_get_normalized_abi_inputs(
    abi_element: ABIElement,
    args: Sequence[Any],
    kwargs: Dict[str, Any],
    expected: Tuple[Any, ...],
) -> None:
    assert get_normalized_abi_inputs(abi_element, args, kwargs) == expected


@pytest.mark.parametrize(
    "abi_element,args,kwargs,error_type,message",
    (
        (
            FN_ABI_NO_INPUTS,
            (),
            {},
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `function` with inputs `None`.",
        ),
        (
            FALLBACK_ABI,
            (),
            {},
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `fallback` with inputs `None`.",
        ),
        (
            RECEIVE_ABI,
            (),
            {},
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `receive` with inputs `None`.",
        ),
        (
            FN_ABI_DUPLICATE_NAMES,
            (1,),
            {"a": 2, "b": 3},
            TypeError,
            "testFn() got multiple values for argument(s) 'b'",
        ),
        (
            FN_ABI_DUPLICATE_NAMES,
            (1,),
            {"d": 2, "e": 3},
            TypeError,
            "testFn() got unexpected keyword argument(s) 'd, e",
        ),
        (
            FN_ABI_E,
            tuple(),
            {"x": 1, "y": 2},
            TypeError,
            "testFn() got unexpected keyword argument(s) 'x, y'",
        ),
        (
            FN_ABI_E,
            (
                1,
                2,
            ),
            {"a": 1, "b": 2},
            TypeError,
            "Incorrect argument count. Expected '2', got '4'.",
        ),
        (
            ERROR_ABI,
            (),
            {},
            TypeError,
            "Incorrect argument count. Expected '2', got '0'.",
        ),
    ),
)
def test_get_normalized_abi_inputs_raises_for_invalid_arguments(
    abi_element: ABIElement,
    args: Sequence[Any],
    kwargs: Dict[str, Any],
    error_type: Type[Exception],
    message: str,
) -> None:
    with pytest.raises(
        error_type,
        match=re.escape(message),
    ):
        get_normalized_abi_inputs(abi_element, args, kwargs)


class MyXYTuple(NamedTuple):
    x: int
    y: int


GET_ABI_INPUTS_OUTPUT = (
    (
        "(uint256,uint256[],(uint256,uint256)[])",  # Type of s
        "(uint256,uint256)",  # Type of t
        "uint256",  # Type of a
        "(uint256,uint256)[][]",  # Type of b
    ),
    (
        (1, [2, 3, 4], [(5, 6), (7, 8), (9, 10)]),  # Value for s
        (11, 12),  # Value for t
        13,  # Value for a
        [[(14, 15), (16, 17)], [(18, 19)]],  # Value for b
    ),
)


@pytest.mark.parametrize(
    "abi_element, args, expected",
    (
        (
            FN_ABI_C,
            {
                "a": 1,
                "b": 2,
                "c": 3,
            },  # mapping of arguments
            (
                ("address", "bytes32", "address"),
                (1, 2, 3),
            ),
        ),
        (
            FN_ABI_C,
            (1, 2, 3),  # tuple of arguments
            (
                ("address", "bytes32", "address"),
                (1, 2, 3),
            ),
        ),
        (
            FN_ABI_MULTI_TUPLE_INPUTS,
            {
                "s": {
                    "a": 1,
                    "b": [2, 3, 4],
                    "c": [{"x": 5, "y": 6}, {"x": 7, "y": 8}, {"x": 9, "y": 10}],
                },
                "t": {"x": 11, "y": 12},
                "a": 13,
                "b": [[{"x": 14, "y": 15}, {"x": 16, "y": 17}], [{"x": 18, "y": 19}]],
            },
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            FN_ABI_MULTI_TUPLE_INPUTS,
            {
                "s": {"a": 1, "b": [2, 3, 4], "c": [(5, 6), (7, 8), {"x": 9, "y": 10}]},
                "t": {"x": 11, "y": 12},
                "a": 13,
                "b": [[(14, 15), (16, 17)], [{"x": 18, "y": 19}]],
            },
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            FN_ABI_MULTI_TUPLE_INPUTS,
            {
                "s": {"a": 1, "b": [2, 3, 4], "c": [(5, 6), (7, 8), (9, 10)]},
                "t": (11, 12),
                "a": 13,
                "b": [[(14, 15), (16, 17)], [(18, 19)]],
            },
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            FN_ABI_MULTI_TUPLE_INPUTS,
            {
                "s": (1, [2, 3, 4], [(5, 6), (7, 8), (9, 10)]),
                "t": (11, 12),
                "a": 13,
                "b": [[(14, 15), (16, 17)], [(18, 19)]],
            },
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            FN_ABI_MULTI_TUPLE_INPUTS,
            (
                (1, [2, 3, 4], [(5, 6), (7, 8), (9, 10)]),
                (11, 12),
                13,
                [[(14, 15), (16, 17)], [(18, 19)]],
            ),
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            FN_ABI_MULTI_TUPLE_INPUTS,
            {
                "s": {
                    "a": 1,
                    "b": [2, 3, 4],
                    "c": [(5, 6), (7, 8), MyXYTuple(x=9, y=10)],
                },
                "t": MyXYTuple(x=11, y=12),
                "a": 13,
                "b": [
                    [MyXYTuple(x=14, y=15), MyXYTuple(x=16, y=17)],
                    [MyXYTuple(x=18, y=19)],
                ],
            },
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            EVENT_ABI_LOG_SINGLE_ARG,
            (1,),
            (("uint256",), (1,)),
        ),
        (
            ERROR_ABI,
            ("0x1234567890123456789012345678901234567890", b"bar"),
            (
                ("address", "bytes32"),
                ("0x1234567890123456789012345678901234567890", b"bar"),
            ),
        ),
    ),
)
def test_get_aligned_abi_inputs(
    abi_element: ABIElement,
    args: Union[Tuple[Any, ...], Mapping[Any, Any]],
    expected: Tuple[Tuple[Any, ...], Tuple[Any, ...]],
) -> None:
    assert get_aligned_abi_inputs(abi_element, args) == expected


@pytest.mark.parametrize(
    "abi_element, args, error_type, message",
    (
        (
            # raise TypeError, expects list of tuples for input 's.c'
            FN_ABI_MULTI_TUPLE_INPUTS,
            {
                "s": {"a": 1, "b": [2, 3, 4], "c": ["56", (7, 8), (9, 10)]},
                "t": (11, 12),
                "a": 13,
                "b": [[(14, 15), (16, 17)], [(18, 19)]],
            },
            TypeError,
            'Expected non-string sequence for "tuple" component type: got 56',
        ),
        (
            # raise TypeError, expects list of tuples for input 's.c'
            FN_ABI_MULTI_TUPLE_INPUTS,
            {
                "s": {"a": 1, "b": [2, 3, 4], "c": {(5, 6), (7, 8), (9, 10)}},
                "t": (11, 12),
                "a": 13,
                "b": [[(14, 15), (16, 17)], [(18, 19)]],
            },
            TypeError,
            'Expected non-string sequence for "tuple[]" component type: got '
            "{(9, 10), (5, 6), (7, 8)}",
        ),
        (
            FALLBACK_ABI,
            (),
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `fallback` with inputs `None`.",
        ),
        (
            RECEIVE_ABI,
            (),
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `receive` with inputs `None`.",
        ),
        (
            FN_ABI_NO_INPUTS,
            (),
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `function` with inputs `None`.",
        ),
    ),
)
def test_get_aligned_abi_inputs_raises_type_error_for_incorrect_input_types(
    abi_element: ABIElement,
    args: Union[Tuple[Any, ...], Mapping[Any, Any]],
    error_type: Type[Exception],
    message: str,
) -> None:
    with pytest.raises(
        error_type,
        match=re.escape(message),
    ):
        get_aligned_abi_inputs(abi_element, args)
