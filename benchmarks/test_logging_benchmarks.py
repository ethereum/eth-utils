from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import logging as fe_logging
from eth_utils import logging as e_logging

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="setup_DEBUG2_logging")
def test_setup_DEBUG2_logging(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, e_logging.setup_DEBUG2_logging)

@pytest.mark.benchmark(group="setup_DEBUG2_logging")
def test_faster_setup_DEBUG2_logging(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, fe_logging.setup_DEBUG2_logging)

@pytest.mark.benchmark(group="get_logger")
def test_get_logger(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_logging.get_logger, "test_logger")

@pytest.mark.benchmark(group="get_logger")
def test_faster_get_logger(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_logging.get_logger, "test_logger")

@pytest.mark.benchmark(group="get_extended_debug_logger")
def test_get_extended_debug_logger(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_logging.get_extended_debug_logger, "test_logger")

@pytest.mark.benchmark(group="get_extended_debug_logger")
def test_faster_get_extended_debug_logger(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_logging.get_extended_debug_logger, "test_logger")
