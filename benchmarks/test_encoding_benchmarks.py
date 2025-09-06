# mypy: disable-error-code=misc
from typing import Any, Callable, Union

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

int_to_be_cases = [
    0,
    1,
    255,
    256,
    2**256 - 1,
]
int_to_be_ids = [
    "zero",
    "one",
    "255",
    "256",
    "max",
]

be_to_int_cases = [
    b"",
    b"\x01",
    b"\xff",
    b"\x00\x01",
    b"\xff" * 32,
]
be_to_int_ids = [
    "empty-bytes",
    "one-byte",
    "ff-byte",
    "two-bytes",
    "32-ff-bytes",
]

@pytest.mark.benchmark(group="int_to_big_endian")
@pytest.mark.parametrize("value", int_to_be_cases, ids=int_to_be_ids)
def test_int_to_big_endian(benchmark: BenchmarkFixture, value: int) -> None:
    benchmark(_batch, 10, eth_utils.int_to_big_endian, value)

@pytest.mark.benchmark(group="int_to_big_endian")
@pytest.mark.parametrize("value", int_to_be_cases, ids=int_to_be_ids)
def test_faster_int_to_big_endian(benchmark: BenchmarkFixture, value: int) -> None:
    benchmark(_batch, 10, faster_eth_utils.int_to_big_endian, value)

@pytest.mark.benchmark(group="big_endian_to_int")
@pytest.mark.parametrize("value", be_to_int_cases, ids=be_to_int_ids)
def test_big_endian_to_int(benchmark: BenchmarkFixture, value: Union[bytes, str]) -> None:
    benchmark(_batch, 10, eth_utils.big_endian_to_int, value)

@pytest.mark.benchmark(group="big_endian_to_int")
@pytest.mark.parametrize("value", be_to_int_cases, ids=be_to_int_ids)
def test_faster_big_endian_to_int(benchmark: BenchmarkFixture, value: Union[bytes, str]) -> None:
    benchmark(_batch, 10, faster_eth_utils.big_endian_to_int, value)
