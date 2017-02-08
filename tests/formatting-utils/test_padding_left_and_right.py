from __future__ import unicode_literals

import pytest

from eth_utils.formatting import (
    pad_left,
    pad_right,
)


@pytest.mark.parametrize(
    'value,to_size,pad_with,expected',
    (
        ('', 10, '0', '0000000000'),
        ('', 10, b'0', '0000000000'),
        (b'', 10, '0', b'0000000000'),
        ('1', 10, '0', '0000000001'),
        ('12345', 4, '0', '12345'),
    )
)
def test_pad_left(value, to_size, pad_with, expected):
    actual = pad_left(value, to_size, pad_with)
    assert actual == expected


@pytest.mark.parametrize(
    'value,to_size,pad_with,expected',
    (
        ('', 10, '0', '0000000000'),
        ('', 10, b'0', '0000000000'),
        (b'', 10, '0', b'0000000000'),
        ('1', 10, '0', '1000000000'),
        ('12345', 4, '0', '12345'),
    )
)
def test_pad_right(value, to_size, pad_with, expected):
    actual = pad_right(value, to_size, pad_with)
    assert actual == expected
