import pytest

from hypothesis import (
    strategies as st,
    given,
)

from eth_utils import (
    zpad_bytes,
)
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


@given(st.binary(), st.integers(min_value=0))
def test_zpad_bytes(unpadded_val, pad_to_size):
    actual = zpad_bytes(pad_to_size, unpadded_val)
    expected = pad_left(unpadded_val, pad_to_size, b'\0')
    assert actual == expected
