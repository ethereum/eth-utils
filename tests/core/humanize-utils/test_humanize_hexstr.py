import pytest

from eth_utils import (
    humanize_hexstr,
)


@pytest.mark.parametrize(
    "value,expected",
    (
        (
            "0x000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f",
            "0x0001..1e1f",
        ),
        (
            "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f",
            "0001..1e1f",
        ),
        ("0x3040506070", "0x3040..6070"),
        ("0x30405060", "0x30405060"),
        ("30060", "30060"),
        ("0x30060", "0x30060"),
    ),
)
def test_humanize_hexstr(value, expected):
    assert humanize_hexstr(value) == expected
