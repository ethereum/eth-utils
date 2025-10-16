# mypy: disable-error-code=misc
from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def run_1000(fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(1000):
        fn(*inputs)

clamp_cases = [
    (0, 10, -5),   # value < lower_bound
    (0, 10, 15),   # value > upper_bound
    (0, 10, 5),    # lower_bound < value < upper_bound
    (0, 10, 0),    # value == lower_bound
    (0, 10, 10),   # value == upper_bound
]
clamp_ids = [
    "below-lower",
    "above-upper",
    "within-bounds",
    "at-lower",
    "at-upper",
]

@pytest.mark.benchmark(group="clamp")
@pytest.mark.parametrize("lower,upper,value", clamp_cases, ids=clamp_ids)
def test_clamp(benchmark: BenchmarkFixture, lower: int, upper: int, value: int) -> None:
    benchmark(run_1000, eth_utils.clamp, lower, upper, value)

@pytest.mark.benchmark(group="clamp")
@pytest.mark.parametrize("lower,upper,value", clamp_cases, ids=clamp_ids)
def test_faster_clamp(benchmark: BenchmarkFixture, lower: int, upper: int, value: int) -> None:
    benchmark(run_1000, faster_eth_utils.clamp, lower, upper, value)
