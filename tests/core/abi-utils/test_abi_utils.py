import pytest
import json
import re
from typing import (
    NamedTuple,
    Sequence,
)

from eth_typing import (
    ABI,
    ABIConstructor,
    ABIElement,
    ABIEvent,
    ABIFallback,
    ABIFunction,
    ABIReceive,
)

from eth_utils.abi import (
    abi_to_signature,
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
    get_normalized_abi_component_type,
    get_normalized_abi_inputs,
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
FN_ABI_D = {
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
FN_ABI_E = {
    "constant": False,
    "inputs": [
        {"name": "", "type": "int256"},
        {"name": "", "type": "int256"},
    ],
    "name": "testFn",
    "outputs": [],
    "type": "function",
}
FN_ABI_DUPLICATE_NAMES = {
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
def test_abi_to_signature(abi, expected):
    assert abi_to_signature(abi) == expected


def make_abi_element(
    element_type,
    name,
    input_args=None,
    input_kwargs=None,
    outputs=None,
    anonymous=None,
) -> ABIElement:
    if element_type == "event":
        return make_event_abi(name, input_args, anonymous)
    elif element_type == "function":
        return make_function_abi(name, input_args, input_kwargs, outputs)
    elif element_type == "constructor":
        return make_constructor_abi(input_args)
    elif element_type == "fallback":
        return make_fallback_abi()
    elif element_type == "receive":
        return make_receive_abi()


def make_constructor_abi(input_args=None) -> ABIConstructor:
    if input_args is None:
        input_args = []

    return {
        "inputs": [
            {"name": arg.get("name"), "type": arg.get("type")} for arg in input_args
        ],
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


def make_event_abi(name, input_args=None, anonymous=None) -> ABIEvent:
    if input_args is None:
        input_args = []

    if anonymous is None:
        anonymous = False

    inputs = [
        {
            "indexed": arg.get("indexed"),
            "name": arg.get("name"),
            "type": arg.get("type"),
        }
        for arg in input_args
    ]
    return {
        "anonymous": anonymous,
        "inputs": inputs,
        "name": name,
        "type": "event",
    }


def make_function_abi(
    name, input_args=None, input_kwargs=None, outputs=None
) -> ABIFunction:
    if input_args is None:
        input_args = []

    if input_kwargs is None:
        input_kwargs = []

    if outputs is None:
        outputs = []

    inputs = [{"name": arg.get("name"), "type": arg.get("type")} for arg in input_args]
    inputs += [
        {
            "name": kwarg.get("name"),
            "type": "tuple",
            "components": kwarg.get("components"),
        }
        for kwarg in input_kwargs
    ]

    if outputs is None:
        outputs = []

    outputs = [
        {"name": output.get("name"), "type": output.get("type")} for output in outputs
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
        make_event_abi("LogSingleArg", [{"name": "arg0", "type": "uint256"}]),
        make_event_abi("LogSingleWithIndex", [{"name": "arg0", "type": "uint256"}]),
        make_function_abi("logTwoEvents", [{"name": "_arg0", "type": "uint256"}]),
        make_function_abi("setValue", [{"name": "_arg0", "type": "uint256"}]),
        make_function_abi(
            "setValue",
            [{"name": "_arg0", "type": "uint256"}],
            [
                {
                    "name": "arg1",
                    "components": [
                        {"name": "a", "type": "uint256"},
                        {"name": "b", "type": "uint256"},
                    ],
                }
            ],
        ),
    ]


@pytest.fixture
def contract_abi_add_function() -> ABI:
    return [
        make_function_abi(
            "add",
            [{"name": "x", "type": "uint256"}, {"name": "y", "type": "uint256"}],
            [{}],
            [{"name": "sum", "type": "uint256"}],
        ),
    ]


def test_get_all_event_abis(contract_abi) -> Sequence[ABIEvent]:
    expected_event_abis = [
        make_event_abi("LogNoArg"),
        make_event_abi("LogSingleArg", [{"name": "arg0", "type": "uint256"}]),
        make_event_abi("LogSingleWithIndex", [{"name": "arg0", "type": "uint256"}]),
    ]
    assert get_all_event_abis(contract_abi) == expected_event_abis


def test_get_all_event_abis_without_events(
    contract_abi_add_function,
) -> Sequence[ABIEvent]:
    assert get_all_event_abis(contract_abi_add_function) == []


def test_filter_abi_by_name(contract_abi) -> Sequence[ABIFunction]:
    expected_event_abis = [
        make_event_abi("LogNoArg"),
    ]
    assert filter_abi_by_name("LogNoArg", contract_abi) == expected_event_abis


def test_filter_abi_by_name_returns_empty_list_for_no_match(
    contract_abi,
) -> Sequence[ABIFunction]:
    assert filter_abi_by_name("notafunction", contract_abi) == []


def test_filter_abi_by_type(contract_abi) -> Sequence[ABIFunction]:
    expected_function_abis = [
        make_function_abi("logTwoEvents", [{"name": "_arg0", "type": "uint256"}]),
        make_function_abi("setValue", [{"name": "_arg0", "type": "uint256"}]),
        make_function_abi(
            "setValue",
            [{"name": "_arg0", "type": "uint256"}],
            [
                {
                    "name": "arg1",
                    "components": [
                        {"name": "a", "type": "uint256"},
                        {"name": "b", "type": "uint256"},
                    ],
                }
            ],
        ),
    ]
    assert filter_abi_by_type("function", contract_abi) == expected_function_abis


def test_filter_abi_by_type_returns_empty_list_for_no_match(
    contract_abi,
) -> Sequence[ABIFunction]:
    assert filter_abi_by_type("notatype", contract_abi) == []


@pytest.mark.parametrize(
    "element_type,name,input_args",
    [
        ("event", "LogSingleArg", [{"name": "arg0", "type": "uint256"}]),
        (
            "event",
            "LogSingleWithIndex",
            [{"name": "arg0", "type": "uint256", "indexed": True}],
        ),
        (
            "event",
            "LogMultiArg",
            [
                {"name": "arg0", "type": "uint256"},
                {"name": "arg1", "type": "uint256"},
                {"name": "arg2", "type": "uint256"},
            ],
        ),
        ("event", "LogNoArg", []),
        ("function", "FnSingleArg", [{"name": "arg0", "type": "uint256"}]),
        (
            "function",
            "FnMultiArg",
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "uint256"}],
        ),
        ("constructor", "ConstArg", [{"name": "inputs", "type": "uint256"}]),
    ],
)
def test_get_input_names_from_abi_element(element_type, name, input_args):
    abi_element = make_abi_element(element_type, name, input_args)
    assert get_abi_input_names(abi_element) == [arg.get("name") for arg in input_args]


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
def test_get_input_names_raises_for_fallback_or_receive_abi(element_type, name):
    abi_element = make_abi_element(element_type, name)
    with pytest.raises(
        ValueError,
        match=f"Inputs not supported for function types 'fallback' or 'receive'."
        f" Provided ABI type was '{element_type}'.",
    ):
        get_abi_input_names(abi_element)


@pytest.mark.parametrize(
    "element_type,name,input_args",
    [
        ("event", "LogSingleArg", [{"name": "arg0", "type": "uint256"}]),
        ("event", "LogSingleWithIndex", [{"name": "arg0", "type": "uint256"}]),
        (
            "event",
            "LogMultiArg",
            [
                {"name": "arg0", "type": "uint256"},
                {"name": "arg1", "type": "uint256"},
                {"name": "arg2", "type": "uint256"},
            ],
        ),
        ("event", "LogNoArg", []),
        ("function", "FnSingleArg", [{"name": "arg0", "type": "uint256"}]),
        (
            "function",
            "FnMultiArg",
            [
                {"name": "arg0", "type": "uint256"},
                {"name": "arg1", "type": "uint256"},
            ],
        ),
        (
            "function",
            "FnMultiTypedArg",
            [
                {"name": "arg0", "type": "uint256"},
                {"name": "arg1", "type": "bytes32"},
            ],
        ),
        ("constructor", "ConstArg", [{"name": "inputs", "type": "uint256"}]),
    ],
)
def test_get_input_types_from_abi_element(element_type, name, input_args):
    abi_element = make_abi_element(element_type, name, input_args)
    assert get_abi_input_types(abi_element) == [arg.get("type") for arg in input_args]


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
def test_get_input_types_raises_for_fallback_or_receive_abi(element_type, name):
    abi_element = make_abi_element(element_type, name)
    with pytest.raises(
        ValueError,
        match=f"Inputs not supported for function types 'fallback' or 'receive'."
        f" Provided ABI type was '{element_type}'.",
    ):
        get_abi_input_types(abi_element)


@pytest.mark.parametrize(
    "element_type,name,outputs",
    [
        (
            "function",
            "FnMultiTypedArg",
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "bytes32"}],
        ),
    ],
)
def test_get_abi_output_names(element_type, name, outputs):
    abi_element = make_abi_element(
        element_type,
        name,
        input_args=[],
        outputs=outputs,
    )
    assert get_abi_output_names(abi_element) == [
        output.get("name") for output in outputs
    ]


