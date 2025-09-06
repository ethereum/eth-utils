# mypy: disable-error-code=misc
from typing import Any, Callable, Dict, List, Tuple

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

# Deduplicated lambdas
some_func = lambda x: x
is_gt_0 = lambda x: x > 0
is_lt_0 = lambda x: x < 0

# apply_formatter_at_index
afi_cases = list(range(3))
afi_ids = [f"at-index-{i}" for i in range(3)]

# combine_argument_formatters
caf_cases = [
    (some_func,),
    (some_func, some_func),
    (some_func, some_func, some_func),
]
caf_ids = [
    "one-formatter",
    "two-formatters",
    "three-formatters",
]

# apply_formatters_to_sequence
afts_cases = [
    ([some_func], [1]),
    ([some_func, some_func], [1, 2]),
    ([some_func, some_func, some_func], [1, 2, 3]),
    ([some_func, some_func, some_func, some_func], [1, 2, 3, 4]),
]
afts_ids = [
    "1-item",
    "2-items",
    "3-items",
    "4-items",
]

# apply_formatter_if: condition true and false
afi_if_cases = [
    (is_gt_0, some_func, 2),  # true
    (is_gt_0, some_func, -1),  # false
]
afi_if_ids = [
    "condition-true",
    "condition-false",
]

# apply_formatters_to_dict
af2d_cases = [
    ({"a": some_func, "b": some_func}, {"a": 1, "b": 2}),  # all keys present
    ({"a": some_func}, {"a": 1, "b": 2}),  # key not present in formatters
]
af2d_ids = [
    "all-keys-present",
    "key-not-present",
]

# apply_formatter_to_array
afta_cases = [
    (some_func, [1, 2, 3]),         # multi-item
    (some_func, [5]),               # single-item
    (some_func, []),                # empty
]
afta_ids = [
    "multi-item",
    "single-item",
    "empty",
]

# apply_one_of_formatters
aoof_cases = [
    (((is_gt_0, some_func), (is_lt_0, some_func)), 2),  # first matches
    (((is_lt_0, some_func), (is_gt_0, some_func)), 2),  # second matches
]
aoof_ids = [
    "first-matches",
    "second-matches",
]

# apply_key_map
akm_cases = [
    ({"a": "b"}, {"a": 1}),  # no conflict, single key
    ({"a": "b", "c": "d"}, {"a": 1, "c": 2}),  # two keys, no conflict
    ({}, {}),  # empty mapping
    ({"x": "y"}, {"x": 42, "z": 99}),  # mapping with unrelated key
]
akm_ids = [
    "single-key",
    "two-keys",
    "empty",
    "unrelated-key",
]

@pytest.mark.benchmark(group="apply_formatter_at_index")
@pytest.mark.parametrize("at_index", afi_cases, ids=afi_ids)
def test_apply_formatter_at_index(
    benchmark: BenchmarkFixture,
    at_index: int,
) -> None:
    benchmark(_batch, 10, eth_utils.apply_formatter_at_index, some_func, at_index, [0, 1, 2])

@pytest.mark.benchmark(group="apply_formatter_at_index")
@pytest.mark.parametrize("at_index", afi_cases, ids=afi_ids)
def test_faster_apply_formatter_at_index(
    benchmark: BenchmarkFixture,
    at_index: int,
) -> None:
    benchmark(_batch, 10, faster_eth_utils.apply_formatter_at_index, some_func, at_index, [0, 1, 2])

@pytest.mark.benchmark(group="combine_argument_formatters")
@pytest.mark.parametrize("formatters", caf_cases, ids=caf_ids)
def test_combine_argument_formatters(
    benchmark: BenchmarkFixture,
    formatters: Tuple[Callable[[int], int], ...]
) -> None:
    benchmark(_batch, 10, eth_utils.combine_argument_formatters, *formatters)

@pytest.mark.benchmark(group="combine_argument_formatters")
@pytest.mark.parametrize("formatters", caf_cases, ids=caf_ids)
def test_faster_combine_argument_formatters(
    benchmark: BenchmarkFixture,
    formatters: Tuple[Callable[[int], int], ...]
) -> None:
    benchmark(_batch, 10, faster_eth_utils.combine_argument_formatters, *formatters)

@pytest.mark.benchmark(group="apply_formatters_to_sequence")
@pytest.mark.parametrize("formatters,sequence", afts_cases, ids=afts_ids)
def test_apply_formatters_to_sequence(
    benchmark: BenchmarkFixture,
    formatters: List[Callable[[int], int]],
    sequence: List[int]
) -> None:
    benchmark(_batch, 10, eth_utils.apply_formatters_to_sequence, formatters, sequence)

