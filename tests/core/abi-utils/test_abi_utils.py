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
    get_all_function_abis,
    get_event_abi,
    get_event_log_topics,
)
from eth_utils.exceptions import (
    ValidationError,
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
    input_indexed=None,
    output_names=None,
    output_types=None,
    anonymous=None,
) -> ABIElement:
    if element_type == "event":
        return make_event_abi(name, input_names, input_types, input_indexed, anonymous)
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


def make_constructor_abi(input_names=None, input_types=None) -> ABIConstructor:
    if input_names is None or input_types is None:
        input_names = []
        input_types = []

    assert len(input_names) == len(input_types)
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


def make_event_abi_input(name, input_type, indexed=False) -> ABIEventParam:
    return {
        "indexed": indexed,
        "internalType": input_type,
        "name": name,
        "type": input_type,
    }


def make_event_abi(
    name, input_names=None, input_types=None, input_indexed=None, anonymous=None
) -> ABIEvent:
    if input_names is None or input_types is None or input_indexed is None:
        input_names = []
        input_types = []
        input_indexed = []

    if anonymous is None:
        anonymous = False

    assert len(input_names) == len(input_types) == len(input_indexed)

    inputs = [
        make_event_abi_input(input_name, input_type, input_indexed)
        for (input_name, input_type, input_indexed) in zip(
            input_names, input_types, input_indexed
        )
    ]
    return {
        "anonymous": anonymous,
        "inputs": inputs,
        "name": name,
        "type": "event",
    }


def make_function_abi_input(name, input_type) -> ABIFunctionParam:
    return {"internalType": input_type, "name": name, "type": input_type}


def make_function_abi_output(name, input_type) -> ABIFunctionParam:
    return {"internalType": input_type, "name": name, "type": input_type}


def make_function_abi(
    name, input_names, input_types, output_names, output_types
) -> ABIFunction:
    if input_names is None or input_types is None:
        input_names = []
        input_types = []

    assert len(input_names) == len(input_types)
    inputs = [
        make_function_abi_input(input_name, input_type)
        for (input_name, input_type) in zip(input_names, input_types)
    ]

    if output_names is None or output_types is None:
        output_names = []
        output_types = []

    assert len(output_names) == len(output_types)
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
        make_event_abi("LogNoArg"),
        make_event_abi("LogSingleArg", ["arg0"], ["uint256"], [False]),
        make_event_abi("LogSingleWithIndex", ["arg0"], ["uint256"], [False]),
        make_function_abi("logTwoEvents", ["_arg0"], ["uint256"], [], []),
        make_function_abi("setValue", ["_art0"], ["uint256"], [], []),
    ]


@pytest.fixture
def contract_abi_add_function() -> ABI:
    return [
        make_function_abi(
            "add", ["x", "y"], ["uint256", "uint256"], ["sum"], ["uint256"]
        ),
    ]


@pytest.fixture
def contract_ambiguous_event() -> ABI:
    return [
        make_event_abi("LogSingleArg", ["arg0"], ["uint256"], [False]),
        make_event_abi("LogSingleArg", ["arg0"], ["uint256"], [False]),
    ]


def test_get_all_event_abis(contract_abi) -> Sequence[ABIEvent]:
    expected_event_abis = [
        make_event_abi("LogNoArg"),
        make_event_abi("LogSingleArg", ["arg0"], ["uint256"], [False]),
        make_event_abi("LogSingleWithIndex", ["arg0"], ["uint256"], [False]),
    ]
    assert get_all_event_abis(contract_abi) == expected_event_abis


def test_get_all_event_abis_without_events(
    contract_abi_add_function,
) -> Sequence[ABIEvent]:
    assert get_all_event_abis(contract_abi_add_function) == []


@pytest.mark.parametrize(
    "event_name,input_names,input_types,input_indexed",
    [
        ("LogSingleArg", ["arg0"], ["uint256"], [False]),
        ("LogSingleWithIndex", ["arg0"], ["uint256"], [False]),
        ("LogNoArg", [], [], []),
    ],
)
def test_get_event_abi(
    contract_abi, event_name, input_names, input_types, input_indexed
):
    expected_event_abi = make_event_abi(
        event_name, input_names, input_types, input_indexed
    )
    assert get_event_abi(contract_abi, event_name, input_names) == expected_event_abi


def test_get_event_abi_raises_if_none_found(contract_abi_add_function):
    with pytest.raises(ValueError) as error:
        get_event_abi(contract_abi_add_function, "foo", [])

    assert str(error.value) == "No matching events found"


def test_get_event_abi_raises_if_multiple_found(contract_ambiguous_event):
    with pytest.raises(ValueError) as error:
        get_event_abi(contract_ambiguous_event, "LogSingleArg", ["arg0"])

    assert str(error.value) == "Multiple events found"


