from typing import Any, Callable

import eth_utils
import eth_utils.decorators
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils
import faster_eth_utils.decorators


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="return_arg_type")
def test_return_arg_type(benchmark: BenchmarkFixture) -> None:
    def add(x: int, y: int) -> int:
        return x + y

    decorated = eth_utils.decorators.return_arg_type(0)(add)
    benchmark(_batch, 100, decorated, 1, 2)


@pytest.mark.benchmark(group="return_arg_type")
def test_faster_return_arg_type(benchmark: BenchmarkFixture) -> None:
    def add(x: int, y: int) -> int:
        return x + y

    decorated = faster_eth_utils.decorators.return_arg_type(0)(add)
    benchmark(_batch, 100, decorated, 1, 2)


@pytest.mark.benchmark(group="replace_exceptions")
def test_replace_exceptions(benchmark: BenchmarkFixture) -> None:
    def raise_fn():
        raise ValueError("fail")

    decorated = eth_utils.replace_exceptions({ValueError: RuntimeError})(raise_fn)
    try:
        benchmark(_batch, 100, decorated)
    except RuntimeError:
        pass


@pytest.mark.benchmark(group="replace_exceptions")
def test_faster_replace_exceptions(benchmark: BenchmarkFixture) -> None:
    def raise_fn():
        raise ValueError("fail")

    decorated = faster_eth_utils.replace_exceptions({ValueError: RuntimeError})(raise_fn)
    try:
        benchmark(_batch, 100, decorated)
    except RuntimeError:
        pass
