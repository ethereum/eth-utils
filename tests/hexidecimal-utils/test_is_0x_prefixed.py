import pytest

from eth_utils.hexidecimal import (
    is_0x_prefixed,
)


@pytest.mark.parametrize(
    'value,expected',
    (
        ('', False),
        (b'', False),
        (b'0x', True),
        ('0x', True),
        ('0x12345', True),
        ('12345', False),
        ('0X12345', True),
    ),
)
def test_is_0x_prefixed(value, expected):
    assert is_0x_prefixed(value) is expected
