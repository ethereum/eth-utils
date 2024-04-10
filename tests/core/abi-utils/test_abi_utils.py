from typing import (
    Sequence,
)

from eth_typing import (
    ABI,
    ABIConstructor,
    ABIElement,
    ABIEvent,
    ABIEventParam,
    ABIFallback,
    ABIFunction,
    ABIFunctionParam,
    ABIReceive,
)
import pytest

from eth_utils.abi import (
    _abi_to_signature,
    event_abi_to_log_topic,
    event_signature_to_log_topic,
    function_abi_to_4byte_selector,
    function_signature_to_4byte_selector,
    get_abi_input_names,
    get_abi_input_types,
    get_abi_output_names,
    get_abi_output_types,
    get_all_event_abis,
    get_event_abi,
)
from eth_utils.hexadecimal import (
    encode_hex,
)

FN_ABI_A = {"name": "tokenLaunched", "type": "function", "inputs": []}
FN_ABI_B = {"name": "CEILING", "type": "function", "inputs": []}
FN_ABI_C = {
    "name": "Registrar",
    "type": "function",
    "inputs": [
        {"type": "address", "name": "a"},
        {"type": "bytes32", "name": "b"},
        {"type": "address", "name": "c"},
    ],
}
FN_ABI_NESTED_TUPLE_INPUTS = {
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
        }
    ],
    "name": "nestedTupleInputs",
    "type": "function",
}
FN_ABI_NO_INPUTS = {"name": "noInputs", "type": "function"}
FN_ABI_ZERO_TUPLE_INPUT = {
    "inputs": [{"components": [], "type": "tuple"}],
    "name": "zeroTupleInput",
    "type": "function",
}
FN_ABI_SINGLETON_TUPLE_INPUT = {
    "inputs": [
        {"components": [{"name": "anAddress", "type": "address"}], "type": "tuple"}
    ],
    "name": "singletonTupleInput",
    "type": "function",
}
FN_ABI_ARRAY_OF_TUPLES = {
    "name": "tupleArrayInput",
    "type": "function",
    "inputs": [
        {
            "type": "tuple[]",
            "components": [
                {"name": "anAddress", "type": "address"},
                {"name": "anInt", "type": "uint256"},
                {"name": "someBytes", "type": "bytes"},
            ],
        }
    ],
}
FN_ABI_FIXED_ARRAY_OF_TUPLES = {
    "name": "tupleFixedArrayInput",
    "type": "function",
    "inputs": [
        {
            "type": "tuple[5]",
            "components": [
                {"name": "anAddress", "type": "address"},
                {"name": "anInt", "type": "uint256"},
                {"name": "someBytes", "type": "bytes"},
            ],
        }
    ],
}


@pytest.mark.parametrize(
    "fn_abi,expected",
    ((FN_ABI_A, "0xde78e78a"), (FN_ABI_B, "0xc51bf934"), (FN_ABI_C, "0xa31d5580")),
)
def test_fn_abi_to_4byte_selector(fn_abi, expected):
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
def test_fn_signature_to_4byte_selector(signature, expected):
    bytes_selector = function_signature_to_4byte_selector(signature)
    hex_selector = encode_hex(bytes_selector)
    assert hex_selector == expected


@pytest.mark.parametrize(
    "abi,expected",
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
    ),
)
def test__abi_to_signature(abi, expected):
    assert _abi_to_signature(abi) == expected


def make_abi_element(
    element_type,
    name,
    input_names=None,
    input_types=None,
    output_names=None,
    output_types=None,
) -> ABIElement:
    if element_type == "event":
        return make_event_abi(name, input_names)
    elif element_type == "function":
        return make_function_abi(
            name, input_names, input_types, output_names, output_types
        )
    elif element_type == "constructor":
        return make_constructor_abi(input_names, input_types)
    elif element_type == "fallback":
        return make_fallback_abi()
    elif element_type == "receive":
        return make_receive_abi()


