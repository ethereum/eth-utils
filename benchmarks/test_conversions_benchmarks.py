# benchmarks/test_conversions_benchmarks.py
from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="to_hex")
def test_to_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.to_hex, b"helloworld")


@pytest.mark.benchmark(group="to_hex")
def test_faster_to_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.to_hex, b"helloworld")


@pytest.mark.benchmark(group="to_int")
def test_to_int(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.to_int, 123456789)


@pytest.mark.benchmark(group="to_int")
def test_faster_to_int(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.to_int, 123456789)


@pytest.mark.benchmark(group="to_bytes")
def test_to_bytes(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.to_bytes, 123456789)


@pytest.mark.benchmark(group="to_bytes")
def test_faster_to_bytes(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.to_bytes, 123456789)


@pytest.mark.benchmark(group="to_text")
def test_to_text(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 200, eth_utils.to_text, b"helloworld")


@pytest.mark.benchmark(group="to_text")
def test_faster_to_text(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 200, faster_eth_utils.to_text, b"helloworld")


@pytest.mark.benchmark(group="text_if_str")
def test_text_if_str(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.text_if_str, eth_utils.to_text, "helloworld")


@pytest.mark.benchmark(group="text_if_str")
def test_faster_text_if_str(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.text_if_str, faster_eth_utils.to_text, "helloworld")


@pytest.mark.benchmark(group="hexstr_if_str")
def test_hexstr_if_str(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.hexstr_if_str, eth_utils.to_hex, "0x68656c6c6f")


@pytest.mark.benchmark(group="hexstr_if_str")
def test_faster_hexstr_if_str(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.hexstr_if_str, faster_eth_utils.to_hex, "0x68656c6c6f")
