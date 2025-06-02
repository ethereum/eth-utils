import pytest

from faster_eth_utils.hexadecimal import (
    is_0x_prefixed,
)


@pytest.mark.parametrize(
    "value,expected",
    (("", False), ("0x", True), ("0x12345", True), ("12345", False), ("0X12345", True)),
)
def test_is_0x_prefixed(value, expected):
    assert is_0x_prefixed(value) is expected


@pytest.mark.parametrize("value", (b"", 123, {}, lambda: None))
def test_is_0x_prefixed_rejects_non_text_types(value):
    with pytest.raises(TypeError):
        is_0x_prefixed(value)
