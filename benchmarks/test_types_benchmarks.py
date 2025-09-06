# mypy: disable-error-code=misc
from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

is_integer_cases = [
    123,        # True
    True,       # False (bool is not int)
    1.5,        # False
    "abc",      # False
]
is_integer_ids = [
    "int",
    "bool",
    "float",
    "str",
]

is_bytes_cases = [
    b"abc",     # True
    bytearray(b"abc"),  # True
    "abc",      # False
    123,        # False
]
is_bytes_ids = [
    "bytes",
    "bytearray",
    "str",
    "int",
]

is_text_cases = [
    "abc",      # True
    b"abc",     # False
    123,        # False
]
is_text_ids = [
    "str",
    "bytes",
    "int",
]

is_string_cases = [
    "abc",      # True
    b"abc",     # True
    bytearray(b"abc"),  # True
    123,        # False
]
is_string_ids = [
    "str",
    "bytes",
    "bytearray",
    "int",
]

is_boolean_cases = [
    True,       # True
    False,      # True
    1,          # False
    "abc",      # False
]
is_boolean_ids = [
    "True",
    "False",
    "int",
    "str",
]

is_dict_cases = [
    {"a": 1},   # True
    [("a", 1)], # False
    123,        # False
]
is_dict_ids = [
    "dict",
    "list-of-tuples",
    "int",
]

is_list_like_cases = [
    [1, 2, 3],  # True
    (1, 2, 3),  # True
    "abc",      # False
    123,        # False
]
is_list_like_ids = [
    "list",
    "tuple",
    "str",
    "int",
]

is_list_cases = [
    [1, 2, 3],  # True
    (1, 2, 3),  # False
    "abc",      # False
]
is_list_ids = [
    "list",
    "tuple",
    "str",
]

is_tuple_cases = [
    (1, 2, 3),  # True
    [1, 2, 3],  # False
    "abc",      # False
]
is_tuple_ids = [
    "tuple",
    "list",
    "str",
]

is_null_cases = [
    None,       # True
    0,          # False
    "",         # False
]
is_null_ids = [
    "None",
    "zero",
    "empty-str",
]

is_number_cases = [
    123,        # True
    1.5,        # True
    "abc",      # False
    [1, 2, 3],  # False
]
is_number_ids = [
    "int",
    "float",
    "str",
    "list",
]

@pytest.mark.benchmark(group="is_integer")
@pytest.mark.parametrize("value", is_integer_cases, ids=is_integer_ids)
def test_is_integer(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_integer, value)

@pytest.mark.benchmark(group="is_integer")
@pytest.mark.parametrize("value", is_integer_cases, ids=is_integer_ids)
def test_faster_is_integer(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_integer, value)

@pytest.mark.benchmark(group="is_bytes")
@pytest.mark.parametrize("value", is_bytes_cases, ids=is_bytes_ids)
def test_is_bytes(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_bytes, value)

@pytest.mark.benchmark(group="is_bytes")
@pytest.mark.parametrize("value", is_bytes_cases, ids=is_bytes_ids)
def test_faster_is_bytes(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_bytes, value)

@pytest.mark.benchmark(group="is_text")
@pytest.mark.parametrize("value", is_text_cases, ids=is_text_ids)
def test_is_text(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_text, value)

@pytest.mark.benchmark(group="is_text")
@pytest.mark.parametrize("value", is_text_cases, ids=is_text_ids)
def test_faster_is_text(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_text, value)

@pytest.mark.benchmark(group="is_string")
@pytest.mark.parametrize("value", is_string_cases, ids=is_string_ids)
def test_is_string(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_string, value)

@pytest.mark.benchmark(group="is_string")
@pytest.mark.parametrize("value", is_string_cases, ids=is_string_ids)
def test_faster_is_string(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_string, value)

@pytest.mark.benchmark(group="is_boolean")
@pytest.mark.parametrize("value", is_boolean_cases, ids=is_boolean_ids)
def test_is_boolean(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_boolean, value)

@pytest.mark.benchmark(group="is_boolean")
@pytest.mark.parametrize("value", is_boolean_cases, ids=is_boolean_ids)
def test_faster_is_boolean(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_boolean, value)

@pytest.mark.benchmark(group="is_dict")
@pytest.mark.parametrize("value", is_dict_cases, ids=is_dict_ids)
def test_is_dict(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_dict, value)

@pytest.mark.benchmark(group="is_dict")
@pytest.mark.parametrize("value", is_dict_cases, ids=is_dict_ids)
def test_faster_is_dict(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_dict, value)

@pytest.mark.benchmark(group="is_list_like")
@pytest.mark.parametrize("value", is_list_like_cases, ids=is_list_like_ids)
def test_is_list_like(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_list_like, value)

@pytest.mark.benchmark(group="is_list_like")
@pytest.mark.parametrize("value", is_list_like_cases, ids=is_list_like_ids)
def test_faster_is_list_like(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_list_like, value)

@pytest.mark.benchmark(group="is_list")
@pytest.mark.parametrize("value", is_list_cases, ids=is_list_ids)
def test_is_list(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_list, value)

@pytest.mark.benchmark(group="is_list")
@pytest.mark.parametrize("value", is_list_cases, ids=is_list_ids)
def test_faster_is_list(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_list, value)

@pytest.mark.benchmark(group="is_tuple")
@pytest.mark.parametrize("value", is_tuple_cases, ids=is_tuple_ids)
def test_is_tuple(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_tuple, value)

@pytest.mark.benchmark(group="is_tuple")
@pytest.mark.parametrize("value", is_tuple_cases, ids=is_tuple_ids)
def test_faster_is_tuple(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_tuple, value)

@pytest.mark.benchmark(group="is_null")
@pytest.mark.parametrize("value", is_null_cases, ids=is_null_ids)
def test_is_null(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_null, value)

@pytest.mark.benchmark(group="is_null")
@pytest.mark.parametrize("value", is_null_cases, ids=is_null_ids)
def test_faster_is_null(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_null, value)

@pytest.mark.benchmark(group="is_number")
@pytest.mark.parametrize("value", is_number_cases, ids=is_number_ids)
def test_is_number(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_number, value)

@pytest.mark.benchmark(group="is_number")
@pytest.mark.parametrize("value", is_number_cases, ids=is_number_ids)
def test_faster_is_number(benchmark: BenchmarkFixture, value: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_number, value)
