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
        (b'0x', True),  # empty string
        ('0x', True),  # empty string
        (b'0X', True),  # empty string
        ('0X', True),  # empty string
        ('abcdef1234567890', True),
        (b'abcdef1234567890', True),
        ('ABCDEF1234567890', True),
        (b'ABCDEF1234567890', True),
        ('AbCdEf1234567890', True),
        (b'aBcDeF1234567890', True),
        ('0xabcdef1234567890', True),
        (b'0xabcdef1234567890', True),
        ('0xABCDEF1234567890', True),
        (b'0xABCDEF1234567890', True),
        ('0xAbCdEf1234567890', True),
        (b'0xaBcDeF1234567890', True),
        ('12345', True),  # odd length
        (b'12345', True),  # odd length
        ('0x12345', True),  # odd length
        (b'0x12345', True),  # odd length
        ('123456xx', False),  # non-hex character
        (b'123456xx', False),  # non-hex character
        ('0x123456xx', False),  # non-hex character
        (b'0x123456xx', False),  # non-hex character
        ('0\u0080', False),  # triggers different exceptions in py2 and py3
    ),
)
def test_is_hex(value, expected):
    actual = is_hex(value)
    assert actual is expected
