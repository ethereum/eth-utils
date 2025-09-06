# mypy: disable-error-code=misc
from typing import Any, Callable, Dict

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, fn: Callable[..., Any], **kwargs: Any) -> None:
    for _ in range(i):
        fn(**kwargs)

cases = [
    {"primitive": b"hello world"},         # bytes
    {"primitive": 123456789},              # int
    {"primitive": True},                   # bool
    {"hexstr": "0x68656c6c6f"},            # hexstr
    {"text": "hello world"},               # text
]
ids = [
    "bytes",
    "int",
    "bool",
    "hexstr",
    "text",
]

@pytest.mark.benchmark(group="keccak")
@pytest.mark.parametrize("kwargs", cases, ids=ids)
def test_keccak(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, eth_utils.keccak, **kwargs)

@pytest.mark.benchmark(group="keccak")
@pytest.mark.parametrize("kwargs", cases, ids=ids)
def test_faster_keccak(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, faster_eth_utils.keccak, **kwargs)
