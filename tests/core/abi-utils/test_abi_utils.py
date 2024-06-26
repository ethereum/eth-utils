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
from fixtures.abis import (
    ABI_CONSTRUCTOR,
    ABI_ERROR,
    ABI_EVENT_LOG_NO_ARG,
    ABI_EVENT_LOG_SINGLE_ARG,
    ABI_EVENT_LOG_SINGLE_WITH_INDEX,
    ABI_EVENT_LOG_TWO_EVENTS,
    ABI_EVENT_TRANSFER,
    ABI_FALLBACK,
    ABI_FUNCTION_ADD,
    ABI_FUNCTION_ARRAY_OF_TUPLES,
    ABI_FUNCTION_CEILING,
    ABI_FUNCTION_FIXED_ARRAY_OF_TUPLES,
    ABI_FUNCTION_MULTI_TUPLE_INPUTS,
    ABI_FUNCTION_NESTED_TUPLE_INPUTS,
    ABI_FUNCTION_NO_INPUTS,
    ABI_FUNCTION_REGISTRAR,
    ABI_FUNCTION_SINGLETON_TUPLE_INPUT,
    ABI_FUNCTION_THREE_NAMED_ARGS,
    ABI_FUNCTION_TOKEN_LAUNCHED,
    ABI_FUNCTION_TWO_UNNAMED_ARGS,
    ABI_FUNCTION_ZERO_TUPLE_INPUT,
    ABI_RECEIVE,
    build_contract_abi,
)


@pytest.mark.parametrize(
    "abi_element,expected",
    (
        (ABI_FUNCTION_TOKEN_LAUNCHED, "0xde78e78a"),
        (ABI_FUNCTION_CEILING, "0xc51bf934"),
        (ABI_FUNCTION_REGISTRAR, "0xa31d5580"),
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
    ),
)
def test_fn_signature_to_4byte_selector(signature: str, expected: HexStr) -> None:
    bytes_selector = function_signature_to_4byte_selector(signature)
    hex_selector = encode_hex(bytes_selector)
    assert hex_selector == expected


@pytest.mark.parametrize(
    "abi_element,expected",
    (
        (
            ABI_FUNCTION_NESTED_TUPLE_INPUTS,
            "nestedTupleInputs((address,uint256,bytes,(address,uint256,bytes)))",
        ),
        (ABI_FUNCTION_NO_INPUTS, "noInputs()"),
        (ABI_FUNCTION_ARRAY_OF_TUPLES, "tupleArrayInput((address,uint256,bytes)[])"),
        (
            ABI_FUNCTION_FIXED_ARRAY_OF_TUPLES,
            "tupleFixedArrayInput((address,uint256,bytes)[5])",
        ),
        (ABI_FUNCTION_ZERO_TUPLE_INPUT, "zeroTupleInput(())"),
        (ABI_FUNCTION_SINGLETON_TUPLE_INPUT, "singletonTupleInput((address))"),
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
            [ABI_FUNCTION_ADD, ABI_FALLBACK, ABI_RECEIVE, ABI_CONSTRUCTOR],
            [],
        ),
        (
            [
                ABI_EVENT_LOG_NO_ARG,
                ABI_FUNCTION_ADD,
                ABI_FALLBACK,
                ABI_RECEIVE,
                ABI_CONSTRUCTOR,
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
            [ABI_ERROR],
            "Invalid",
            [ABI_ERROR],
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
            [ABI_CONSTRUCTOR],  # constructor abi has no name
            "constructor",
            [],
        ),
        (
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_TOKEN_LAUNCHED],
            "tokenLaunched",
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_TOKEN_LAUNCHED],
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
    "abi_elements,abi_type,expected_abis",
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
            [
                ABI_EVENT_LOG_TWO_EVENTS,
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
            ],
            "notatype",
            [],
        ),
    ),
)
def test_filter_abi_by_type(
    abi_elements: Sequence[ABIElement],
    abi_type: str,
    expected_abis: Sequence[ABIElement],
) -> None:
    contract_abi = build_contract_abi(abi_elements)
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
                ABI_ERROR,
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
            ],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [
                ABI_FUNCTION_TOKEN_LAUNCHED,
                ABI_FUNCTION_CEILING,
                ABI_FUNCTION_REGISTRAR,
                ABI_CONSTRUCTOR,
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
                ABI_CONSTRUCTOR,
            ],
            [ABI_FUNCTION_TOKEN_LAUNCHED, ABI_FUNCTION_CEILING, ABI_FUNCTION_REGISTRAR],
        ),
        (
            [ABI_FALLBACK, ABI_RECEIVE, ABI_CONSTRUCTOR],
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
            [
                1,
                "0x1234567890123456789012345678901234567890",
                b"bar",
            ],
        ),
        (
            ABI_FUNCTION_TWO_UNNAMED_ARGS,
            (1, 2),
            {},
            (1, 2),
        ),
        (
            ABI_FUNCTION_THREE_NAMED_ARGS,
            (1, 2, 3),
            {},
            (1, 2, 3),
        ),
        (
            ABI_ERROR,
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
            ABI_FUNCTION_NO_INPUTS,
            (),
            {},
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `function` with inputs `None`.",
        ),
        (
            ABI_FALLBACK,
            (),
            {},
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `fallback` with inputs `None`.",
        ),
        (
            ABI_RECEIVE,
            (),
            {},
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `receive` with inputs `None`.",
        ),
        (
            ABI_FUNCTION_THREE_NAMED_ARGS,
            (1,),
            {"a": 2, "b": 3},
            TypeError,
            "threeNamedArgs() got multiple values for argument(s) 'b'",
        ),
        (
            ABI_FUNCTION_THREE_NAMED_ARGS,
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
            ABI_ERROR,
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
            ABI_ERROR,
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
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `fallback` with inputs `None`.",
        ),
        (
            ABI_RECEIVE,
            (),
            ValueError,
            "Inputs not supported for function types 'fallback' or 'receive'. "
            "Provided ABI type was `receive` with inputs `None`.",
        ),
        (
            ABI_FUNCTION_NO_INPUTS,
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
