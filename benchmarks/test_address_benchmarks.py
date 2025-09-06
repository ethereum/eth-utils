# mypy: disable-error-code=misc
from typing import Any, Callable, List, Tuple

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

# Typical-case address parameter lists
hex_addresses_true: List[str] = [
    "0x52908400098527886E0F7030069857D2E4169EE7",  # valid, checksummed
    "0xde709f2102306220921060314715629080e2fb77",  # valid, lower
]
hex_addresses_false: List[str] = [
    "0x123",  # too short
    "notanaddress",  # not hex
    "0xZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ",  # invalid hex
    "",  # empty
]
hex_addresses_ids = [
    "valid-checksummed",
    "valid-lower",
    "too-short",
    "not-hex",
    "invalid-hex",
    "empty",
]

binary_addresses_true: List[bytes] = [
    bytes.fromhex("52908400098527886E0F7030069857D2E4169EE7"),
    bytes.fromhex("de709f2102306220921060314715629080e2fb77"),
]
binary_addresses_false: List[bytes] = [
    b"",
    b"\x00" * 19,  # too short
    b"\x00" * 21,  # too long
    b"not20byteslong_____",  # not 20 bytes
]
binary_addresses_ids = [
    "valid-checksummed",
    "valid-lower",
    "empty",
    "too-short",
    "too-long",
    "not-20-bytes",
]

address_pairs_true: List[Tuple[str, str]] = [
    ("0x52908400098527886E0F7030069857D2E4169EE7", "0x52908400098527886e0f7030069857d2e4169ee7"),
]
address_pairs_false: List[Tuple[str, str]] = [
    ("0x52908400098527886E0F7030069857D2E4169EE7", "0xde709f2102306220921060314715629080e2fb77"),
]
address_pairs_ids = [
    "same-address",
    "different-address",
]

is_normalized_address_ids = [
    "normalized-true",
    "not-normalized-false",
    "not-an-address-false",
]

is_checksum_address_ids = [
    "valid-checksum-true",
    "not-checksum-false",
    "invalid-false",
]

is_checksum_formatted_address_ids = [
    "mixed-case-true",
    "lower-false",
    "upper-false",
    "invalid-false",
]

@pytest.mark.benchmark(group="is_hex_address")
@pytest.mark.parametrize("address", hex_addresses_true + hex_addresses_false, ids=hex_addresses_ids)
def test_is_hex_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 100, eth_utils.is_hex_address, address)

@pytest.mark.benchmark(group="is_hex_address")
@pytest.mark.parametrize("address", hex_addresses_true + hex_addresses_false, ids=hex_addresses_ids)
def test_faster_is_hex_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_hex_address, address)

@pytest.mark.benchmark(group="is_binary_address")
@pytest.mark.parametrize("address_bytes", binary_addresses_true + binary_addresses_false, ids=binary_addresses_ids)
def test_is_binary_address(benchmark: BenchmarkFixture, address_bytes: bytes) -> None:
    benchmark(_batch, 100, eth_utils.is_binary_address, address_bytes)

@pytest.mark.benchmark(group="is_binary_address")
@pytest.mark.parametrize("address_bytes", binary_addresses_true + binary_addresses_false, ids=binary_addresses_ids)
def test_faster_is_binary_address(benchmark: BenchmarkFixture, address_bytes: bytes) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_binary_address, address_bytes)

@pytest.mark.benchmark(group="is_address")
@pytest.mark.parametrize(
    "address",
    hex_addresses_true + hex_addresses_false + binary_addresses_true + binary_addresses_false,
    ids=hex_addresses_ids + binary_addresses_ids
)
def test_is_address(benchmark: BenchmarkFixture, address: Any) -> None:
    benchmark(_batch, 100, eth_utils.is_address, address)

@pytest.mark.benchmark(group="is_address")
@pytest.mark.parametrize(
    "address",
    hex_addresses_true + hex_addresses_false + binary_addresses_true + binary_addresses_false,
    ids=hex_addresses_ids + binary_addresses_ids
)
def test_faster_is_address(benchmark: BenchmarkFixture, address: Any) -> None:
    benchmark(_batch, 100, faster_eth_utils.is_address, address)

@pytest.mark.benchmark(group="to_normalized_address")
@pytest.mark.parametrize("address", hex_addresses_true, ids=["valid-checksummed", "valid-lower"])
def test_to_normalized_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 50, eth_utils.to_normalized_address, address)

@pytest.mark.benchmark(group="to_normalized_address")
@pytest.mark.parametrize("address", hex_addresses_true, ids=["valid-checksummed", "valid-lower"])
def test_faster_to_normalized_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 50, faster_eth_utils.to_normalized_address, address)

@pytest.mark.benchmark(group="is_normalized_address")
@pytest.mark.parametrize("address", [
    "0x52908400098527886e0f7030069857d2e4169ee7",  # normalized, true
    "0x52908400098527886E0F7030069857D2E4169EE7",  # not normalized, false
    "notanaddress",  # false
], ids=is_normalized_address_ids)
def test_is_normalized_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 50, eth_utils.is_normalized_address, address)

