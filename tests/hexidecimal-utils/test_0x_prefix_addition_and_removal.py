from __future__ import unicode_literals

import pytest

from eth_utils.hexidecimal import (
    add_0x_prefix,
    remove_0x_prefix,
)


@pytest.mark.parametrize(
    'value,expected',
    (
        ('', '0x'),
        (b'', b'0x'),
        (b'0x', b'0x'),
        ('0x', '0x'),
        ('0x12345', '0x12345'),
        ('12345', '0x12345'),
    ),
)
def test_add_0x_prefix(value, expected):
    actual = add_0x_prefix(value)
    assert actual == expected


@pytest.mark.parametrize(
    'value,expected',
    (
        ('', ''),
        (b'', b''),
        (b'0x', b''),
        ('0x', ''),
        ('0x12345', '12345'),
        ('12345', '12345'),
    ),
)
def test_remove_0x_prefix(value, expected):
    actual = remove_0x_prefix(value)
    assert actual == expected
