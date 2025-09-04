from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="is_integer")
def test_is_integer(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_integer, 123)


@pytest.mark.benchmark(group="is_integer")
def test_faster_is_integer(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_integer, 123)


@pytest.mark.benchmark(group="is_bytes")
def test_is_bytes(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_bytes, b"abc")


@pytest.mark.benchmark(group="is_bytes")
def test_faster_is_bytes(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_bytes, b"abc")


@pytest.mark.benchmark(group="is_text")
def test_is_text(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_text, "abc")


@pytest.mark.benchmark(group="is_text")
def test_faster_is_text(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_text, "abc")


@pytest.mark.benchmark(group="is_string")
def test_is_string(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_string, "abc")


@pytest.mark.benchmark(group="is_string")
def test_faster_is_string(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_string, "abc")


@pytest.mark.benchmark(group="is_boolean")
def test_is_boolean(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_boolean, True)


@pytest.mark.benchmark(group="is_boolean")
def test_faster_is_boolean(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_boolean, True)


@pytest.mark.benchmark(group="is_dict")
def test_is_dict(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_dict, {"a": 1})


@pytest.mark.benchmark(group="is_dict")
def test_faster_is_dict(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_dict, {"a": 1})


@pytest.mark.benchmark(group="is_list_like")
def test_is_list_like(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_list_like, [1, 2, 3])


@pytest.mark.benchmark(group="is_list_like")
def test_faster_is_list_like(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_list_like, [1, 2, 3])


@pytest.mark.benchmark(group="is_list")
def test_is_list(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_list, [1, 2, 3])


@pytest.mark.benchmark(group="is_list")
def test_faster_is_list(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_list, [1, 2, 3])


@pytest.mark.benchmark(group="is_tuple")
def test_is_tuple(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_tuple, (1, 2, 3))


@pytest.mark.benchmark(group="is_tuple")
def test_faster_is_tuple(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_tuple, (1, 2, 3))


@pytest.mark.benchmark(group="is_null")
def test_is_null(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_null, None)


@pytest.mark.benchmark(group="is_null")
def test_faster_is_null(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_null, None)


@pytest.mark.benchmark(group="is_number")
def test_is_number(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 500, eth_utils.is_number, 123.45)


@pytest.mark.benchmark(group="is_number")
def test_faster_is_number(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 500, faster_eth_utils.is_number, 123.45)
