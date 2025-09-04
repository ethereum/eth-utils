from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="from_wei")
def test_from_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.from_wei, 1000000000000000000, "ether")


@pytest.mark.benchmark(group="from_wei")
def test_faster_from_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.from_wei, 1000000000000000000, "ether")


@pytest.mark.benchmark(group="to_wei")
def test_to_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.to_wei, 1, "ether")


@pytest.mark.benchmark(group="to_wei")
def test_faster_to_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.to_wei, 1, "ether")


@pytest.mark.benchmark(group="from_wei_decimals")
def test_from_wei_decimals(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.from_wei_decimals, 100000000, 8)


@pytest.mark.benchmark(group="from_wei_decimals")
def test_faster_from_wei_decimals(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.from_wei_decimals, 100000000, 8)


@pytest.mark.benchmark(group="to_wei_decimals")
def test_to_wei_decimals(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.to_wei_decimals, 1, 8)


@pytest.mark.benchmark(group="to_wei_decimals")
def test_faster_to_wei_decimals(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.to_wei_decimals, 1, 8)