@pytest.mark.benchmark(group="apply_formatters_to_sequence")
@pytest.mark.parametrize("formatters,sequence", afts_cases, ids=afts_ids)
def test_faster_apply_formatters_to_sequence(
    benchmark: BenchmarkFixture,
    formatters: List[Callable[[int], int]],
    sequence: List[int]
) -> None:
    benchmark(_batch, 10, faster_eth_utils.apply_formatters_to_sequence, formatters, sequence)

@pytest.mark.benchmark(group="apply_formatter_if")
@pytest.mark.parametrize("pred,formatter,value", afi_if_cases, ids=afi_if_ids)
def test_apply_formatter_if(
    benchmark: BenchmarkFixture,
    pred: Callable[[int], bool],
    formatter: Callable[[int], int],
    value: int
) -> None:
    benchmark(_batch, 10, eth_utils.apply_formatter_if, pred, formatter, value)

@pytest.mark.benchmark(group="apply_formatter_if")
@pytest.mark.parametrize("pred,formatter,value", afi_if_cases, ids=afi_if_ids)
def test_faster_apply_formatter_if(
    benchmark: BenchmarkFixture,
    pred: Callable[[int], bool],
    formatter: Callable[[int], int],
    value: int
) -> None:
    benchmark(_batch, 10, faster_eth_utils.apply_formatter_if, pred, formatter, value)

@pytest.mark.benchmark(group="apply_formatters_to_dict")
@pytest.mark.parametrize("formatters,value", af2d_cases, ids=af2d_ids)
def test_apply_formatters_to_dict(
    benchmark: BenchmarkFixture,
    formatters: Dict[str, Callable[[int], int]],
    value: Dict[str, int]
) -> None:
    benchmark(_batch, 10, eth_utils.apply_formatters_to_dict, formatters, value)

@pytest.mark.benchmark(group="apply_formatters_to_dict")
@pytest.mark.parametrize("formatters,value", af2d_cases, ids=af2d_ids)
def test_faster_apply_formatters_to_dict(
    benchmark: BenchmarkFixture,
    formatters: Dict[str, Callable[[int], int]],
    value: Dict[str, int]
) -> None:
    benchmark(_batch, 10, faster_eth_utils.apply_formatters_to_dict, formatters, value)

@pytest.mark.benchmark(group="apply_formatter_to_array")
@pytest.mark.parametrize("formatter,value", afta_cases, ids=afta_ids)
def test_apply_formatter_to_array(
    benchmark: BenchmarkFixture,
    formatter: Callable[[int], int],
    value: List[int]
) -> None:
    benchmark(_batch, 10, eth_utils.apply_formatter_to_array, formatter, value)

@pytest.mark.benchmark(group="apply_formatter_to_array")
@pytest.mark.parametrize("formatter,value", afta_cases, ids=afta_ids)
def test_faster_apply_formatter_to_array(
    benchmark: BenchmarkFixture,
    formatter: Callable[[int], int],
    value: List[int]
) -> None:
    benchmark(_batch, 10, faster_eth_utils.apply_formatter_to_array, formatter, value)

@pytest.mark.benchmark(group="apply_one_of_formatters")
@pytest.mark.parametrize("formatter_condition_pairs,value", aoof_cases, ids=aoof_ids)
def test_apply_one_of_formatters(
    benchmark: BenchmarkFixture,
    formatter_condition_pairs: Tuple[Tuple[Callable[[int], bool], Callable[[int], int]], ...],
    value: int
) -> None:
    benchmark(_batch, 10, eth_utils.apply_one_of_formatters, formatter_condition_pairs, value)

@pytest.mark.benchmark(group="apply_one_of_formatters")
@pytest.mark.parametrize("formatter_condition_pairs,value", aoof_cases, ids=aoof_ids)
def test_faster_apply_one_of_formatters(
    benchmark: BenchmarkFixture,
    formatter_condition_pairs: Tuple[Tuple[Callable[[int], bool], Callable[[int], int]], ...],
    value: int
) -> None:
    benchmark(_batch, 10, faster_eth_utils.apply_one_of_formatters, formatter_condition_pairs, value)

@pytest.mark.benchmark(group="apply_key_map")
@pytest.mark.parametrize("key_map,value", akm_cases, ids=akm_ids)
def test_apply_key_map(
    benchmark: BenchmarkFixture,
    key_map: Dict[str, str],
    value: Dict[str, int]
) -> None:
    benchmark(_batch, 10, eth_utils.apply_key_map, key_map, value)

@pytest.mark.benchmark(group="apply_key_map")
@pytest.mark.parametrize("key_map,value", akm_cases, ids=akm_ids)
def test_faster_apply_key_map(
    benchmark: BenchmarkFixture,
    key_map: Dict[str, str],
    value: Dict[str, int]
) -> None:
    benchmark(_batch, 10, faster_eth_utils.apply_key_map, key_map, value)