def make_constructor_abi_input(name, input_type) -> ABIFunctionParam:
    return {"name": name, "type": input_type}


def make_constructor_abi(input_names, input_types) -> ABIConstructor:
    inputs = [
        make_constructor_abi_input(input_name, input_type)
        for (input_name, input_type) in zip(input_names, input_types)
    ]
    return {
        "inputs": inputs,
        "type": "constructor",
    }


def make_fallback_abi() -> ABIFallback:
    return {
        "type": "fallback",
    }


def make_receive_abi() -> ABIReceive:
    return {
        "type": "receive",
    }


def make_event_abi_input(name) -> ABIEventParam:
    return {
        "indexed": False,
        "internalType": "uint256",
        "name": name,
        "type": "uint256",
    }


def make_event_abi(name, input_names) -> ABIEvent:
    inputs = [make_event_abi_input(input_name) for input_name in input_names]
    return {
        "anonymous": False,
        "inputs": inputs,
        "name": name,
        "type": "event",
    }


def make_function_abi_input(name, input_type) -> ABIFunctionParam:
    return {"internalType": "uint256", "name": name, "type": input_type}


def make_function_abi_output(name, input_type) -> ABIFunctionParam:
    return {"internalType": "uint256", "name": name, "type": input_type}


def make_function_abi(
    name, input_names, input_types, output_names, output_types
) -> ABIFunction:
    inputs = [
        make_function_abi_input(input_name, input_type)
        for (input_name, input_type) in zip(input_names, input_types)
    ]

    if output_names is None:
        outputs = []
    else:
        outputs = [
            make_function_abi_output(output_name, output_type)
            for (output_name, output_type) in zip(output_names, output_types)
        ]

    return {
        "inputs": inputs,
        "name": name,
        "outputs": outputs,
        "stateMutability": "nonpayable",
        "type": "function",
    }


@pytest.fixture
def contract_abi() -> ABI:
    return [
        make_event_abi("LogSingleArg", ["arg0"]),
        make_event_abi("LogSingleWithIndex", ["arg0"]),
        make_function_abi("logTwoEvents", ["_arg0"], ["uint256"], [], []),
    ]


def test_get_all_event_abis(contract_abi) -> Sequence[ABIEvent]:
    expected_event_abis = [
        make_event_abi("LogSingleArg", ["arg0"]),
        make_event_abi("LogSingleWithIndex", ["arg0"]),
    ]
    assert get_all_event_abis(contract_abi) == expected_event_abis


@pytest.mark.parametrize(
    "event_name,argument_names",
    [
        ("LogSingleArg", ["arg0"]),
        ("LogSingleWithIndex", ["arg0"]),
    ],
)
def test_get_event_abi(contract_abi, event_name, argument_names):
    expected_event_abi = make_event_abi(event_name, argument_names)
    assert get_event_abi(contract_abi, event_name, argument_names) == expected_event_abi


@pytest.mark.parametrize(
    "element_type,name,input_names,input_types",
    [
        ("event", "LogSingleArg", ["arg0"], ["uint256"]),
        ("event", "LogSingleWithIndex", ["arg0"], ["uint256"]),
        (
            "event",
            "LogMultiArg",
            ["arg0", "arg1", "arg2"],
            ["uint256", "uint256", "uint256"],
        ),
        ("event", "LogNoArg", [], []),
        ("function", "FnSingleArg", ["arg0"], ["uint256"]),
        ("function", "FnMultiArg", ["arg0", "arg1"], ["uint256", "uint256"]),
        ("constructor", "ConstArg", ["inputs"], ["uint256"]),
    ],
)
def test_get_input_names_from_abi_element(element_type, name, input_names, input_types):
    abi_element = make_abi_element(element_type, name, input_names, input_types)
    assert get_abi_input_names(abi_element) == input_names


