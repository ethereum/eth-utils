import pytest

from eth_utils.types import (
    is_boolean,
    is_dict,
    is_integer,
    is_list_like,
    is_string,
)


@pytest.mark.parametrize(
    "value,expected",
    [
        (3, True),
        (None, False),
        ("3", False),
        ("0x3", False),
        (True, False),
        (False, False),
    ],
)
def test_is_integer(value, expected):
    assert is_integer(value) == expected


@pytest.mark.parametrize(
    "value,expected",
    [
        ("3", True),
        (b"3", True),
        (b"", True),
        ("", True),
        (None, False),
        (3, False),
        ({}, False),
    ],
)
def test_is_string(value, expected):
    assert is_string(value) == expected


@pytest.mark.parametrize(
    "value,expected",
    [
        (lambda: None, False),
        (3, False),
        (None, False),
        ("3", False),
        ("0x3", False),
        ({}, True),
        ({"test": 3}, True),
    ],
)
def test_is_dict(value, expected):
    assert is_dict(value) == expected


@pytest.mark.parametrize(
    "value,expected",
    [
        (lambda: None, False),
        (3, False),
        (None, False),
        ("3", False),
        ("0x3", False),
        (True, True),
        (False, True),
    ],
)
def test_is_boolean(value, expected):
    assert is_boolean(value) == expected


@pytest.mark.parametrize(
    "value,expected",
    [
        (lambda: None, False),
        (3, False),
        (None, False),
        ("3", False),
        ("0x3", False),
        ([], True),
        ([3], True),
        ([3, 3], True),
        ([None], True),
        ([tuple()], True),
        ([(1, 2)], True),
        (tuple(), True),
        ((3,), True),
        ((3, 3), True),
        ((None,), True),
        ((tuple(),), True),
        (((1, 2),), True),
    ],
)
def test_is_list_like(value, expected):
    assert is_list_like(value) == expected
