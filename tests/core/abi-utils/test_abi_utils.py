import pytest
import re
from typing import (
    Any,
    Dict,
    Literal,
    Mapping,
    NamedTuple,
    Sequence,
    Tuple,
    Type,
    Union,
    cast,
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

from faster_eth_utils.abi import (
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
from faster_eth_utils.hexadecimal import (
    encode_hex,
)

ABI_FUNCTION_NO_NAME = ABIFunction({"type": "function"})  # type: ignore

ABI_FUNCTION_NO_INPUTS = ABIFunction({"name": "noInputs", "type": "function"})

ABI_FUNCTION_TOKEN_LAUNCHED = ABIFunction(
    {"name": "tokenLaunched", "type": "function", "inputs": []}
)
ABI_FUNCTION_TOKEN_LAUNCHED_WITH_INPUT = ABIFunction(
    {
        "name": "tokenLaunched",
        "type": "function",
        "inputs": [{"type": "int256", "name": "value"}],
    }
)

ABI_FUNCTION_CEILING = ABIFunction(
    {"name": "CEILING", "type": "function", "inputs": []}
)

ABI_FUNCTION_REGISTRAR = ABIFunction(
    {
        "name": "Registrar",
        "type": "function",
        "inputs": [
            {"type": "address", "name": "a"},
            {"type": "bytes32", "name": "b"},
            {"type": "address", "name": "c"},
        ],
    }
)

ABI_FUNCTION_FOUR_NAMED_ARGS = ABIFunction(
    {
        "constant": False,
        "inputs": [
            {"name": "a", "type": "int256"},
            {"name": "b", "type": "int256"},
            {"name": "c", "type": "int256"},
            {"name": "d", "type": "int256"},
        ],
        "name": "fourNamedArgs",
        "outputs": [],
        "type": "function",
    }
)

ABI_FUNCTION_THREE_NAMED_ARGS_DUPLICATE = ABIFunction(
    {
        "constant": False,
        "inputs": [
            {"name": "b", "type": "int256"},
            {"name": "b", "type": "int256"},
            {"name": "a", "type": "int256"},
        ],
        "name": "threeNamedArgs",
        "outputs": [],
        "type": "function",
    }
)

ABI_FUNCTION_TWO_NAMED_ARGS = ABIFunction(
    {
        "type": "function",
        "name": "FnMultiArg",
        "inputs": [
            {"name": "arg0", "type": "uint256"},
            {"name": "arg1", "type": "uint256"},
        ],
        "outputs": [
            {"name": "arg0", "type": "uint256"},
            {"name": "arg1", "type": "uint256"},
        ],
    }
)

ABI_FUNCTION_MULTI_TYPED_ARGS = ABIFunction(
    {
        "type": "function",
        "name": "FnMultiTypedArg",
        "inputs": [
            {"name": "arg0", "type": "uint256"},
            {"name": "arg1", "type": "bytes32"},
        ],
        "outputs": [
            {"name": "arg0", "type": "uint256"},
            {"name": "arg1", "type": "bytes32"},
        ],
    }
)

ABI_FUNCTION_TWO_UNNAMED_ARGS = ABIFunction(
    {
        "constant": False,
        "inputs": [
            {"name": "", "type": "int256"},
            {"name": "", "type": "int256"},
        ],
        "name": "twoUnnamedArgs",
        "outputs": [],
        "type": "function",
    }
)

ABI_FUNCTION_SINGLE_ARG = ABIFunction(
    {
        "type": "function",
        "name": "FnSingleArg",
        "inputs": [{"name": "arg0", "type": "uint256"}],
        "outputs": [{"name": "arg0", "type": "uint256"}],
    }
)

ABI_FUNCTION_ADD = ABIFunction(
    {
        "constant": False,
        "inputs": [
            {"name": "x", "type": "uint256"},
            {"name": "y", "type": "uint256"},
        ],
        "name": "add",
        "outputs": [{"name": "sum", "type": "uint256"}],
        "type": "function",
    }
)

ABI_FUNCTION_TUPLE_INPUT_WITH_OUTPUTS = ABIFunction(
    {
        "inputs": [
            {
                "components": [{"name": "x", "type": "uint256"}],
                "type": "tuple",
                "name": "aTuple",
            }
        ],
        "name": "singletonTupleInput",
        "outputs": [{"name": "y", "type": "uint256"}],
        "type": "function",
    }
)

ABI_FUNCTION_TUPLE_INPUT_WITH_MULTI_TYPE_OUTPUTS = ABIFunction(
    {
        "inputs": [
            {
                "components": [{"name": "x", "type": "uint256"}],
                "type": "tuple",
                "name": "aTuple",
            }
        ],
        "name": "singletonTupleInput",
        "outputs": [
            {"name": "anAddress", "type": "address"},
            {"name": "anInt", "type": "uint256"},
            {"name": "someBytes", "type": "bytes"},
        ],
        "type": "function",
    }
)

ABI_FUNCTION_NESTED_TUPLE_INPUTS = ABIFunction(
    {
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
)

ABI_FUNCTION_ZERO_TUPLE_INPUT = ABIFunction(
    {
        "inputs": [{"components": [], "type": "tuple", "name": "zroTuple"}],
        "name": "zeroTupleInput",
        "type": "function",
    }
)

ABI_FUNCTION_SINGLETON_TUPLE_INPUT = ABIFunction(
    {
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
)

ABI_FUNCTION_ARRAY_OF_TUPLES = ABIFunction(
    {
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
)

ABI_FUNCTION_FIXED_ARRAY_OF_TUPLES = ABIFunction(
    {
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
)

ABI_FUNCTION_MULTI_TUPLE_INPUTS = ABIFunction(
    {
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
        "name": "multiTupleInputs",
        "outputs": [],
        "payable": False,
        "stateMutability": "nonpayable",
        "type": "function",
    }
)

ABI_CONSTRUCTOR = ABIConstructor({"type": "constructor"})

ABI_CONSTRUCTOR_WITH_INPUT = ABIConstructor(
    {
        "inputs": [{"name": "started", "type": "str"}],
        "type": "constructor",
    }
)

ABI_FALLBACK = ABIFallback({"type": "fallback"})

ABI_RECEIVE = ABIReceive({"type": "receive"})

ABI_ERROR = ABIError({"type": "error", "name": "error"})

ABI_ERROR_INVALID = ABIError(
    {
        "name": "Invalid",
        "type": "error",
        "inputs": [
            {"type": "address", "name": "a"},
            {"type": "bytes32", "name": "b"},
        ],
    }
)

# Intentionally invalid ABIError, input names are missing
ABI_ERROR_FAILED = {
    "type": "error",
    "name": "failed",
    "inputs": [
        {"x": b"1", "type": "bytes32"},
        {"y": "value", "type": "str"},
    ],
}

ABI_ERROR_MY_ERROR = ABIError({"type": "error", "name": "myError"})

ABI_EVENT_FINISHED = ABIEvent({"type": "event", "name": "finished", "inputs": []})

ABI_EVENT_FOO = ABIEvent({"type": "event", "name": "foo"})

# Intentionally invalid ABIEvent, missing event name and input names
ABI_EVENT_NO_NAME = {
    "type": "event",
    "inputs": [
        {"x": 1, "type": "int"},
    ],
}

ABI_EVENT_TRANSFER = ABIEvent(
    {
        "anonymous": False,
        "name": "Transfer",
        "type": "event",
        "inputs": [
            ABIComponentIndexed({"indexed": True, "name": "from", "type": "address"}),
            ABIComponentIndexed({"indexed": True, "name": "to", "type": "address"}),
            ABIComponentIndexed({"indexed": False, "name": "value", "type": "uint256"}),
        ],
    }
)

ABI_EVENT_LOG_NO_ARG = ABIEvent(
    {
        "anonymous": False,
        "name": "LogNoArg",
        "type": "event",
        "inputs": [],
    }
)

ABI_EVENT_LOG_SINGLE_ARG = ABIEvent(
    {
        "anonymous": False,
        "name": "LogSingleArg",
        "type": "event",
        "inputs": [{"name": "arg0", "type": "uint256"}],
    }
)

ABI_EVENT_LOG_SINGLE_WITH_INDEX = ABIEvent(
    {
        "anonymous": False,
        "name": "LogSingleWithIndex",
        "type": "event",
        "inputs": [
            ABIComponentIndexed({"indexed": True, "name": "arg0", "type": "uint256"})
        ],
    }
)

ABI_EVENT_LOG_TWO_EVENTS = ABIEvent(
    {
        "anonymous": False,
        "name": "logTwoEvents",
        "type": "event",
        "inputs": [
            {"name": "_arg0", "type": "uint256"},
        ],
    }
)

ABI_EVENT_LOG_MULTI_ARGS = ABIEvent(
    {
        "type": "event",
        "name": "LogMultiArg",
        "inputs": [
            {"name": "arg0", "type": "uint256"},
            {"name": "arg1", "type": "uint256"},
            {"name": "arg2", "type": "uint256"},
        ],
    }
)

ABI_COMPONENT = ABIComponent({"type": "str", "name": "aComponent"})

ABI_COMPONENT_TUPLE = ABIComponent(
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

ABI_COMPONENT_TUPLE_ARRAY = ABIComponent(
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

ABI_COMPONENT_MULTI_DIM_TUPLE = ABIComponent(
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


def build_contract_abi(abi_elements: Sequence[ABIElement]) -> ABI:
    return cast(ABI, abi_elements)


@pytest.mark.parametrize(
    "abi_element,expected",
    (
        (ABI_FUNCTION_TOKEN_LAUNCHED, "0xde78e78a"),
        (ABI_FUNCTION_CEILING, "0xc51bf934"),
        (ABI_FUNCTION_REGISTRAR, "0xa31d5580"),
        (ABI_FUNCTION_NO_INPUTS, "0xc1772ae8"),
        (ABI_FUNCTION_NESTED_TUPLE_INPUTS, "0xfa89ea29"),
        (ABI_EVENT_FINISHED, "0xbef4876b"),
        (ABI_EVENT_FOO, "0xc2985578"),
        (ABI_EVENT_NO_NAME, "0x77c874c7"),
        (ABI_FALLBACK, "0x552079dc"),
        (ABI_RECEIVE, "0xa3e76c0f"),
        (ABI_CONSTRUCTOR, "0x90fa17bb"),
        (ABI_CONSTRUCTOR_WITH_INPUT, "0x2757c293"),
        (ABI_ERROR_FAILED, "0x236ac042"),
    ),
)
def test_fn_abi_to_4byte_selector(abi_element: ABIElement, expected: HexStr) -> None:
    bytes_selector = function_abi_to_4byte_selector(abi_element)
    hex_selector = encode_hex(bytes_selector)
    assert hex_selector == expected


@pytest.mark.parametrize(
    "signature,expected",
    (
        ("tokenLaunched()", "0xde78e78a"),
        ("CEILING()", "0xc51bf934"),
        ("Registrar(address,bytes32,address)", "0xa31d5580"),
        ("failed(bytes32,str)", "0x236ac042"),
        ("receive()", "0xa3e76c0f"),
        ("fallback()", "0x552079dc"),
        ("constructor()", "0x90fa17bb"),
    ),
)
def test_fn_signature_to_4byte_selector(signature: str, expected: HexStr) -> None:
    bytes_selector = function_signature_to_4byte_selector(signature)
    hex_selector = encode_hex(bytes_selector)
    assert hex_selector == expected


@pytest.mark.parametrize(
    "abi_element,expected",
    (
        (ABI_FUNCTION_NO_NAME, "function()"),
        (ABI_FUNCTION_NO_INPUTS, "noInputs()"),
        (ABI_FUNCTION_ARRAY_OF_TUPLES, "tupleArrayInput((address,uint256,bytes)[])"),
        (
            ABI_FUNCTION_FIXED_ARRAY_OF_TUPLES,
            "tupleFixedArrayInput((address,uint256,bytes)[5])",
        ),
        (
            ABI_FUNCTION_NESTED_TUPLE_INPUTS,
            "nestedTupleInputs((address,uint256,bytes,(address,uint256,bytes)))",
        ),
        (ABI_FUNCTION_ZERO_TUPLE_INPUT, "zeroTupleInput(())"),
        (ABI_FUNCTION_SINGLETON_TUPLE_INPUT, "singletonTupleInput((address))"),
        (
            ABI_ERROR_FAILED,
            "failed(bytes32,str)",
        ),
        (ABI_ERROR_MY_ERROR, "myError()"),
        (ABI_EVENT_FOO, "foo()"),
        (
            ABI_EVENT_NO_NAME,
            "event(int)",
        ),
        (ABI_EVENT_LOG_MULTI_ARGS, "LogMultiArg(uint256,uint256,uint256)"),
        (ABI_CONSTRUCTOR, "constructor()"),
        (
            ABI_CONSTRUCTOR_WITH_INPUT,
            "constructor(str)",
        ),
        (ABI_FALLBACK, "fallback()"),
        (ABI_RECEIVE, "receive()"),
        (ABI_ERROR, "error()"),
    ),
)
def test_abi_to_signature(abi_element: ABIElement, expected: str) -> None:
    assert abi_to_signature(abi_element) == expected


@pytest.mark.parametrize(
    "abi_elements,expected_event_abis",
    (
        (
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
            [],
        ),
        (
            [
                ABI_EVENT_LOG_NO_ARG,
                ABI_EVENT_LOG_SINGLE_ARG,
                ABI_EVENT_LOG_SINGLE_WITH_INDEX,
            ],
            [
                ABI_EVENT_LOG_NO_ARG,
                ABI_EVENT_LOG_SINGLE_ARG,
                ABI_EVENT_LOG_SINGLE_WITH_INDEX,
            ],
        ),
        (
            [
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_EVENT_LOG_NO_ARG,
                ABI_ERROR,
            ],
            [
                ABI_EVENT_LOG_NO_ARG,
            ],
        ),
        (
            [ABI_FUNCTION_ADD],
            [],
        ),
        (
            [
                ABI_FUNCTION_ADD,
                ABI_FALLBACK,
                ABI_RECEIVE,
                ABI_CONSTRUCTOR_WITH_INPUT,
                ABI_ERROR_FAILED,
            ],
            [],
        ),
        (
            [
                ABI_EVENT_LOG_NO_ARG,
                ABI_FUNCTION_ADD,
                ABI_FALLBACK,
                ABI_RECEIVE,
                ABI_CONSTRUCTOR_WITH_INPUT,
                ABI_EVENT_LOG_SINGLE_WITH_INDEX,
            ],
            [
                ABI_EVENT_LOG_NO_ARG,
                ABI_EVENT_LOG_SINGLE_WITH_INDEX,
            ],
        ),
    ),
)
def test_get_all_event_abis(
    abi_elements: Sequence[ABIElement], expected_event_abis: Sequence[ABIEvent]
) -> None:
    contract_abi = build_contract_abi(abi_elements)
    assert get_all_event_abis(contract_abi) == expected_event_abis


@pytest.mark.parametrize(
    "abi_elements,abi_name,expected_element_abis",
    (
        (
            [ABI_EVENT_LOG_NO_ARG],
            "LogNoArg",
            [ABI_EVENT_LOG_NO_ARG],
        ),
        (
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
            "tokenLaunched",
            [ABI_FUNCTION_TOKEN_LAUNCHED],
        ),
        (
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
            "notafunction",
            [],
        ),
        (
            [ABI_ERROR_INVALID],
            "Invalid",
            [ABI_ERROR_INVALID],
        ),
        (
            [ABI_RECEIVE],  # receive abi has no name
            "receive",
            [],
        ),
        (
            [ABI_FALLBACK],  # fallback abi has no name
            "fallback",
            [],
        ),
        (
            [ABI_CONSTRUCTOR_WITH_INPUT],  # constructor abi has no name
            "constructor",
            [],
        ),
        (
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_TOKEN_LAUNCHED],
            "tokenLaunched",
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_TOKEN_LAUNCHED],
        ),
        (
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_TOKEN_LAUNCHED_WITH_INPUT],
            "tokenLaunched",
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_TOKEN_LAUNCHED_WITH_INPUT],
        ),
    ),
)
def test_filter_abi_by_name(
    abi_elements: Sequence[ABIElement],
    abi_name: str,
    expected_element_abis: Sequence[ABIElement],
) -> None:
    contract_abi = build_contract_abi(abi_elements)
    assert filter_abi_by_name(abi_name, contract_abi) == expected_element_abis


@pytest.mark.parametrize(
    "abi_elements,abi_type,expected_element_abis",
    (
        (
            [
                ABI_EVENT_LOG_TWO_EVENTS,
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
            ],
            "function",
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [],
            "function",
            [],
        ),
        (
            [
                ABI_EVENT_LOG_TWO_EVENTS,
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
            ],
            "event",
            [ABI_EVENT_LOG_TWO_EVENTS],
        ),
        (
            [ABI_FALLBACK],
            "fallback",
            [ABI_FALLBACK],
        ),
        (
            [ABI_FUNCTION_TOKEN_LAUNCHED],
            "fallback",
            [],
        ),
        (
            [ABI_RECEIVE, ABI_FALLBACK],
            "receive",
            [ABI_RECEIVE],
        ),
        (
            [ABI_CONSTRUCTOR_WITH_INPUT],
            "constructor",
            [ABI_CONSTRUCTOR_WITH_INPUT],
        ),
        (
            [ABI_ERROR_INVALID],
            "error",
            [ABI_ERROR_INVALID],
        ),
    ),
)
def test_filter_abi_by_type(
    abi_elements: Sequence[ABIElement],
    abi_type: Literal[
        "function", "event", "fallback", "receive", "constructor", "error"
    ],
    expected_element_abis: Sequence[
        Union[ABIFunction, ABIConstructor, ABIFallback, ABIReceive, ABIEvent, ABIError]
    ],
) -> None:
    contract_abi = build_contract_abi(abi_elements)
    actual_element_abis = filter_abi_by_type(abi_type, contract_abi)
    assert actual_element_abis == expected_element_abis
    assert all(abi["type"] == abi_type for abi in actual_element_abis)


def test_filter_abi_by_type_raises_for_invalid_abi_type() -> None:
    contract_abi = build_contract_abi([ABI_FUNCTION_TOKEN_LAUNCHED])
    with pytest.raises(
        ValueError,
        match=re.escape("Unsupported ABI type: typing.Literal['notanabitype']"),
    ):
        filter_abi_by_type("notanabitype", contract_abi)


@pytest.mark.parametrize(
    "abi_element,expected_names,expected_types",
    (
        (
            ABI_EVENT_LOG_SINGLE_ARG,
            ["arg0"],
            ["uint256"],
        ),
        (
            ABI_EVENT_LOG_SINGLE_WITH_INDEX,
            ["arg0"],
            ["uint256"],
        ),
        (
            ABI_EVENT_LOG_MULTI_ARGS,
            ["arg0", "arg1", "arg2"],
            ["uint256", "uint256", "uint256"],
        ),
        (
            ABI_EVENT_LOG_NO_ARG,
            [],
            [],
        ),
        (
            ABI_FUNCTION_SINGLE_ARG,
            ["arg0"],
            ["uint256"],
        ),
        (
            ABI_FUNCTION_TWO_NAMED_ARGS,
            ["arg0", "arg1"],
            ["uint256", "uint256"],
        ),
        (
            ABI_FUNCTION_MULTI_TYPED_ARGS,
            ["arg0", "arg1"],
            ["uint256", "bytes32"],
        ),
        (
            ABI_FUNCTION_TWO_UNNAMED_ARGS,
            ["", ""],
            ["int256", "int256"],
        ),
        (
            ABI_FUNCTION_TUPLE_INPUT_WITH_OUTPUTS,
            ["aTuple"],
            ["(uint256)"],
        ),
        (
            ABI_FUNCTION_TUPLE_INPUT_WITH_MULTI_TYPE_OUTPUTS,
            ["aTuple"],
            ["(uint256)"],
        ),
        (
            ABI_CONSTRUCTOR_WITH_INPUT,
            ["started"],
            ["str"],
        ),
        (
            ABI_FUNCTION_NO_INPUTS,
            [],
            [],
        ),
        (
            ABI_ERROR_INVALID,
            ["a", "b"],
            ["address", "bytes32"],
        ),
    ),
)
def test_get_input_names_and_types_from_abi_element(
    abi_element: ABIElement,
    expected_names: Sequence[str],
    expected_types: Sequence[str],
) -> None:
    assert get_abi_input_names(abi_element) == expected_names
    assert get_abi_input_types(abi_element) == expected_types


@pytest.mark.parametrize(
    "abi_element",
    (
        ABI_FALLBACK,
        ABI_RECEIVE,
    ),
)
def test_get_input_names_and_types_raises_for_fallback_or_receive_abi(
    abi_element: ABIElement,
) -> None:
    with pytest.raises(
        ValueError,
        match=f"Inputs not supported for function types `fallback` or `receive`."
        f" Provided ABI type was `{abi_element['type']}` with inputs"
        f" `None`.",
    ):
        get_abi_input_names(abi_element)

    with pytest.raises(
        ValueError,
        match=f"Inputs not supported for function types `fallback` or `receive`."
        f" Provided ABI type was `{abi_element['type']}` with inputs"
        f" `None`.",
    ):
        get_abi_input_types(abi_element)


@pytest.mark.parametrize(
    "abi_element,expected_names,expected_types",
    [
        (
            ABI_FUNCTION_SINGLE_ARG,
            ["arg0"],
            ["uint256"],
        ),
        (
            ABI_FUNCTION_TWO_NAMED_ARGS,
            ["arg0", "arg1"],
            ["uint256", "uint256"],
        ),
        (
            ABI_FUNCTION_MULTI_TYPED_ARGS,
            ["arg0", "arg1"],
            ["uint256", "bytes32"],
        ),
        (
            ABI_FUNCTION_TWO_UNNAMED_ARGS,
            [],
            [],
        ),
        (
            ABI_FUNCTION_NO_INPUTS,
            [],
            [],
        ),
        (
            ABI_FUNCTION_TUPLE_INPUT_WITH_OUTPUTS,
            ["y"],
            ["uint256"],
        ),
        (
            ABI_FUNCTION_TUPLE_INPUT_WITH_MULTI_TYPE_OUTPUTS,
            ["anAddress", "anInt", "someBytes"],
            ["address", "uint256", "bytes"],
        ),
    ],
)
def test_get_abi_output_names(
    abi_element: ABIElement,
    expected_names: Sequence[str],
    expected_types: Sequence[str],
) -> None:
    assert get_abi_output_names(abi_element) == expected_names
    assert get_abi_output_types(abi_element) == expected_types


@pytest.mark.parametrize(
    "abi_element",
    (
        ABI_CONSTRUCTOR,
        ABI_CONSTRUCTOR_WITH_INPUT,
        ABI_EVENT_FINISHED,
        ABI_EVENT_LOG_NO_ARG,
        ABI_ERROR,
        ABI_ERROR_INVALID,
        ABI_FALLBACK,
        ABI_RECEIVE,
    ),
)
def test_get_abi_output_names_raises_for_non_function_types(
    abi_element: ABIElement,
) -> None:
    with pytest.raises(
        ValueError,
        match=f"Outputs only supported for ABI type `function`."
        f" Provided ABI type was `{abi_element['type']}` and outputs were `None`.",
    ):
        get_abi_output_names(abi_element)

    with pytest.raises(
        ValueError,
        match=f"Outputs only supported for ABI type `function`."
        f" Provided ABI type was `{abi_element['type']}` and outputs were `None`.",
    ):
        get_abi_output_types(abi_element)


@pytest.mark.parametrize(
    "abi_elements,expected_function_abis",
    (
        (
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
                ABI_EVENT_LOG_NO_ARG,
            ],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
                ABI_ERROR_INVALID,
            ],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
                ABI_FALLBACK,
            ],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
                ABI_RECEIVE,
                ABI_ERROR,
            ],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
                ABI_CONSTRUCTOR_WITH_INPUT,
            ],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
                ABI_FALLBACK,
                ABI_RECEIVE,
                ABI_CONSTRUCTOR_WITH_INPUT,
            ],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [ABI_FALLBACK, ABI_RECEIVE, ABI_CONSTRUCTOR_WITH_INPUT, ABI_ERROR_INVALID],
            [],
        ),
    ),
)
def test_get_all_function_abis(
    abi_elements: Sequence[ABIElement], expected_function_abis: Sequence[ABIFunction]
) -> None:
    contract_abi = build_contract_abi(abi_elements)
    function_abis = get_all_function_abis(contract_abi)
    assert function_abis == expected_function_abis