@pytest.mark.parametrize(
    "element_type,name,outputs",
    (
        ("constructor", "Const", []),
        ("fallback", "Fb", []),
        ("receive", "Rec", []),
        ("event", "Evt", []),
    ),
)
def test_get_abi_output_names_raises_for_non_function_types(
    element_type, name, outputs
):
    abi_element = make_abi_element(
        element_type,
        name,
        input_args=[],
        outputs=outputs,
    )
    with pytest.raises(
        ValueError,
        match=f"Outputs only supported for ABI type 'function'."
        f" Provided ABI type was '{element_type}'.",
    ):
        get_abi_output_names(abi_element)


@pytest.mark.parametrize(
    "element_type,name,outputs",
    [
        (
            "function",
            "FnMultiTypedArg",
            [{"name": "arg0", "type": "uint256"}, {"name": "arg1", "type": "bytes32"}],
        ),
    ],
)
def test_get_abi_output_types(element_type, name, outputs):
    abi_element = make_abi_element(
        element_type,
        name,
        input_args=[],
        outputs=outputs,
    )
    assert get_abi_output_types(abi_element) == [
        output.get("type") for output in outputs
    ]


@pytest.mark.parametrize(
    "element_type,name,outputs",
    (
        ("constructor", "Const", []),
        ("fallback", "Fb", []),
        ("receive", "Rec", []),
        ("event", "Evt", []),
    ),
)
def test_get_abi_output_types_raises_for_non_function_types(
    element_type, name, outputs
):
    abi_element = make_abi_element(
        element_type,
        name,
        input_args=[],
        outputs=outputs,
    )
    with pytest.raises(
        ValueError,
        match=f"Outputs only supported for ABI type 'function'."
        f" Provided ABI type was '{element_type}'.",
    ):
        get_abi_output_types(abi_element)


