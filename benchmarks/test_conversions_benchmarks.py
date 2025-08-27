# benchmarks/test_conversions_benchmarks.py
from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import conversions as fe_conv
from eth_utils import conversions as e_conv

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="to_hex")
def test_to_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_conv.to_hex, b"helloworld")

@pytest.mark.benchmark(group="to_hex")
def test_faster_to_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_conv.to_hex, b"helloworld")

@pytest.mark.benchmark(group="to_int")
def test_to_int(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_conv.to_int, 123456789)

@pytest.mark.benchmark(group="to_int")
def test_faster_to_int(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_conv.to_int, 123456789)

@pytest.mark.benchmark(group="to_bytes")
def test_to_bytes(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_conv.to_bytes, 123456789)

@pytest.mark.benchmark(group="to_bytes")
def test_faster_to_bytes(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_conv.to_bytes, 123456789)

@pytest.mark.benchmark(group="to_text")
def test_to_text(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 200, e_conv.to_text, b"helloworld")

@pytest.mark.benchmark(group="to_text")
def test_faster_to_text(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 200, fe_conv.to_text, b"helloworld")

@pytest.mark.benchmark(group="text_if_str")
def test_text_if_str(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_conv.text_if_str, e_conv.to_text, "helloworld")

@pytest.mark.benchmark(group="text_if_str")
def test_faster_text_if_str(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_conv.text_if_str, fe_conv.to_text, "helloworld")

@pytest.mark.benchmark(group="hexstr_if_str")
def test_hexstr_if_str(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_conv.hexstr_if_str, e_conv.to_hex, "0x68656c6c6f")

@pytest.mark.benchmark(group="hexstr_if_str")
def test_faster_hexstr_if_str(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_conv.hexstr_if_str, fe_conv.to_hex, "0x68656c6c6f")
