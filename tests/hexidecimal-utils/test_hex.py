import pytest

from eth_utils import (
    decode_hex,
    encode_hex,
    is_hex,
)


@pytest.mark.parametrize(
    'value,expected',
    (
        ('123456', b'\x124V'),
        (b'123456', b'\x124V'),
        ('0x123456', b'\x124V'),
        (b'0x123456', b'\x124V'),
    ),
)
def test_decode_hex(value, expected):
    actual = decode_hex(value)
    assert actual == expected


@pytest.mark.parametrize(
    'value,expected',
    (
        ({'primitive': b'foo'}, '0x666f6f'),
        ({'primitive': b'\x01\x02\x03'}, '0x010203'),
        ({'primitive': 0}, '0x00'),
        ({'hexstr': '0x000F'}, '0x000f'),
        ({'hexstr': '666f6f'}, '0x666f6f'),
        ({'text': '\x01\x02\x03'}, '0x010203'),
        ({'text': 'foo'}, '0x666f6f'),
        ({'text': ''}, '0x'),
    )
)
def test_encode_hex(value, expected):
    actual = encode_hex(**value)
    assert actual == expected


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
    ),
)
def test_is_hex(value, expected):
    actual = is_hex(value)
    assert actual is expected
