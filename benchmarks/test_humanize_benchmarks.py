# mypy: disable-error-code=misc
from typing import Any, Callable, List

import eth_utils
import eth_utils.humanize
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils
import faster_eth_utils.humanize

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

# Parameter sets for multi-path/boolean coverage

humanize_seconds_cases = [
    0,
    1,
    59,
    60,
    3600,
    3661,
    -1,  # edge/invalid
]
humanize_seconds_ids = [
    "zero",
    "one-second",
    "fifty-nine-seconds",
    "one-minute",
    "one-hour",
    "one-hour-one-minute-one-second",
    "negative",
]

humanize_bytes_cases = [
    b"hi",
    b"hello world",
    b"",
    b"\x00" * 32,
]
humanize_bytes_ids = [
    "short",
    "long",
    "empty",
    "32-bytes",
]

humanize_hexstr_cases = [
    "0x68656c6c6f",
    "68656c6c6f",
    "",
    "0x" + "a" * 100,
    "a" * 100,
]
humanize_hexstr_ids = [
    "short-0x",
    "short-no-0x",
    "empty",
    "very-long-0x",
    "very-long-no-0x",
]

ipfs_cases = [
    "ipfs://QmYwAPJzv5CZsnAzt8auVTL5zL2b8w6Q7rKjz3bgiGkXkP",  # valid
    "ipfs://notacidhash",  # invalid
    "http://example.com",  # invalid
    "",  # invalid
]
ipfs_ids = [
    "valid-cidv0",
    "invalid-cid",
    "not-ipfs",
    "empty",
]

humanize_integer_sequence_cases = [
    [],
    [1],
    [1, 2, 3],
    [1, 2, 3, 7, 8, 9],
    [1, 2, 3, 5, 7, 8, 9],
    [1, 7, 8, 9],
]
humanize_integer_sequence_ids = [
    "empty",
    "single",
    "consecutive",
    "two-consecutive-ranges",
    "mixed",
    "disjoint",
]

humanize_wei_cases = [
    1000000000000000000,  # ether
    1000000000,           # gwei
    1,                    # wei
    0,                    # zero
]
humanize_wei_ids = [
    "ether",
    "gwei",
    "wei",
    "zero",
]

@pytest.mark.benchmark(group="humanize_seconds")
@pytest.mark.parametrize("value", humanize_seconds_cases, ids=humanize_seconds_ids)
def test_humanize_seconds(benchmark: BenchmarkFixture, value: Any) -> None:
    try:
        benchmark(_batch, 10, eth_utils.humanize_seconds, value)
    except Exception:
        pass

@pytest.mark.benchmark(group="humanize_seconds")
@pytest.mark.parametrize("value", humanize_seconds_cases, ids=humanize_seconds_ids)
def test_faster_humanize_seconds(benchmark: BenchmarkFixture, value: Any) -> None:
    try:
        benchmark(_batch, 10, faster_eth_utils.humanize_seconds, value)
    except Exception:
        pass

@pytest.mark.benchmark(group="humanize_bytes")
@pytest.mark.parametrize("value", humanize_bytes_cases, ids=humanize_bytes_ids)
def test_humanize_bytes(benchmark: BenchmarkFixture, value: bytes) -> None:
    benchmark(_batch, 10, eth_utils.humanize_bytes, value)

@pytest.mark.benchmark(group="humanize_bytes")
@pytest.mark.parametrize("value", humanize_bytes_cases, ids=humanize_bytes_ids)
def test_faster_humanize_bytes(benchmark: BenchmarkFixture, value: bytes) -> None:
    benchmark(_batch, 10, faster_eth_utils.humanize_bytes, value)

@pytest.mark.benchmark(group="humanize_hexstr")
@pytest.mark.parametrize("value", humanize_hexstr_cases, ids=humanize_hexstr_ids)
def test_humanize_hexstr(benchmark: BenchmarkFixture, value: str) -> None:
    benchmark(_batch, 10, eth_utils.humanize_hexstr, value)

