from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import address as fe_address
from eth_utils import address as e_address

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="is_hex_address")
def test_is_hex_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_address.is_hex_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="is_hex_address")
def test_faster_is_hex_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_address.is_hex_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="is_binary_address")
def test_is_binary_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, e_address.is_binary_address, bytes.fromhex("52908400098527886E0F7030069857D2E4169EE7"))

@pytest.mark.benchmark(group="is_binary_address")
def test_faster_is_binary_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1000, fe_address.is_binary_address, bytes.fromhex("52908400098527886E0F7030069857D2E4169EE7"))

@pytest.mark.benchmark(group="is_address")
def test_is_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_address.is_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="is_address")
def test_faster_is_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_address.is_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="to_normalized_address")
def test_to_normalized_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, e_address.to_normalized_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="to_normalized_address")
def test_faster_to_normalized_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, fe_address.to_normalized_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="is_normalized_address")
def test_is_normalized_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, e_address.is_normalized_address, "0x52908400098527886e0f7030069857d2e4169ee7")

@pytest.mark.benchmark(group="is_normalized_address")
def test_faster_is_normalized_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, fe_address.is_normalized_address, "0x52908400098527886e0f7030069857d2e4169ee7")

@pytest.mark.benchmark(group="to_canonical_address")
def test_to_canonical_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, e_address.to_canonical_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="to_canonical_address")
def test_faster_to_canonical_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, fe_address.to_canonical_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="is_canonical_address")
def test_is_canonical_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, e_address.is_canonical_address, bytes.fromhex("52908400098527886E0F7030069857D2E4169EE7"))

@pytest.mark.benchmark(group="is_canonical_address")
def test_faster_is_canonical_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, fe_address.is_canonical_address, bytes.fromhex("52908400098527886E0F7030069857D2E4169EE7"))

@pytest.mark.benchmark(group="is_same_address")
def test_is_same_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, e_address.is_same_address, "0x52908400098527886E0F7030069857D2E4169EE7", "0x52908400098527886e0f7030069857d2e4169ee7")

@pytest.mark.benchmark(group="is_same_address")
def test_faster_is_same_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, fe_address.is_same_address, "0x52908400098527886E0F7030069857D2E4169EE7", "0x52908400098527886e0f7030069857d2e4169ee7")

@pytest.mark.benchmark(group="to_checksum_address")
def test_to_checksum_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, e_address.to_checksum_address, "0x52908400098527886e0f7030069857d2e4169ee7")

@pytest.mark.benchmark(group="to_checksum_address")
def test_faster_to_checksum_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, fe_address.to_checksum_address, "0x52908400098527886e0f7030069857d2e4169ee7")

@pytest.mark.benchmark(group="is_checksum_address")
def test_is_checksum_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, e_address.is_checksum_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="is_checksum_address")
def test_faster_is_checksum_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, fe_address.is_checksum_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="is_checksum_formatted_address")
def test_is_checksum_formatted_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, e_address.is_checksum_formatted_address, "0x52908400098527886E0F7030069857D2E4169EE7")

@pytest.mark.benchmark(group="is_checksum_formatted_address")
def test_faster_is_checksum_formatted_address(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 50, fe_address.is_checksum_formatted_address, "0x52908400098527886E0F7030069857D2E4169EE7")