@pytest.mark.parametrize(
    "element_type,name,input_names,input_types,input_indexed",
    [
        ("event", "LogSingleArg", ["arg0"], ["uint256"], [False]),
        ("event", "LogSingleWithIndex", ["arg0"], ["uint256"], [True]),
        (
            "event",
            "LogMultiArg",
            ["arg0", "arg1", "arg2"],
            ["uint256", "uint256", "uint256"],
            [False, False, False],
        ),
        ("event", "LogNoArg", [], [], []),
        ("function", "FnSingleArg", ["arg0"], ["uint256"], [False]),
        ("function", "FnMultiArg", ["arg0", "arg1"], ["uint256", "uint256"], [False]),
        ("constructor", "ConstArg", ["inputs"], ["uint256"], [False]),
    ],
)
def test_get_input_names_from_abi_element(
    element_type, name, input_names, input_types, input_indexed
):
    abi_element = make_abi_element(
        element_type, name, input_names, input_types, input_indexed
    )
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
    "element_type,name,input_names,input_types,input_indexed",
    [
        ("event", "LogSingleArg", ["arg0"], ["uint256"], [False]),
        (
            "event",
            "LogSingleWithIndex",
            ["arg0"],
            ["uint256"],
            [False],
        ),
        (
            "event",
            "LogMultiArg",
            ["arg0", "arg1", "arg2"],
            ["uint256", "uint256", "uint256"],
            [False, False, False],
        ),
        ("event", "LogNoArg", [], [], []),
        ("function", "FnSingleArg", ["arg0"], ["uint256"], [False]),
        (
            "function",
            "FnMultiArg",
            ["arg0", "arg1"],
            ["uint256", "uint256"],
            [False, False],
        ),
        (
            "function",
            "FnMultiTypedArg",
            ["arg0", "arg1"],
            ["uint256", "bytes32"],
            [False, False],
        ),
        ("constructor", "ConstArg", ["inputs"], ["uint256"], [False]),
    ],
)
def test_get_input_types_from_abi_element(
    element_type, name, input_names, input_types, input_indexed
):
    abi_element = make_abi_element(
        element_type, name, input_names, input_types, input_indexed
    )
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
    "element_type,name,output_names,output_types",
    [
        ("function", "FnMultiTypedArg", ["arg0", "arg1"], ["uint256", "bytes32"]),
        ("constructor", "Const", [], []),
        ("fallback", "Fb", [], []),
        ("receive", "Rec", [], []),
        ("event", "Rec", [], []),
    ],
)
def test_get_abi_output_names(element_type, name, output_names, output_types):
    abi_element = make_abi_element(
        element_type,
        name,
        input_names=[],
        input_types=[],
        input_indexed=[],
        output_names=output_names,
        output_types=output_types,
    )
    assert get_abi_output_names(abi_element) == output_names


@pytest.mark.parametrize(
    "element_type,name,output_names,output_types",
    [
        ("function", "FnMultiTypedArg", ["arg0", "arg1"], ["uint256", "bytes32"]),
        ("constructor", "Const", [], []),
        ("fallback", "Fb", [], []),
        ("receive", "Rec", [], []),
        ("event", "Rec", [], []),
    ],
)
def test_get_abi_output_types(element_type, name, output_names, output_types):
    abi_element = make_abi_element(
        element_type,
        name,
        input_names=[],
        input_types=[],
        input_indexed=[],
        output_names=output_names,
        output_types=output_types,
    )
    assert get_abi_output_types(abi_element) == output_types


@pytest.mark.parametrize(
    "element_type,name,topics,anonymous,expected_topics",
    [
        (
            "event",
            "LogSingleArg",
            [
                "0x87e10a54d1dda06db0fde99bdb2e67e6638ca9d2b5add2e3b5b406525b15824a",
                "0x1",
                "0x2",
            ],
            False,
            ["0x1", "0x2"],
        ),
        (
            "event",
            "LogSingleArg",
            [
                "0x111",
            ],
            True,
            ["0x111"],
        ),
    ],
)
def test_get_event_log_topics(element_type, name, topics, anonymous, expected_topics):
    abi_element = make_abi_element(element_type, name, anonymous=anonymous)
    assert get_event_log_topics(abi_element, topics) == expected_topics


@pytest.mark.parametrize(
    "element_type,name,topics,expected_error",
    [
        (
            "event",
            "LogSingleArg",
            [],
            "Expected non-anonymous event to have 1 or more topics",
        ),
        (
            "event",
            "LogSingleArg",
            ["0x1"],
            "The event signature did not match the provided ABI",
        ),
    ],
)
def test_get_event_log_topics_raises_for_bad_topics(
    element_type, name, topics, expected_error
):
    abi_element = make_abi_element(element_type, name)
    with pytest.raises(ValidationError) as err:
        get_event_log_topics(abi_element, topics)

    assert str(err.value) == expected_error


def test_get_all_function_abis(contract_abi):
    expected_function_abis = [
        make_function_abi("logTwoEvents", ["_arg0"], ["uint256"], [], []),
        make_function_abi("setValue", ["_art0"], ["uint256"], [], []),
    ]
    assert get_all_function_abis(contract_abi) == expected_function_abis


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
