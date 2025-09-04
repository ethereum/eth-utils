from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="ValidationError")
def test_validation_error(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.ValidationError, "test error")


@pytest.mark.benchmark(group="ValidationError")
def test_faster_validation_error(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.ValidationError, "test error")
