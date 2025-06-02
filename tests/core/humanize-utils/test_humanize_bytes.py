import pytest

from faster_eth_utils import (
    humanize_bytes,
)


@pytest.mark.parametrize(
    "value,expected",
    (
        (bytes(range(32)), "0001..1e1f"),
        (bytes(range(3)), "000102"),
        (bytes(range(5)), "0001020304"),
        (bytes(range(6)), "0001..0405"),
    ),
)
def test_humanize_bytes(value, expected):
    assert humanize_bytes(value) == expected
