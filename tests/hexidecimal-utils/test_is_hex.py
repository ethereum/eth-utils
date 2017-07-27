from __future__ import unicode_literals

import pytest

from eth_utils import (
    is_hex,
)


@pytest.mark.parametrize(
    'value,expected',
    (
        (b'', False),  # empty string
        ('', False),  # empty string
        (b'0x', False),  # empty string
        ('0x', False),  # empty string
        (b'0X', False),  # empty string
        ('0X', False),  # empty string
        ('abcdef1234567890', True),
        (b'abcdef1234567890', True),
        ('ABCDEF1234567890', True),
        (b'ABCDEF1234567890', True),
        ('AbCdEf1234567890', True),
        (b'aBcDeF1234567890', True),
        ('12345', False),  # odd length
        (b'12345', False),  # odd length
        ('123456xx', False),  # non-hex character
        (b'123456xx', False),  # non-hex character
    ),
)
def test_is_hex(value, expected):
    actual = is_hex(value)
    assert actual is expected