@pytest.mark.parametrize(
    "abi_event,expected",
    (
        (
            ABI_EVENT_TRANSFER,
            "0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef",
        ),
        (
            ABI_EVENT_FINISHED,
            "0xbef4876bcdde2983a1ba9fe22b5983b09081cf602d266f72a613d0d9c2f78e28",
        ),
        (
            ABI_EVENT_LOG_SINGLE_ARG,
            "0x56d2ef3c5228bf5d88573621e325a4672ab50e033749a601e4f4a5e1dce905d4",
        ),
        (
            ABI_EVENT_NO_NAME,
            "0x77c874c798a153cb8bb91a65910a8f49033a603329228caa4b3b1bb4bb5b9e18",
        ),
    ),
)
def test_event_abi_to_log_topic(abi_event: ABIEvent, expected: HexStr) -> None:
    bytes_topic = event_abi_to_log_topic(abi_event)
    hex_topic = encode_hex(bytes_topic)
    assert hex_topic == expected


@pytest.mark.parametrize(
    "event_signature,expected",
    (
        (
            "Transfer(address,address,uint256)",
            "0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef",
        ),
        (
            "Event_2(bytes32,uint256)",
            "0x115494e95409cd09eaa4590f66d8938bb342c170bc2edcca5fd14ad46fb7dcb8",
        ),
        (
            "event()",
            "0x4980500b48d9072058dce7e5222cd23e11759678f8aa74b3a6f0e891bb888979",
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
            ABI_COMPONENT_TUPLE,
            "(address,uint256,bytes)",
        ),
        (
            ABI_COMPONENT_TUPLE_ARRAY,
            "(bytes32[],bytes,bytes)[]",
        ),
        (
            ABI_COMPONENT_MULTI_DIM_TUPLE,
            "(address,uint256,bytes)[3]",
        ),
        (
            ABI_COMPONENT,
            "str",
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
            ABI_FUNCTION_REGISTRAR,
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
            ABI_FUNCTION_REGISTRAR,
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
            ABI_FUNCTION_REGISTRAR,
            [1, "0x1234567890123456789012345678901234567890", b"bar"],
            {},
            (
                1,
                "0x1234567890123456789012345678901234567890",
                b"bar",
            ),
        ),
        (
            ABI_FUNCTION_TWO_UNNAMED_ARGS,
            (1, 2),
            {},
            (1, 2),
        ),
        (
            ABI_FUNCTION_THREE_NAMED_ARGS_DUPLICATE,
            (1, 2, 3),
            {},
            (1, 2, 3),
        ),
        (
            ABI_ERROR_INVALID,
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
            ABI_EVENT_LOG_TWO_EVENTS,
            (1,),
            {},
            (1,),
        ),
        (
            ABI_FUNCTION_TOKEN_LAUNCHED,
            (),
            {},
            (),
        ),
        (
            ABI_FUNCTION_NO_INPUTS,
            (),
            {},
            (),
        ),
    ),
)
def test_get_normalized_abi_inputs(
    abi_element: ABIElement,
    args: Sequence[Any],
    kwargs: Dict[str, Any],
    expected: Tuple[Any, ...],
) -> None:
    assert get_normalized_abi_inputs(abi_element, *args, **kwargs) == expected


