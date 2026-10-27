import pytest
import decimal

from hypothesis import (
    given,
    settings,
    strategies as st,
)

from eth_utils import (
    from_wei,
    to_wei,
    to_wei_decimals,
)


@pytest.mark.parametrize(
    "value",
    [
        0.000936654587712494,
        0.000171138648198097,
        0.000434765250669105,
        0.000905420013006128,
        7.3260721099633e-05,
    ],
)
@pytest.mark.parametrize("unit", ["wei", "gwei", "ether", "tether"])
def test_to_wei_preserves_decimal_float_representation(value, unit):
    expected = to_wei(str(value), unit)
    assert to_wei(value, unit) == expected
    assert to_wei(decimal.Decimal(str(value)), unit) == expected


def test_small_float_ether_round_trip():
    value = 0.000936654587712494
    assert from_wei(to_wei(value, "ether"), "ether") == decimal.Decimal(str(value))


@pytest.mark.parametrize("precision", [6, 28, 80])
@pytest.mark.parametrize(
    "rounding", [decimal.ROUND_DOWN, decimal.ROUND_UP, decimal.ROUND_HALF_EVEN]
)
def test_float_normalization_preserves_decimal_context(precision, rounding):
    value = 0.000936654587712494
    with decimal.localcontext() as context:
        context.prec = precision
        context.rounding = rounding
        assert to_wei(value, "ether") == 936654587712494
        assert context.prec == precision
        assert context.rounding == rounding


@given(
    value=st.floats(min_value=0, max_value=1, allow_nan=False, allow_infinity=False),
    decimals=st.integers(min_value=0, max_value=77),
)
@settings(max_examples=300)
def test_custom_decimals_float_matches_decimal_representation(value, decimals):
    with decimal.localcontext() as context:
        context.prec = 999
        expected = int(decimal.Decimal(str(value)) * decimal.Decimal(10) ** decimals)
    assert to_wei_decimals(value, decimals) == expected
