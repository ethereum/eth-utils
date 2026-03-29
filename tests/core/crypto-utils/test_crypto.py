import pytest

from eth_hash.auto import (
    keccak as raw_keccak,
)

import eth_utils.crypto as crypto_utils


@pytest.mark.parametrize(
    "kwargs,expected_payload",
    (
        ({"primitive": b"\x12\x34"}, b"\x12\x34"),
        ({"primitive": bytearray(b"\x12\x34")}, b"\x12\x34"),
        ({"primitive": memoryview(b"\x12\x34")}, b"\x12\x34"),
        ({"hexstr": "0x1234"}, b"\x12\x34"),
        ({"text": "ethereum"}, b"ethereum"),
    ),
)
def test_keccak_matches_backend_for_supported_inputs(kwargs, expected_payload):
    assert crypto_utils.keccak(**kwargs) == bytes(raw_keccak(expected_payload))


def test_keccak_bytes_input_skips_to_bytes_conversion(monkeypatch):
    def fail_if_called(*args, **kwargs):
        raise AssertionError("to_bytes should not be called for raw bytes input")

    monkeypatch.setattr(crypto_utils, "to_bytes", fail_if_called)

    payload = b"\xde\xad\xbe\xef"
    assert crypto_utils.keccak(payload) == bytes(raw_keccak(payload))


def test_keccak_still_validates_multiple_input_sources():
    with pytest.raises(
        TypeError, match="Exactly one of the passed values can be specified"
    ):
        crypto_utils.keccak(b"\x12\x34", hexstr="0x1234")
