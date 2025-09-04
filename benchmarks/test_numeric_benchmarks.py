from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="clamp")
def test_clamp(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.clamp, 0, 10, 5)


@pytest.mark.benchmark(group="clamp")
def test_faster_clamp(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.clamp, 0, 10, 5)