def test_get_all_function_abis(contract_abi):
    expected_function_abis = [
        make_function_abi("logTwoEvents", [{"name": "_arg0", "type": "uint256"}]),
        make_function_abi("setValue", [{"name": "_arg0", "type": "uint256"}]),
        make_function_abi(
            "setValue",
            [{"name": "_arg0", "type": "uint256"}],
            [
                {
                    "name": "arg1",
                    "components": [
                        {"name": "a", "type": "uint256"},
                        {"name": "b", "type": "uint256"},
                    ],
                }
            ],
        ),
    ]

    abis = get_all_function_abis(contract_abi)
    assert abis == expected_function_abis


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


@pytest.mark.parametrize(
    "abi_component,expected",
    (
        (
            (
                {
                    "components": [
                        {"name": "anAddress", "type": "address"},
                        {"name": "anInt", "type": "uint256"},
                        {"name": "someBytes", "type": "bytes"},
                    ],
                    "type": "tuple",
                }
            ),
            "(address,uint256,bytes)",
        ),
        (
            (
                {
                    "components": [
                        {"name": "bytes32", "type": "bytes32[]"},
                        {"name": "bytes", "type": "bytes"},
                        {"name": "someMoarBytes", "type": "bytes"},
                    ],
                    "type": "tuple[]",
                }
            ),
            "(bytes32[],bytes,bytes)[]",
        ),
        (
            (
                {
                    "components": [
                        {"name": "anAddress", "type": "address"},
                        {"name": "anInt", "type": "uint256"},
                        {"name": "someBytes", "type": "bytes"},
                    ],
                    "type": "tuple[3]",
                }
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
def test_get_normalized_abi_component_type(abi_component, expected):
    assert get_normalized_abi_component_type(abi_component) == expected


@pytest.mark.parametrize(
    "abi_component",
    (
        (
            {
                "type": False,
            }
        ),
    ),
)
def test_get_normalized_abi_component_type_with_errors(abi_component):
    with pytest.raises(TypeError):
        get_normalized_abi_component_type(abi_component)


@pytest.mark.parametrize(
    "fn_abi,args,kwargs,expected",
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
            FN_ABI_NO_INPUTS,
            (),
            {},
            (),
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
    ),
)
def test_get_normalized_abi_inputs(fn_abi, args, kwargs, expected):
    inputs = get_normalized_abi_inputs(fn_abi, args, kwargs)

    assert inputs == expected


def test_get_normalized_abi_inputs_returns_args_without_kwargs():
    args = [1, "0x1234567890123456789012345678901234567890", b"bar"]
    kwargs = {}
    inputs = get_normalized_abi_inputs(FN_ABI_C, args, kwargs)

    assert inputs == args


def test_error_when_invalid_args_kwargs_combo_provided():
    with pytest.raises(TypeError, match="Incorrect argument count."):
        get_normalized_abi_inputs(
            FN_ABI_E,
            (
                1,
                2,
            ),
            {"a": 1, "b": 2},
        )


def test_kwargs_is_disallowed_when_merging_with_unnamed_inputs():
    with pytest.raises(TypeError):
        get_normalized_abi_inputs(FN_ABI_E, tuple(), {"x": 1, "y": 2})


def test_args_works_when_merging_with_unnamed_inputs():
    actual = get_normalized_abi_inputs(FN_ABI_E, (1, 2), {})
    assert actual == (1, 2)


def test_args_allowed_when_duplicate_named_inputs():
    actual = get_normalized_abi_inputs(FN_ABI_DUPLICATE_NAMES, (1, 2, 3), {})
    assert actual == (1, 2, 3)


def test_kwargs_not_allowed_for_duplicate_input_names():
    with pytest.raises(
        TypeError, match=re.escape("testFn() got multiple values for argument(s) 'b'")
    ):
        get_normalized_abi_inputs(FN_ABI_DUPLICATE_NAMES, (1,), {"a": 2, "b": 3})


def test_kwargs_allowed_if_no_intersections_with_duplicate_input_names():
    with pytest.raises(
        TypeError, match=re.escape("testFn() got multiple values for argument(s) 'b'")
    ):
        get_normalized_abi_inputs(FN_ABI_DUPLICATE_NAMES, (1,), {"a": 2, "b": 3})


def test_get_normalized_abi_inputs_returns_args_for_error_abis():
    error_abi = {
        "name": "Invalid",
        "type": "error",
        "inputs": [
            {"type": "address", "name": "a"},
            {"type": "bytes32", "name": "b"},
        ],
    }
    args = ["0x1234567890123456789012345678901234567890", b"bar"]
    kwargs = {}
    inputs = get_normalized_abi_inputs(error_abi, args, kwargs)

    assert inputs == args


class MyXYTuple(NamedTuple):
    x: int
    y: int


TEST_FUNCTION_ABI_JSON = """
{
  "constant": false,
  "inputs": [
    {
      "components": [
        {
          "name": "a",
          "type": "uint256"
        },
        {
          "name": "b",
          "type": "uint256[]"
        },
        {
          "components": [
            {
              "name": "x",
              "type": "uint256"
            },
            {
              "name": "y",
              "type": "uint256"
            }
          ],
          "name": "c",
          "type": "tuple[]"
        }
      ],
      "name": "s",
      "type": "tuple"
    },
    {
      "components": [
        {
          "name": "x",
          "type": "uint256"
        },
        {
          "name": "y",
          "type": "uint256"
        }
      ],
      "name": "t",
      "type": "tuple"
    },
    {
      "name": "a",
      "type": "uint256"
    },
    {
      "components": [
        {
          "name": "x",
          "type": "uint256"
        },
        {
          "name": "y",
          "type": "uint256"
        }
      ],
      "name": "b",
      "type": "tuple[][]"
    }
  ],
  "name": "f",
  "outputs": [],
  "payable": false,
  "stateMutability": "nonpayable",
  "type": "function"
}
"""
TEST_FUNCTION_ABI = json.loads(TEST_FUNCTION_ABI_JSON)

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
GET_ABI_INPUTS_TESTS = (
    (
        TEST_FUNCTION_ABI,
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
        TEST_FUNCTION_ABI,
        {
            "s": {"a": 1, "b": [2, 3, 4], "c": [(5, 6), (7, 8), {"x": 9, "y": 10}]},
            "t": {"x": 11, "y": 12},
            "a": 13,
            "b": [[(14, 15), (16, 17)], [{"x": 18, "y": 19}]],
        },
        GET_ABI_INPUTS_OUTPUT,
    ),
    (
        TEST_FUNCTION_ABI,
        {
            "s": {"a": 1, "b": [2, 3, 4], "c": [(5, 6), (7, 8), (9, 10)]},
            "t": (11, 12),
            "a": 13,
            "b": [[(14, 15), (16, 17)], [(18, 19)]],
        },
        GET_ABI_INPUTS_OUTPUT,
    ),
    (
        TEST_FUNCTION_ABI,
        {
            "s": (1, [2, 3, 4], [(5, 6), (7, 8), (9, 10)]),
            "t": (11, 12),
            "a": 13,
            "b": [[(14, 15), (16, 17)], [(18, 19)]],
        },
        GET_ABI_INPUTS_OUTPUT,
    ),
    (
        TEST_FUNCTION_ABI,
        (
            (1, [2, 3, 4], [(5, 6), (7, 8), (9, 10)]),
            (11, 12),
            13,
            [[(14, 15), (16, 17)], [(18, 19)]],
        ),
        GET_ABI_INPUTS_OUTPUT,
    ),
    (
        TEST_FUNCTION_ABI,
        {
            "s": {"a": 1, "b": [2, 3, 4], "c": [(5, 6), (7, 8), MyXYTuple(x=9, y=10)]},
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
        {},
        (),
        ((), ()),
    ),
)


@pytest.mark.parametrize(
    "abi, args, expected",
    GET_ABI_INPUTS_TESTS,
)
def test_get_aligned_abi_inputs(abi, args, expected):
    assert get_aligned_abi_inputs(abi, args) == expected


GET_ABI_INPUTS_RAISING_TESTS = (
    (
        TEST_FUNCTION_ABI,
        {
            "s": {"a": 1, "b": [2, 3, 4], "c": ["56", (7, 8), (9, 10)]},
            "t": (11, 12),
            "a": 13,
            "b": [[(14, 15), (16, 17)], [(18, 19)]],
        },
    ),
    (
        TEST_FUNCTION_ABI,
        {
            "s": {"a": 1, "b": [2, 3, 4], "c": {(5, 6), (7, 8), (9, 10)}},
            "t": (11, 12),
            "a": 13,
            "b": [[(14, 15), (16, 17)], [(18, 19)]],
        },
    ),
)


@pytest.mark.parametrize(
    "abi, args",
    GET_ABI_INPUTS_RAISING_TESTS,
)
def test_get_aligned_abi_inputs_raises_type_error(abi, args):
    with pytest.raises(TypeError):
        get_aligned_abi_inputs(abi, args)