@pytest.mark.parametrize(
    "abi_element,args,kwargs,error_type,message",
    (
        (
            ABI_FALLBACK,
            (),
            {},
            ValueError,
            "Inputs not supported for function types `fallback` or `receive`. "
            "Provided ABI type was `fallback` with inputs `None`.",
        ),
        (
            ABI_RECEIVE,
            (),
            {},
            ValueError,
            "Inputs not supported for function types `fallback` or `receive`. "
            "Provided ABI type was `receive` with inputs `None`.",
        ),
        (
            ABI_FUNCTION_THREE_NAMED_ARGS_DUPLICATE,
            (1,),
            {"a": 2, "b": 3},
            TypeError,
            "threeNamedArgs() got multiple values for argument(s) 'b'",
        ),
        (
            ABI_FUNCTION_THREE_NAMED_ARGS_DUPLICATE,
            (1,),
            {"d": 2, "e": 3},
            TypeError,
            "threeNamedArgs() got unexpected keyword argument(s) 'd, e",
        ),
        (
            ABI_FUNCTION_TWO_UNNAMED_ARGS,
            tuple(),
            {"x": 1, "y": 2},
            TypeError,
            "twoUnnamedArgs() got unexpected keyword argument(s) 'x, y'",
        ),
        (
            ABI_FUNCTION_TWO_UNNAMED_ARGS,
            (
                1,
                2,
            ),
            {"a": 1, "b": 2},
            TypeError,
            "Incorrect argument count. Expected '2', got '4'.",
        ),
        (
            ABI_ERROR_INVALID,
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
        get_normalized_abi_inputs(abi_element, *args, **kwargs)


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
    "abi_element,args,expected",
    (
        (
            ABI_FUNCTION_REGISTRAR,
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
            ABI_FUNCTION_REGISTRAR,
            (1, 2, 3),  # tuple of arguments
            (
                ("address", "bytes32", "address"),
                (1, 2, 3),
            ),
        ),
        (
            ABI_FUNCTION_MULTI_TUPLE_INPUTS,
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
            ABI_FUNCTION_MULTI_TUPLE_INPUTS,
            {
                "s": {"a": 1, "b": [2, 3, 4], "c": [(5, 6), (7, 8), {"x": 9, "y": 10}]},
                "t": {"x": 11, "y": 12},
                "a": 13,
                "b": [[(14, 15), (16, 17)], [{"x": 18, "y": 19}]],
            },
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            ABI_FUNCTION_MULTI_TUPLE_INPUTS,
            {
                "s": {"a": 1, "b": [2, 3, 4], "c": [(5, 6), (7, 8), (9, 10)]},
                "t": (11, 12),
                "a": 13,
                "b": [[(14, 15), (16, 17)], [(18, 19)]],
            },
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            ABI_FUNCTION_MULTI_TUPLE_INPUTS,
            {
                "s": (1, [2, 3, 4], [(5, 6), (7, 8), (9, 10)]),
                "t": (11, 12),
                "a": 13,
                "b": [[(14, 15), (16, 17)], [(18, 19)]],
            },
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            ABI_FUNCTION_MULTI_TUPLE_INPUTS,
            (
                (1, [2, 3, 4], [(5, 6), (7, 8), (9, 10)]),
                (11, 12),
                13,
                [[(14, 15), (16, 17)], [(18, 19)]],
            ),
            GET_ABI_INPUTS_OUTPUT,
        ),
        (
            ABI_FUNCTION_MULTI_TUPLE_INPUTS,
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
            ABI_EVENT_LOG_SINGLE_ARG,
            (1,),
            (("uint256",), (1,)),
        ),
        (
            ABI_ERROR_INVALID,
            ("0x1234567890123456789012345678901234567890", b"bar"),
            (
                ("address", "bytes32"),
                ("0x1234567890123456789012345678901234567890", b"bar"),
            ),
        ),
        (
            ABI_FUNCTION_NO_INPUTS,
            (),
            (
                (),
                (),
            ),
        ),
    ),
)
def test_get_aligned_abi_inputs(
    abi_element: ABIElement,
    args: Union[Tuple[Any, ...], Mapping[Any, Any]],
    expected: Tuple[Tuple[str, ...], Tuple[Any, ...]],
) -> None:
    assert get_aligned_abi_inputs(abi_element, args) == expected


@pytest.mark.parametrize(
    "abi_element,args,error_type,message",
    (
        (
            # raise TypeError, expects list of tuples for input 's.c'
            ABI_FUNCTION_MULTI_TUPLE_INPUTS,
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
            ABI_FUNCTION_MULTI_TUPLE_INPUTS,
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
            ABI_FALLBACK,
            (),
            ValueError,
            "Inputs not supported for function types `fallback` or `receive`. "
            "Provided ABI type was `fallback` with inputs `None`.",
        ),
        (
            ABI_RECEIVE,
            (),
            ValueError,
            "Inputs not supported for function types `fallback` or `receive`. "
            "Provided ABI type was `receive` with inputs `None`.",
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
