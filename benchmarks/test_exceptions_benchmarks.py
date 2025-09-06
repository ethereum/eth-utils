# mypy: disable-error-code=misc
from typing import Any, Type

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, exc: Type[Exception], *inputs: Any) -> None:
    for _ in range(i):
        try:
            raise exc(*inputs)
        except exc:
            pass


@pytest.mark.benchmark(group="ValidationError")
def test_validation_error(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.ValidationError, "test error")


@pytest.mark.benchmark(group="ValidationError")
def test_faster_validation_error(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.ValidationError, "test error")