@pytest.mark.benchmark(group="humanize_hexstr")
@pytest.mark.parametrize("value", humanize_hexstr_cases, ids=humanize_hexstr_ids)
def test_faster_humanize_hexstr(benchmark: BenchmarkFixture, value: str) -> None:
    benchmark(_batch, 10, faster_eth_utils.humanize_hexstr, value)

@pytest.mark.benchmark(group="humanize_hash")
@pytest.mark.parametrize("value", humanize_bytes_cases, ids=humanize_bytes_ids)
def test_humanize_hash(benchmark: BenchmarkFixture, value: bytes) -> None:
    benchmark(_batch, 10, eth_utils.humanize_hash, value)

@pytest.mark.benchmark(group="humanize_hash")
@pytest.mark.parametrize("value", humanize_bytes_cases, ids=humanize_bytes_ids)
def test_faster_humanize_hash(benchmark: BenchmarkFixture, value: bytes) -> None:
    benchmark(_batch, 10, faster_eth_utils.humanize_hash, value)

@pytest.mark.benchmark(group="humanize_ipfs_uri")
@pytest.mark.parametrize("value", ipfs_cases, ids=ipfs_ids)
def test_humanize_ipfs_uri(benchmark: BenchmarkFixture, value: str) -> None:
    try:
        benchmark(_batch, 10, eth_utils.humanize_ipfs_uri, value)
    except Exception:
        pass

@pytest.mark.benchmark(group="humanize_ipfs_uri")
@pytest.mark.parametrize("value", ipfs_cases, ids=ipfs_ids)
def test_faster_humanize_ipfs_uri(benchmark: BenchmarkFixture, value: str) -> None:
    try:
        benchmark(_batch, 10, faster_eth_utils.humanize_ipfs_uri, value)
    except Exception:
        pass

@pytest.mark.benchmark(group="is_ipfs_uri")
@pytest.mark.parametrize("value", ipfs_cases, ids=ipfs_ids)
def test_is_ipfs_uri(benchmark: BenchmarkFixture, value: str) -> None:
    benchmark(_batch, 10, eth_utils.humanize.is_ipfs_uri, value)

@pytest.mark.benchmark(group="is_ipfs_uri")
@pytest.mark.parametrize("value", ipfs_cases, ids=ipfs_ids)
def test_faster_is_ipfs_uri(benchmark: BenchmarkFixture, value: str) -> None:
    benchmark(_batch, 10, faster_eth_utils.humanize.is_ipfs_uri, value)

@pytest.mark.benchmark(group="humanize_integer_sequence")
@pytest.mark.parametrize("value", humanize_integer_sequence_cases, ids=humanize_integer_sequence_ids)
def test_humanize_integer_sequence(benchmark: BenchmarkFixture, value: List[int]) -> None:
    benchmark(_batch, 10, eth_utils.humanize_integer_sequence, value)

@pytest.mark.benchmark(group="humanize_integer_sequence")
@pytest.mark.parametrize("value", humanize_integer_sequence_cases, ids=humanize_integer_sequence_ids)
def test_faster_humanize_integer_sequence(benchmark: BenchmarkFixture, value: List[int]) -> None:
    benchmark(_batch, 10, faster_eth_utils.humanize_integer_sequence, value)

@pytest.mark.benchmark(group="humanize_wei")
@pytest.mark.parametrize("value", humanize_wei_cases, ids=humanize_wei_ids)
def test_humanize_wei(benchmark: BenchmarkFixture, value: int) -> None:
    benchmark(_batch, 10, eth_utils.humanize_wei, value)

@pytest.mark.benchmark(group="humanize_wei")
@pytest.mark.parametrize("value", humanize_wei_cases, ids=humanize_wei_ids)
def test_faster_humanize_wei(benchmark: BenchmarkFixture, value: int) -> None:
    benchmark(_batch, 10, faster_eth_utils.humanize_wei, value)
