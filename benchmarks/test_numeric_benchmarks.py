from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import numeric as fe_numeric
from eth_utils import numeric as e_numeric

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="clamp")
def test_clamp(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_numeric.clamp, 0, 10, 5)

@pytest.mark.benchmark(group="clamp")
def test_faster_clamp(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_numeric.clamp, 0, 10, 5)
