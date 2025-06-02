# no-unused-vars
from typing import (
    Sequence,
)

from faster_eth_utils import (
    filter_abi_by_type,
)
from faster_eth_utils.abi import (
    ABIConstructor,
    ABIError,
    ABIEvent,
    ABIFallback,
    ABIFunction,
    ABIReceive,
)


def test_filter_abi_by_type_function() -> None:
    _result: Sequence[ABIFunction] = filter_abi_by_type("function", [])  # noqa: F841


def test_filter_abi_by_type_constructor() -> None:
    _result: Sequence[ABIConstructor] = filter_abi_by_type(  # noqa: F841
        "constructor", []
    )


def test_filter_abi_by_type_fallback() -> None:
    _result: Sequence[ABIFallback] = filter_abi_by_type("fallback", [])  # noqa: F841


def test_filter_abi_by_type_receive() -> None:
    _result: Sequence[ABIReceive] = filter_abi_by_type("receive", [])  # noqa: F841


def test_filter_abi_by_type_event() -> None:
    _result: Sequence[ABIEvent] = filter_abi_by_type("event", [])  # noqa: F841


def test_filter_abi_by_type_error() -> None:
    _result: Sequence[ABIError] = filter_abi_by_type("error", [])  # noqa: F841
