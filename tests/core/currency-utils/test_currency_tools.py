import pytest
import decimal

from hypothesis import (
    given,
    strategies as st,
)

from eth_utils.currency import (
    MAX_WEI,
    MIN_WEI,
    from_wei,
    from_wei_decimals,
    to_wei,
    to_wei_decimals,
    units,
)


@given(
    amount_in_wei=st.integers(min_value=MIN_WEI, max_value=MAX_WEI),
    intermediate_unit=st.sampled_from(tuple(units.keys())),
)
def test_conversion_round_trip(amount_in_wei, intermediate_unit):
    intermediate_amount = from_wei(amount_in_wei, intermediate_unit)
    result_amount = to_wei(intermediate_amount, intermediate_unit)
    assert result_amount == amount_in_wei


MAX_ETHER_WHOLE = 115792089237316195423570985008687907853269984665640564039457
MAX_ETHER_DECIMAL_MAX = 584007913129639935
MAX_ETHER_DECIMAL = 999999999999999999


def make_ether_string_value(amount_in_wei):
    s_amount_in_wei = str(amount_in_wei)
    whole_part = s_amount_in_wei[:-18] or "0"
    decimal_part = s_amount_in_wei[-18:]

    s_amount_in_ether = f"{whole_part}.{decimal_part.zfill(18).rstrip('0')}".rstrip(".")
    return s_amount_in_ether


@given(st.integers(min_value=0, max_value=MAX_WEI).map(make_ether_string_value))
def test_conversion_revers_round_trip_trip(amount_in_ether):
    intermediate_amount = to_wei(amount_in_ether, "ether")
    result_amount = from_wei(intermediate_amount, "ether")
    assert decimal.Decimal(result_amount) == decimal.Decimal(str(amount_in_ether))


@pytest.mark.parametrize(
    "value,expected",
    [
        ([1000000000000000000, "wei"], "1000000000000000000"),
        ([1000000000000000000, "kwei"], "1000000000000000"),
        ([1000000000000000000, "mwei"], "1000000000000"),
        ([1000000000000000000, "gwei"], "1000000000"),
        ([1000000000000000000, "szabo"], "1000000"),
        ([1000000000000000000, "finney"], "1000"),
        ([1000000000000000000, "ether"], "1"),
        ([1000000000000000000, "kether"], "0.001"),
        ([1000000000000000000, "grand"], "0.001"),
        ([1000000000000000000, "mether"], "0.000001"),
        ([1000000000000000000, "gether"], "0.000000001"),
        ([1000000000000000000, "tether"], "0.000000000001"),
    ],
)
def test_from_wei(value, expected):
    assert from_wei(*value) == decimal.Decimal(expected)


@pytest.mark.parametrize(
    "value,expected",
    [
        ([1, "wei"], "1"),
        ([1, "kwei"], "1000"),
        ([1, "Kwei"], "1000"),
        ([1, "babbage"], "1000"),
        ([1, "mwei"], "1000000"),
        ([1, "Mwei"], "1000000"),
        ([1, "lovelace"], "1000000"),
        ([1, "gwei"], "1000000000"),
        ([1, "Gwei"], "1000000000"),
        ([1, "shannon"], "1000000000"),
        ([1, "szabo"], "1000000000000"),
        ([1, "finney"], "1000000000000000"),
        ([1, "ether"], "1000000000000000000"),
        ([1, "kether"], "1000000000000000000000"),
        ([1, "grand"], "1000000000000000000000"),
        ([1, "mether"], "1000000000000000000000000"),
        ([1, "gether"], "1000000000000000000000000000"),
        ([1, "tether"], "1000000000000000000000000000000"),
        ([0.05, "ether"], "50000000000000000"),
        ([1.2, "ether"], "1200000000000000000"),
    ],
)
def test_to_wei(value, expected):
    assert to_wei(*value) == decimal.Decimal(expected)


@pytest.mark.parametrize(
    "value,expected",
    [
        ([1000000000000000000, 0], "1000000000000000000"),
        ([1000000000000000000, 1], "100000000000000000"),
        ([1000000000000000000, 3], "1000000000000000"),
        ([1000000000000000000, 6], "1000000000000"),
        ([1000000000000000000, 9], "1000000000"),
        ([1000000000000000000, 12], "1000000"),
        ([1000000000000000000, 15], "1000"),
        ([1000000000000000000, 18], "1"),
        ([1000000000000000000, 21], "0.001"),
        ([1000000000000000000, 24], "0.000001"),
        ([1000000000000000000, 27], "0.000000001"),
        ([1000000000000000000, 30], "0.000000000001"),
    ],
)
def test_from_wei_decimals(value, expected):
    assert from_wei_decimals(*value) == decimal.Decimal(expected)


@pytest.mark.parametrize(
    "value,expected",
    [
        ([1, 0], "1"),
        ([1, 1], "10"),
        ([1, 3], "1000"),
        ([1, 6], "1000000"),
        ([1, 9], "1000000000"),
        ([1, 12], "1000000000000"),
        ([1, 15], "1000000000000000"),
        ([1, 18], "1000000000000000000"),
        ([1, 21], "1000000000000000000000"),
        ([1, 24], "1000000000000000000000000"),
        ([1, 27], "1000000000000000000000000000"),
        ([1, 30], "1000000000000000000000000000000"),
        ([0.05, 18], "50000000000000000"),
        ([1.2, 18], "1200000000000000000"),
    ],
)
def test_to_wei_decimals(value, expected):
    assert to_wei_decimals(*value) == decimal.Decimal(expected)


@pytest.mark.parametrize("value,unit", ((1, "wei1"), (1, "not-a-unit"), (-1, "ether")))
def test_invalid_to_wei_values(value, unit):
    with pytest.raises(ValueError):
        to_wei(value, unit)

    with pytest.raises(ValueError):
        from_wei(value, unit)


@pytest.mark.parametrize(
    "value",
    [
        1,  # 1000000000000000000 wei
        0.1,  # 100000000000000000 wei
        0.01,  # 10000000000000000 wei
        0.001,  # 1000000000000000 wei
        0.00000000000000001,  # 10 wei
        0.000000000000000001,  # 1 wei
        1.234567891234567891,  # 1234567891234567891 wei
        0,  # 0 wei
    ],
)
def test_float_ether(value):
    assert from_wei(to_wei(value, "ether"), "ether") == decimal.Decimal(str(value))


@pytest.mark.parametrize(
    "value",
    [
        0.0000000000000000001,  # 0.1 wei
        0.00000000000000000001,  # 0.01 wei
        0.000000000000000000001,  # 0.001 wei
        0.0000000000000000011,  # 1.1 wei
        0.00000000000000000123456789,  # 1.23456789 wei
    ],
)
def test_invalid_float_ether(value):
    with pytest.raises(AssertionError):
        assert from_wei(to_wei(value, "ether"), "ether") == decimal.Decimal(str(value))
