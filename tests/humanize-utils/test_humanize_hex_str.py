import pytest

from eth_utils import humanize_hex_str


@pytest.mark.parametrize(
    "value,expected",
    (
        ("000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f", "0001..1e1f"),
        ("30405060", "3040..5060"),
        ("30060", "30060"),
    )
)
def test_humanize_bytes(value, expected):
    assert humanize_hex_str(value) == expected
