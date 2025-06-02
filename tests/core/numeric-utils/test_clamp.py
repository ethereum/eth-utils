import pytest

from faster_eth_utils.numeric import (
    clamp,
)


@pytest.mark.parametrize(
    "lower_bound,upper_bound,value,expected",
    ((5, 7, 4, 5), (5, 7, 5, 5), (5, 7, 6, 6), (5, 7, 7, 7), (5, 7, 8, 7)),
)
def test_numeric_clamp_utility(lower_bound, upper_bound, value, expected):
    result = clamp(lower_bound, upper_bound, value)
    assert result == expected
