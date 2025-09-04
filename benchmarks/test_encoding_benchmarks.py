from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="int_to_big_endian")
def test_int_to_big_endian(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.int_to_big_endian, 123456789)

@pytest.mark.benchmark(group="int_to_big_endian")
def test_faster_int_to_big_endian(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.int_to_big_endian, 123456789)

@pytest.mark.benchmark(group="big_endian_to_int")
def test_big_endian_to_int(benchmark: BenchmarkFixture) -> None:
    value = (123456789).to_bytes(8, "big")
    benchmark(_batch, 100, eth_utils.big_endian_to_int, value)

@pytest.mark.benchmark(group="big_endian_to_int")
def test_faster_big_endian_to_int(benchmark: BenchmarkFixture) -> None:
    value = (123456789).to_bytes(8, "big")
    benchmark(_batch, 100, faster_eth_utils.big_endian_to_int, value)
