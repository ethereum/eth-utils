from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="keccak")
def test_keccak(benchmark: BenchmarkFixture) -> None:
    data = b"hello world"
    benchmark(_batch, 100, eth_utils.keccak, data)


@pytest.mark.benchmark(group="keccak")
def test_faster_keccak(benchmark: BenchmarkFixture) -> None:
    data = b"hello world"
    benchmark(_batch, 100, faster_eth_utils.keccak, data)
