# mypy: disable-error-code=misc
from typing import Any, Callable, Dict, Tuple

import eth_utils
import eth_utils.decorators
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils
import faster_eth_utils.decorators

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        try:
            fn(*inputs)
        except (TypeError, RuntimeError) as e:
            if str(e) != "fail":
                raise

# return_arg_type: test with int, str, float, at_position 0 and 1
rat_cases = [
    (0, (1, 2)),         # int, at position 0
    (1, (1, 2)),         # int, at position 1
    (0, ("a", "b")),     # str, at position 0
    (1, ("a", "b")),     # str, at position 1
    (0, (1.5, 2.5)),     # float, at position 0
]
rat_ids = [
    "int-pos0",
    "int-pos1",
    "str-pos0",
    "str-pos1",
    "float-pos0",
]

def raise_value_error():
    raise ValueError("fail")

def raise_type_error():
    raise TypeError("fail")

def no_raise():
    return 42

re_func_lookup: Dict[str, Callable[[], Any]] = {
    "raise_value_error": raise_value_error,
    "raise_type_error": raise_type_error,
    "no_raise": no_raise,
}
re_cases = [
    ("raise_value_error", {ValueError: RuntimeError}),  # mapped
    ("raise_type_error", {ValueError: RuntimeError}),   # unmapped (should raise TypeError)
    ("no_raise", {ValueError: RuntimeError}),           # no exception
]
re_ids = [
    "mapped-exception",
    "unmapped-exception",
    "no-exception",
]

@pytest.mark.benchmark(group="return_arg_type")
@pytest.mark.parametrize("at_position,args", rat_cases, ids=rat_ids)
def test_return_arg_type(
    benchmark: BenchmarkFixture,
    at_position: int,
    args: Tuple[Any, ...]
) -> None:
    def add(x: Any, y: Any) -> Any:
        return x + y
    decorated = eth_utils.decorators.return_arg_type(at_position)(add)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="return_arg_type")
@pytest.mark.parametrize("at_position,args", rat_cases, ids=rat_ids)
def test_faster_return_arg_type(
    benchmark: BenchmarkFixture,
    at_position: int,
    args: Tuple[Any, ...]
) -> None:
    def add(x: Any, y: Any) -> Any:
        return x + y
    decorated = faster_eth_utils.decorators.return_arg_type(at_position)(add)
    benchmark(_batch, 10, decorated, *args)

@pytest.mark.benchmark(group="replace_exceptions")
@pytest.mark.parametrize("func_key,exc_map", re_cases, ids=re_ids)
def test_replace_exceptions(
    benchmark: BenchmarkFixture,
    func_key: str,
    exc_map: dict
) -> None:
    fn = re_func_lookup[func_key]
    decorated = eth_utils.replace_exceptions(exc_map)(fn)
    benchmark(_batch, 10, decorated)

@pytest.mark.benchmark(group="replace_exceptions")
@pytest.mark.parametrize("func_key,exc_map", re_cases, ids=re_ids)
def test_faster_replace_exceptions(
    benchmark: BenchmarkFixture,
    func_key: str,
    exc_map: dict
) -> None:
    fn = re_func_lookup[func_key]
    decorated = faster_eth_utils.replace_exceptions(exc_map)(fn)
    benchmark(_batch, 10, decorated)
