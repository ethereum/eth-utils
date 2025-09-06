# mypy: disable-error-code=misc
from typing import Any, Callable, Iterable, List, Tuple, Dict

import eth_utils
import eth_utils.functional
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils
import faster_eth_utils.functional

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

identity_cases = [
    123,
    "abc",
    [1, 2, 3],
    {"a": 1},
]
identity_ids = [
    "int",
    "str",
    "list",
    "dict",
]

combine_cases = [
    (lambda x: x + 1, lambda x: x * 2, 5),  # (5*2)+1 = 11
    (str.upper, str.strip, "  hello "),     # "  hello " -> "hello" -> "HELLO"
]
combine_ids = [
    "add-mul",
    "strip-upper",
]

apply_to_return_value_cases = [
    (lambda v: v * 2, lambda x, y: x + y, (1, 2)),  # (1+2)*2 = 6
    (str.upper, lambda s: s + " world", ("hello",)), # "hello world" -> "HELLO WORLD"
]
apply_to_return_value_ids = [
    "add-mul",
    "concat-upper",
]

to_tuple_cases = [
    (lambda: [1, 2, 3], ()),
    (lambda: [1], ()),
    (lambda: [], ()),
]

to_list_cases = [
    (lambda: (x for x in range(3)), ()),
    (lambda: (x for x in range(1)), ()),
    (lambda: (), ()),
]

to_set_cases = [
    (lambda: (x for x in [1, 2, 2, 3]), ()),
    (lambda: (x for x in [1]), ()),
    (lambda: (), ()),
]

to_dict_cases = [
    (lambda: [("a", 1), ("b", 2), ("c", 3)], ()),
    (lambda: [("a", 1)], ()),
    (lambda: [], ()),
]

item_count_ids = [
    "3-items",
    "1-item",
    "0-items",
]

@pytest.mark.benchmark(group="identity")
@pytest.mark.parametrize("value", identity_cases, ids=identity_ids)
def test_identity(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 10, eth_utils.functional.identity, value)

@pytest.mark.benchmark(group="identity")
@pytest.mark.parametrize("value", identity_cases, ids=identity_ids)
def test_faster_identity(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 10, faster_eth_utils.functional.identity, value)

@pytest.mark.benchmark(group="combine")
@pytest.mark.parametrize("f1,f2,arg", combine_cases, ids=combine_ids)
def test_combine(benchmark: BenchmarkFixture, f1: Callable[[Any], Any], f2: Callable[[Any], Any], arg: Any) -> None:
    combined = eth_utils.functional.combine(f1, f2)
    benchmark(_batch, 10, combined, arg)

@pytest.mark.benchmark(group="combine")
@pytest.mark.parametrize("f1,f2,arg", combine_cases, ids=combine_ids)
def test_faster_combine(benchmark: BenchmarkFixture, f1: Callable[[Any], Any], f2: Callable[[Any], Any], arg: Any) -> None:
    combined = faster_eth_utils.functional.combine(f1, f2)
    benchmark(_batch, 10, combined, arg)

@pytest.mark.benchmark(group="apply_to_return_value")
@pytest.mark.parametrize("callback,fn,args", apply_to_return_value_cases, ids=apply_to_return_value_ids)
def test_apply_to_return_value(
    benchmark: BenchmarkFixture,
    callback: Callable[[Any], Any],
    fn: Callable[..., Any],
    args: Tuple[Any, ...]
) -> None:
    decorated = eth_utils.apply_to_return_value(callback)(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="apply_to_return_value")
@pytest.mark.parametrize("callback,fn,args", apply_to_return_value_cases, ids=apply_to_return_value_ids)
def test_faster_apply_to_return_value(
    benchmark: BenchmarkFixture,
    callback: Callable[[Any], Any],
    fn: Callable[..., Any],
    args: Tuple[Any, ...]
) -> None:
    decorated = faster_eth_utils.apply_to_return_value(callback)(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="to_tuple")
@pytest.mark.parametrize("fn,args", to_tuple_cases, ids=item_count_ids)
def test_to_tuple(benchmark: BenchmarkFixture, fn: Callable[..., Any], args: Tuple[Any, ...]) -> None:
    decorated = eth_utils.to_tuple(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="to_tuple")
@pytest.mark.parametrize("fn,args", to_tuple_cases, ids=item_count_ids)
def test_faster_to_tuple(benchmark: BenchmarkFixture, fn: Callable[..., Any], args: Tuple[Any, ...]) -> None:
    decorated = faster_eth_utils.to_tuple(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="to_list")
@pytest.mark.parametrize("fn,args", to_list_cases, ids=item_count_ids)
def test_to_list(benchmark: BenchmarkFixture, fn: Callable[..., Any], args: Tuple[Any, ...]) -> None:
    decorated = eth_utils.to_list(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="to_list")
@pytest.mark.parametrize("fn,args", to_list_cases, ids=item_count_ids)
def test_faster_to_list(benchmark: BenchmarkFixture, fn: Callable[..., Any], args: Tuple[Any, ...]) -> None:
    decorated = faster_eth_utils.to_list(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="to_set")
@pytest.mark.parametrize("fn,args", to_set_cases, ids=item_count_ids)
def test_to_set(benchmark: BenchmarkFixture, fn: Callable[..., Any], args: Tuple[Any, ...]) -> None:
    decorated = eth_utils.to_set(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="to_set")
@pytest.mark.parametrize("fn,args", to_set_cases, ids=item_count_ids)
def test_faster_to_set(benchmark: BenchmarkFixture, fn: Callable[..., Any], args: Tuple[Any, ...]) -> None:
    decorated = faster_eth_utils.to_set(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="to_dict")
@pytest.mark.parametrize("fn,args", to_dict_cases, ids=item_count_ids)
def test_to_dict(benchmark: BenchmarkFixture, fn: Callable[..., Any], args: Tuple[Any, ...]) -> None:
    decorated = eth_utils.to_dict(fn)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="to_dict")
@pytest.mark.parametrize("fn,args", to_dict_cases, ids=item_count_ids)
def test_faster_to_dict(benchmark: BenchmarkFixture, fn: Callable[..., Any], args: Tuple[Any, ...]) -> None:
    decorated = faster_eth_utils.to_dict(fn)
    benchmark(_batch, 10, decorated, *args)
