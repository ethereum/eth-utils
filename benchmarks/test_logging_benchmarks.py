from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="setup_DEBUG2_logging")
def test_setup_DEBUG2_logging(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, eth_utils.setup_DEBUG2_logging)


@pytest.mark.benchmark(group="setup_DEBUG2_logging")
def test_faster_setup_DEBUG2_logging(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, faster_eth_utils.setup_DEBUG2_logging)


@pytest.mark.benchmark(group="get_logger")
def test_get_logger(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.get_logger, "test_logger")


@pytest.mark.benchmark(group="get_logger")
def test_faster_get_logger(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.get_logger, "test_logger")


@pytest.mark.benchmark(group="get_extended_debug_logger")
def test_get_extended_debug_logger(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.get_extended_debug_logger, "test_logger")


@pytest.mark.benchmark(group="get_extended_debug_logger")
def test_faster_get_extended_debug_logger(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.get_extended_debug_logger, "test_logger")
