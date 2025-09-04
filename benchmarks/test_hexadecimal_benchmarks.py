from typing import Any, Callable

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="decode_hex")
def test_decode_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.decode_hex, "0x68656c6c6f776f726c64")


@pytest.mark.benchmark(group="decode_hex")
def test_faster_decode_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.decode_hex, "0x68656c6c6f776f726c64")


@pytest.mark.benchmark(group="encode_hex")
def test_encode_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.encode_hex, b"helloworld")


@pytest.mark.benchmark(group="encode_hex")
def test_faster_encode_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.encode_hex, b"helloworld")


@pytest.mark.benchmark(group="is_0x_prefixed")
def test_is_0x_prefixed(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, eth_utils.is_0x_prefixed, "0x68656c6c6f")


@pytest.mark.benchmark(group="is_0x_prefixed")
def test_faster_is_0x_prefixed(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, faster_eth_utils.is_0x_prefixed, "0x68656c6c6f")


@pytest.mark.benchmark(group="remove_0x_prefix")
def test_remove_0x_prefix(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.remove_0x_prefix, "0x68656c6c6f")


@pytest.mark.benchmark(group="remove_0x_prefix")
def test_faster_remove_0x_prefix(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.remove_0x_prefix, "0x68656c6c6f")


@pytest.mark.benchmark(group="add_0x_prefix")
def test_add_0x_prefix(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.add_0x_prefix, "68656c6c6f")


@pytest.mark.benchmark(group="add_0x_prefix")
def test_faster_add_0x_prefix(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.add_0x_prefix, "68656c6c6f")


@pytest.mark.benchmark(group="is_hexstr")
def test_is_hexstr(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.is_hexstr, "0x68656c6c6f")


@pytest.mark.benchmark(group="is_hexstr")
def test_faster_is_hexstr(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_hexstr, "0x68656c6c6f")


@pytest.mark.benchmark(group="is_hex")
def test_is_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.is_hex, "68656c6c6f")


@pytest.mark.benchmark(group="is_hex")
def test_faster_is_hex(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_hex, "68656c6c6f")