@pytest.mark.benchmark(group="is_normalized_address")
@pytest.mark.parametrize("address", [
    "0x52908400098527886e0f7030069857d2e4169ee7",
    "0x52908400098527886E0F7030069857D2E4169EE7",
    "notanaddress",
], ids=is_normalized_address_ids)
def test_faster_is_normalized_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 50, faster_eth_utils.is_normalized_address, address)

@pytest.mark.benchmark(group="to_canonical_address")
@pytest.mark.parametrize("address", hex_addresses_true, ids=["valid-checksummed", "valid-lower"])
def test_to_canonical_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 50, eth_utils.to_canonical_address, address)

@pytest.mark.benchmark(group="to_canonical_address")
@pytest.mark.parametrize("address", hex_addresses_true, ids=["valid-checksummed", "valid-lower"])
def test_faster_to_canonical_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 50, faster_eth_utils.to_canonical_address, address)

@pytest.mark.benchmark(group="is_canonical_address")
@pytest.mark.parametrize("address_bytes", binary_addresses_true + binary_addresses_false, ids=binary_addresses_ids)
def test_is_canonical_address(benchmark: BenchmarkFixture, address_bytes: bytes) -> None:
    benchmark(_batch, 50, eth_utils.is_canonical_address, address_bytes)

@pytest.mark.benchmark(group="is_canonical_address")
@pytest.mark.parametrize("address_bytes", binary_addresses_true + binary_addresses_false, ids=binary_addresses_ids)
def test_faster_is_canonical_address(benchmark: BenchmarkFixture, address_bytes: bytes) -> None:
    benchmark(_batch, 50, faster_eth_utils.is_canonical_address, address_bytes)

@pytest.mark.benchmark(group="is_same_address")
@pytest.mark.parametrize("address1,address2", address_pairs_true + address_pairs_false, ids=address_pairs_ids)
def test_is_same_address(benchmark: BenchmarkFixture, address1: str, address2: str) -> None:
    benchmark(_batch, 10, eth_utils.is_same_address, address1, address2)

@pytest.mark.benchmark(group="is_same_address")
@pytest.mark.parametrize("address1,address2", address_pairs_true + address_pairs_false, ids=address_pairs_ids)
def test_faster_is_same_address(benchmark: BenchmarkFixture, address1: str, address2: str) -> None:
    benchmark(_batch, 10, faster_eth_utils.is_same_address, address1, address2)

@pytest.mark.benchmark(group="to_checksum_address")
@pytest.mark.parametrize("address", hex_addresses_true, ids=["valid-checksummed", "valid-lower"])
def test_to_checksum_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 10, eth_utils.to_checksum_address, address.lower())

@pytest.mark.benchmark(group="to_checksum_address")
@pytest.mark.parametrize("address", hex_addresses_true, ids=["valid-checksummed", "valid-lower"])
def test_faster_to_checksum_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 10, faster_eth_utils.to_checksum_address, address.lower())

@pytest.mark.benchmark(group="is_checksum_address")
@pytest.mark.parametrize("address", [
    "0x52908400098527886E0F7030069857D2E4169EE7",  # valid checksum, true
    "0xde709f2102306220921060314715629080e2fb77",  # not checksum, false
    "0x123",  # invalid, false
], ids=is_checksum_address_ids)
def test_is_checksum_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 10, eth_utils.is_checksum_address, address)

@pytest.mark.benchmark(group="is_checksum_address")
@pytest.mark.parametrize("address", [
    "0x52908400098527886E0F7030069857D2E4169EE7",
    "0xde709f2102306220921060314715629080e2fb77",
    "0x123",
], ids=is_checksum_address_ids)
def test_faster_is_checksum_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 10, faster_eth_utils.is_checksum_address, address)

@pytest.mark.benchmark(group="is_checksum_formatted_address")
@pytest.mark.parametrize("address", [
    "0x52908400098527886E0F7030069857D2E4169EE7",  # mixed case, true
    "0xde709f2102306220921060314715629080e2fb77",  # lower, false
    "0x52908400098527886E0F7030069857D2E4169EE7".upper(),  # upper, false
    "0x123",  # invalid, false
], ids=is_checksum_formatted_address_ids)
def test_is_checksum_formatted_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 50, eth_utils.is_checksum_formatted_address, address)

@pytest.mark.benchmark(group="is_checksum_formatted_address")
@pytest.mark.parametrize("address", [
    "0x52908400098527886E0F7030069857D2E4169EE7",
    "0xde709f2102306220921060314715629080e2fb77",
    "0x52908400098527886E0F7030069857D2E4169EE7".upper(),
    "0x123",
], ids=is_checksum_formatted_address_ids)
def test_faster_is_checksum_formatted_address(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(_batch, 50, faster_eth_utils.is_checksum_formatted_address, address)
