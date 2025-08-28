from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import exceptions as fe_exc
from eth_utils import exceptions as e_exc

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="ValidationError")
def test_validation_error(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_exc.ValidationError, "test error")

@pytest.mark.benchmark(group="ValidationError")
def test_faster_validation_error(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_exc.ValidationError, "test error")
