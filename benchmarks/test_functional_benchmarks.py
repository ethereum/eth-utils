from typing import Any, Callable, Iterable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import functional as fe_func
from eth_utils import functional as e_func

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="identity")
def test_identity(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_func.identity, 123)

@pytest.mark.benchmark(group="identity")
def test_faster_identity(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_func.identity, 123)

@pytest.mark.benchmark(group="combine")
def test_combine(benchmark: BenchmarkFixture) -> None:
    f1 = lambda x: x + 1
    f2 = lambda x: x * 2
    combined = e_func.combine(f1, f2)
    benchmark(_batch, 100, combined, 5)

@pytest.mark.benchmark(group="combine")
def test_faster_combine(benchmark: BenchmarkFixture) -> None:
    f1 = lambda x: x + 1
    f2 = lambda x: x * 2
    combined = fe_func.combine(f1, f2)
    benchmark(_batch, 100, combined, 5)

@pytest.mark.benchmark(group="apply_to_return_value")
def test_apply_to_return_value(benchmark: BenchmarkFixture) -> None:
    def add(x: int, y: int) -> int:
        return x + y
    decorated = e_func.apply_to_return_value(lambda v: v * 2)(add)
    benchmark(_batch, 100, decorated, 1, 2)

@pytest.mark.benchmark(group="apply_to_return_value")
def test_faster_apply_to_return_value(benchmark: BenchmarkFixture) -> None:
    def add(x: int, y: int) -> int:
        return x + y
    decorated = fe_func.apply_to_return_value(lambda v: v * 2)(add)
    benchmark(_batch, 100, decorated, 1, 2)

@pytest.mark.benchmark(group="to_tuple")
def test_to_tuple(benchmark: BenchmarkFixture) -> None:
    def gen() -> Iterable[int]:
        return [1, 2, 3]
    decorated = e_func.to_tuple(lambda: [1, 2, 3])
    benchmark(_batch, 100, decorated)

@pytest.mark.benchmark(group="to_tuple")
def test_faster_to_tuple(benchmark: BenchmarkFixture) -> None:
    def gen() -> Iterable[int]:
        return [1, 2, 3]
    decorated = fe_func.to_tuple(lambda: [1, 2, 3])
    benchmark(_batch, 100, decorated)

@pytest.mark.benchmark(group="to_list")
def test_to_list(benchmark: BenchmarkFixture) -> None:
    decorated = e_func.to_list(lambda: (x for x in range(3)))
    benchmark(_batch, 100, decorated)

@pytest.mark.benchmark(group="to_list")
def test_faster_to_list(benchmark: BenchmarkFixture) -> None:
    decorated = fe_func.to_list(lambda: (x for x in range(3)))
    benchmark(_batch, 100, decorated)

@pytest.mark.benchmark(group="to_set")
def test_to_set(benchmark: BenchmarkFixture) -> None:
    decorated = e_func.to_set(lambda: (x for x in range(3)))
    benchmark(_batch, 100, decorated)

@pytest.mark.benchmark(group="to_set")
def test_faster_to_set(benchmark: BenchmarkFixture) -> None:
    decorated = fe_func.to_set(lambda: (x for x in range(3)))
    benchmark(_batch, 100, decorated)

@pytest.mark.benchmark(group="to_dict")
def test_to_dict(benchmark: BenchmarkFixture) -> None:
    decorated = e_func.to_dict(lambda: [("a", 1), ("b", 2)])
    benchmark(_batch, 100, decorated)

@pytest.mark.benchmark(group="to_dict")
def test_faster_to_dict(benchmark: BenchmarkFixture) -> None:
    decorated = fe_func.to_dict(lambda: [("a", 1), ("b", 2)])
    benchmark(_batch, 100, decorated)
