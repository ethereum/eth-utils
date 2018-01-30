import pytest

from eth_utils.formatting import (
    is_prefixed,
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
        ('1', 5, '123', '12311'),
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
        ('1', 5, '123', '11231'),
        ('12345', 4, '0', '12345'),
    )
)
def test_pad_right(value, to_size, pad_with, expected):
    actual = pad_right(value, to_size, pad_with)
    assert actual == expected


@pytest.mark.parametrize(
    'value,prefix,expected',
    (
        (b'test', b't', True),
        (b'test', b'0', False),
        ('test', 't', True),
        ('test', '0', False),
        ('test', b'0', False),
    )
)
def test_is_prefixed(value, prefix, expected):
    assert is_prefixed(value, prefix) is expected
