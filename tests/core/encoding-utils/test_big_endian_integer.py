import pytest

from hypothesis import (
    given,
    strategies as st,
)

from eth_utils.encoding import (
    big_endian_to_int,
    int_to_big_endian,
)


@pytest.mark.parametrize(
    "as_int,as_big_endian",
    (
        (0, b"\x00"),
        (1, b"\x01"),
        (7, b"\x07"),
        (8, b"\x08"),
        (9, b"\x09"),
        (256, b"\x01\x00"),
        (2**256 - 1, b"\xff" * 32),
    ),
)
def test_big_endian_conversions(as_int, as_big_endian):
    as_int_result = big_endian_to_int(as_big_endian)
    assert as_int_result == as_int

    as_big_endian_result = int_to_big_endian(as_int)
    assert as_big_endian_result == as_big_endian


@given(value=st.integers(min_value=0, max_value=2**256 - 1))
def test_big_endian_round_trip_from_int(value):
    result = big_endian_to_int(int_to_big_endian(value))
    assert result == value


@given(
    value=st.binary(min_size=1, max_size=32).map(lambda v: v.lstrip(b"\x00") or b"\x00")
)
def test_big_endian_round_trip_from_big_endian(value):
    result = int_to_big_endian(big_endian_to_int(value))
    assert result == value
