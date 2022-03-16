import pytest

from eth_utils import (
    humanize_hex_str,
)


@pytest.mark.parametrize(
    "value,expected",
    (
        (
            "0x000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f",
            "0x00..1e1f",
        ),
        (
            "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f",
            "0001..1e1f",
        ),
        ("0x30405060", "0x30..5060"),
        ("0x304050", "0x304050"),
        ("30060", "30060"),
        ("0x30060", "0x30060"),
    ),
)
def test_humanize_bytes(value, expected):
    assert humanize_hex_str(value) == expected
