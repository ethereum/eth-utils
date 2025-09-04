from typing import Any, Callable, Iterable

import eth_utils
import eth_utils.functional
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils
import faster_eth_utils.functional


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="identity")
def test_identity(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.functional.identity, 123)


@pytest.mark.benchmark(group="identity")
def test_faster_identity(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.functional.identity, 123)


@pytest.mark.benchmark(group="combine")
def test_combine(benchmark: BenchmarkFixture) -> None:
    f1 = lambda x: x + 1
    f2 = lambda x: x * 2
    combined = eth_utils.functional.combine(f1, f2)
    benchmark(_batch, 100, combined, 5)


@pytest.mark.benchmark(group="combine")
def test_faster_combine(benchmark: BenchmarkFixture) -> None:
    f1 = lambda x: x + 1
    f2 = lambda x: x * 2
    combined = faster_eth_utils.functional.combine(f1, f2)
    benchmark(_batch, 100, combined, 5)


@pytest.mark.benchmark(group="apply_to_return_value")
def test_apply_to_return_value(benchmark: BenchmarkFixture) -> None:
    def add(x: int, y: int) -> int:
        return x + y

    decorated = eth_utils.apply_to_return_value(lambda v: v * 2)(add)
    benchmark(_batch, 100, decorated, 1, 2)


@pytest.mark.benchmark(group="apply_to_return_value")
def test_faster_apply_to_return_value(benchmark: BenchmarkFixture) -> None:
    def add(x: int, y: int) -> int:
        return x + y

    decorated = faster_eth_utils.apply_to_return_value(lambda v: v * 2)(add)
    benchmark(_batch, 100, decorated, 1, 2)


@pytest.mark.benchmark(group="to_tuple")
def test_to_tuple(benchmark: BenchmarkFixture) -> None:
    def gen() -> Iterable[int]:
        return [1, 2, 3]

    decorated = eth_utils.to_tuple(lambda: [1, 2, 3])
    benchmark(_batch, 100, decorated)


@pytest.mark.benchmark(group="to_tuple")
def test_faster_to_tuple(benchmark: BenchmarkFixture) -> None:
    def gen() -> Iterable[int]:
        return [1, 2, 3]

    decorated = faster_eth_utils.to_tuple(lambda: [1, 2, 3])
    benchmark(_batch, 100, decorated)


@pytest.mark.benchmark(group="to_list")
def test_to_list(benchmark: BenchmarkFixture) -> None:
    decorated = eth_utils.to_list(lambda: (x for x in range(3)))
    benchmark(_batch, 100, decorated)


@pytest.mark.benchmark(group="to_list")
def test_faster_to_list(benchmark: BenchmarkFixture) -> None:
    decorated = faster_eth_utils.to_list(lambda: (x for x in range(3)))
    benchmark(_batch, 100, decorated)


@pytest.mark.benchmark(group="to_set")
def test_to_set(benchmark: BenchmarkFixture) -> None:
    decorated = eth_utils.to_set(lambda: (x for x in range(3)))
    benchmark(_batch, 100, decorated)


@pytest.mark.benchmark(group="to_set")
def test_faster_to_set(benchmark: BenchmarkFixture) -> None:
    decorated = faster_eth_utils.to_set(lambda: (x for x in range(3)))
    benchmark(_batch, 100, decorated)


@pytest.mark.benchmark(group="to_dict")
def test_to_dict(benchmark: BenchmarkFixture) -> None:
    decorated = eth_utils.to_dict(lambda: [("a", 1), ("b", 2)])
    benchmark(_batch, 100, decorated)


@pytest.mark.benchmark(group="to_dict")
def test_faster_to_dict(benchmark: BenchmarkFixture) -> None:
    decorated = faster_eth_utils.to_dict(lambda: [("a", 1), ("b", 2)])
    benchmark(_batch, 100, decorated)
