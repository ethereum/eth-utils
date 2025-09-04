from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="apply_formatter_at_index")
def test_apply_formatter_at_index(benchmark: BenchmarkFixture) -> None:
    formatter = lambda x: x + 1
    benchmark(_batch, 100, eth_utils.apply_formatter_at_index, formatter, 0, [1, 2, 3])


@pytest.mark.benchmark(group="apply_formatter_at_index")
def test_faster_apply_formatter_at_index(benchmark: BenchmarkFixture) -> None:
    formatter = lambda x: x + 1
    benchmark(_batch, 100, faster_eth_utils.apply_formatter_at_index, formatter, 0, [1, 2, 3])


@pytest.mark.benchmark(group="combine_argument_formatters")
def test_combine_argument_formatters(benchmark: BenchmarkFixture) -> None:
    f1 = lambda x: x + 1
    f2 = lambda x: x * 2
    benchmark(_batch, 100, eth_utils.combine_argument_formatters, f1, f2)


@pytest.mark.benchmark(group="combine_argument_formatters")
def test_faster_combine_argument_formatters(benchmark: BenchmarkFixture) -> None:
    f1 = lambda x: x + 1
    f2 = lambda x: x * 2
    benchmark(_batch, 100, faster_eth_utils.combine_argument_formatters, f1, f2)


@pytest.mark.benchmark(group="apply_formatters_to_sequence")
def test_apply_formatters_to_sequence(benchmark: BenchmarkFixture) -> None:
    formatters = [lambda x: x + 1, lambda x: x * 2]
    benchmark(_batch, 100, eth_utils.apply_formatters_to_sequence, formatters, [1, 2])


@pytest.mark.benchmark(group="apply_formatters_to_sequence")
def test_faster_apply_formatters_to_sequence(benchmark: BenchmarkFixture) -> None:
    formatters = [lambda x: x + 1, lambda x: x * 2]
    benchmark(_batch, 100, faster_eth_utils.apply_formatters_to_sequence, formatters, [1, 2])


@pytest.mark.benchmark(group="apply_formatter_if")
def test_apply_formatter_if(benchmark: BenchmarkFixture) -> None:
    pred = lambda x: x > 0
    formatter = lambda x: x * 2
    benchmark(_batch, 100, eth_utils.apply_formatter_if, pred, formatter, 2)


@pytest.mark.benchmark(group="apply_formatter_if")
def test_faster_apply_formatter_if(benchmark: BenchmarkFixture) -> None:
    pred = lambda x: x > 0
    formatter = lambda x: x * 2
    benchmark(_batch, 100, faster_eth_utils.apply_formatter_if, pred, formatter, 2)


@pytest.mark.benchmark(group="apply_formatters_to_dict")
def test_apply_formatters_to_dict(benchmark: BenchmarkFixture) -> None:
    formatters = {"a": lambda x: x + 1, "b": lambda x: x * 2}
    benchmark(_batch, 100, eth_utils.apply_formatters_to_dict, formatters, {"a": 1, "b": 2})


@pytest.mark.benchmark(group="apply_formatters_to_dict")
def test_faster_apply_formatters_to_dict(benchmark: BenchmarkFixture) -> None:
    formatters = {"a": lambda x: x + 1, "b": lambda x: x * 2}
    benchmark(
        _batch, 100, faster_eth_utils.apply_formatters_to_dict, formatters, {"a": 1, "b": 2}
    )


@pytest.mark.benchmark(group="apply_formatter_to_array")
def test_apply_formatter_to_array(benchmark: BenchmarkFixture) -> None:
    formatter = lambda x: x + 1
    benchmark(_batch, 100, eth_utils.apply_formatter_to_array, formatter, [1, 2, 3])


@pytest.mark.benchmark(group="apply_formatter_to_array")
def test_faster_apply_formatter_to_array(benchmark: BenchmarkFixture) -> None:
    formatter = lambda x: x + 1
    benchmark(_batch, 100, faster_eth_utils.apply_formatter_to_array, formatter, [1, 2, 3])


@pytest.mark.benchmark(group="apply_one_of_formatters")
def test_apply_one_of_formatters(benchmark: BenchmarkFixture) -> None:
    formatters = ((lambda x: x + 1, lambda x: x * 2),)
    benchmark(_batch, 100, eth_utils.apply_one_of_formatters, formatters, 2)


@pytest.mark.benchmark(group="apply_one_of_formatters")
def test_faster_apply_one_of_formatters(benchmark: BenchmarkFixture) -> None:
    formatters = ((lambda x: x + 1, lambda x: x * 2),)
    benchmark(_batch, 100, faster_eth_utils.apply_one_of_formatters, formatters, 2)


@pytest.mark.benchmark(group="apply_key_map")
def test_apply_key_map(benchmark: BenchmarkFixture) -> None:
    key_map = {"a": "b"}
    benchmark(_batch, 100, eth_utils.apply_key_map, key_map, {"a": 1})


@pytest.mark.benchmark(group="apply_key_map")
def test_faster_apply_key_map(benchmark: BenchmarkFixture) -> None:
    key_map = {"a": "b"}
    benchmark(_batch, 100, faster_eth_utils.apply_key_map, key_map, {"a": 1})