@pytest.mark.parametrize(
    "element_type,name",
    [
        ("fallback", "FbNoArg"),
        ("receive", "RecNoArg"),
    ],
    ids=[
        "fallback inputs are always empty",
        "receive inputs are always empty",
    ],
)
def test_get_input_names_from_fallback_or_receive_abi(element_type, name):
    abi_element = make_abi_element(element_type, name)
    assert get_abi_input_names(abi_element) == []


@pytest.mark.parametrize(
    "element_type,name,input_names,input_types",
    [
        ("event", "LogSingleArg", ["arg0"], ["uint256"]),
        (
            "event",
            "LogSingleWithIndex",  # TODO: actually create indexed event topic
            ["arg0"],
            ["uint256"],
        ),
        (
            "event",
            "LogMultiArg",
            ["arg0", "arg1", "arg2"],
            ["uint256", "uint256", "uint256"],
        ),
        ("event", "LogNoArg", [], []),
        ("function", "FnSingleArg", ["arg0"], ["uint256"]),
        ("function", "FnMultiArg", ["arg0", "arg1"], ["uint256", "uint256"]),
        ("constructor", "ConstArg", ["inputs"], ["uint256"]),
    ],
)
def test_get_input_types_from_abi_element(element_type, name, input_names, input_types):
    abi_element = make_abi_element(element_type, name, input_names, input_types)
    assert get_abi_input_types(abi_element) == input_types


@pytest.mark.parametrize(
    "element_type,name",
    [
        ("fallback", "FbNoArg"),
        ("receive", "RecNoArg"),
    ],
    ids=[
        "fallback inputs are always empty",
        "receive inputs are always empty",
    ],
)
def test_get_input_types_from_fallback_or_receive_abi(element_type, name):
    abi_element = make_abi_element(element_type, name)
    assert get_abi_input_types(abi_element) == []


@pytest.mark.parametrize(
    "element_type,name,input_names,input_types",
    [
        ("function", "FnMultiTypedArg", ["arg0", "arg1"], ["uint256", "bytes32"]),
    ],
)
def test_get_tuple_input_types_from_abi_element(
    element_type, name, input_names, input_types
):
    abi_element = make_abi_element(element_type, name, input_names, input_types)
    assert get_abi_input_types(abi_element) == input_types


@pytest.mark.parametrize(
    "element_type,name,output_names,output_types",
    [
        ("function", "FnMultiTypedArg", ["arg0", "arg1"], ["uint256", "bytes32"]),
    ],
)
def test_get_abi_output_names(element_type, name, output_names, output_types):
    abi_element = make_abi_element(
        element_type,
        name,
        input_names=[],
        input_types=[],
        output_names=output_names,
        output_types=output_types,
    )
    assert get_abi_output_names(abi_element) == output_names


@pytest.mark.parametrize(
    "element_type,name,output_names,output_types",
    [
        ("function", "FnMultiTypedArg", ["arg0", "arg1"], ["uint256", "bytes32"]),
    ],
)
def test_get_abi_output_types(element_type, name, output_names, output_types):
    abi_element = make_abi_element(
        element_type,
        name,
        input_names=[],
        input_types=[],
        output_names=output_names,
        output_types=output_types,
    )
    assert get_abi_output_types(abi_element) == output_types


EVENT_ABI_A = {
    "anonymous": False,
    "name": "Transfer",
    "type": "event",
    "inputs": [
        {"indexed": True, "name": "from", "type": "address"},
        {"indexed": True, "name": "to", "type": "address"},
        {"indexed": False, "name": "value", "type": "uint256"},
    ],
}


@pytest.mark.parametrize(
    "event_abi,expected",
    (
        (
            EVENT_ABI_A,
            "0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef",
        ),
    ),
)
def test_event_abi_to_log_topic(event_abi, expected):
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
def test_event_signature_to_log_topic(event_signature, expected):
    bytes_topic = event_signature_to_log_topic(event_signature)
    hex_topic = encode_hex(bytes_topic)
    assert hex_topic == expected
