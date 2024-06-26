from typing import (
    Sequence,
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
)

ABI_FUNCTION_NO_NAME = ABIFunction({"type": "function"})

ABI_FUNCTION_NO_INPUTS = ABIFunction({"name": "noInputs", "type": "function"})

ABI_FUNCTION_TOKEN_LAUNCHED = ABIFunction(
    {"name": "tokenLaunched", "type": "function", "inputs": []}
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

ABI_FUNCTION_THREE_NAMED_ARGS = ABIFunction(
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

ABI_ERROR = ABIError({"type": "error"})

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
