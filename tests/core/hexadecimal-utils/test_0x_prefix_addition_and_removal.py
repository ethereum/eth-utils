import pytest

from eth_utils.hexadecimal import (
    add_0x_prefix,
    remove_0x_prefix,
)


@pytest.mark.parametrize(
    "value,expected",
    (
        ("", "0x"),
        ("0x", "0x"),
        ("0x12345", "0x12345"),
        ("0X12345", "0X12345"),
        ("12345", "0x12345"),
    ),
)
def test_add_0x_prefix(value, expected):
    actual = add_0x_prefix(value)
    assert actual == expected


@pytest.mark.parametrize("value", (b"", 123, {}, lambda: None))
def test_add_0x_prefix_rejects_non_text_types(value):
    with pytest.raises(TypeError):
        add_0x_prefix(value)


@pytest.mark.parametrize(
    "value,expected",
    (
        ("", ""),
        ("0x", ""),
        ("0x12345", "12345"),
        ("0X12345", "12345"),
        ("12345", "12345"),
    ),
)
def test_remove_0x_prefix(value, expected):
    actual = remove_0x_prefix(value)
    assert actual == expected


@pytest.mark.parametrize("value", (b"", 123, {}, lambda: None))
def test_remove_0x_prefix_rejects_non_text_types(value):
    with pytest.raises(TypeError):
        remove_0x_prefix(value)
