import pytest

from faster_eth_utils import (
    is_hexstr,
)


@pytest.mark.parametrize(
    "value,expected",
    (
        ("", False),  # empty string
        ("0x", True),  # empty string
        ("0X", True),  # empty string
        ("abcdef1234567890", True),
        ("ABCDEF1234567890", True),
        ("AbCdEf1234567890", True),
        ("0xabcdef1234567890", True),
        ("0xABCDEF1234567890", True),
        ("0xAbCdEf1234567890", True),
        ("12345", True),  # odd length
        ("0x12345", True),  # odd length
        ("123456xx", False),  # non-hex character
        ("0x123456xx", False),  # non-hex character
        ("0\u0080", False),  # triggers different exceptions in py2 and py3
        (1, False),  # int
        (b"", False),  # bytes
        ({}, False),  # dictionary
        (lambda: None, False),  # lambda function
    ),
)
def test_is_hexstr(value, expected):
    actual = is_hexstr(value)
    assert actual is expected
