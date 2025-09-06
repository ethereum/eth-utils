# mypy: disable-error-code=misc
from typing import Any, Callable, List

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

hex_strings: List[str] = [
    "0x68656c6c6f",
    "ab" * 32,
    "0x" + "ff" * 128,
    "12" * 512,
]
hex_strings_ids = [
    "short-0x",
    "long-no-0x",
    "very-long-0x",
    "very-long-no-0x",
]

encode_hex_cases: List[bytes] = [
    b"helloworld",
    b"a" * 32,
    b"b" * 128,
    b"c" * 512,
]
encode_hex_ids = [
    "short-bytes",
    "32-bytes",
    "128-bytes",
    "512-bytes",
]

@pytest.mark.benchmark(group="decode_hex")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_decode_hex(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, eth_utils.decode_hex, hexstr)

@pytest.mark.benchmark(group="decode_hex")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_faster_decode_hex(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, faster_eth_utils.decode_hex, hexstr)

@pytest.mark.benchmark(group="encode_hex")
@pytest.mark.parametrize("data", encode_hex_cases, ids=encode_hex_ids)
def test_encode_hex(benchmark: BenchmarkFixture, data: bytes) -> None:
    benchmark(_batch, 100, eth_utils.encode_hex, data)

@pytest.mark.benchmark(group="encode_hex")
@pytest.mark.parametrize("data", encode_hex_cases, ids=encode_hex_ids)
def test_faster_encode_hex(benchmark: BenchmarkFixture, data: bytes) -> None:
    benchmark(_batch, 100, faster_eth_utils.encode_hex, data)

@pytest.mark.benchmark(group="is_0x_prefixed")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_is_0x_prefixed(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 1000, eth_utils.is_0x_prefixed, hexstr)

@pytest.mark.benchmark(group="is_0x_prefixed")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_faster_is_0x_prefixed(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_0x_prefixed, hexstr)

@pytest.mark.benchmark(group="remove_0x_prefix")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_remove_0x_prefix(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, eth_utils.remove_0x_prefix, hexstr)

@pytest.mark.benchmark(group="remove_0x_prefix")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_faster_remove_0x_prefix(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, faster_eth_utils.remove_0x_prefix, hexstr)

@pytest.mark.benchmark(group="add_0x_prefix")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_add_0x_prefix(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, eth_utils.add_0x_prefix, hexstr)

@pytest.mark.benchmark(group="add_0x_prefix")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_faster_add_0x_prefix(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, faster_eth_utils.add_0x_prefix, hexstr)

@pytest.mark.benchmark(group="is_hexstr")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_is_hexstr(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, eth_utils.is_hexstr, hexstr)

@pytest.mark.benchmark(group="is_hexstr")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_faster_is_hexstr(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_hexstr, hexstr)

@pytest.mark.benchmark(group="is_hex")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_is_hex(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, eth_utils.is_hex, hexstr)

@pytest.mark.benchmark(group="is_hex")
@pytest.mark.parametrize("hexstr", hex_strings, ids=hex_strings_ids)
def test_faster_is_hex(benchmark: BenchmarkFixture, hexstr: str) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_hex, hexstr)
