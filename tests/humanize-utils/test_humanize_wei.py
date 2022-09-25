import pytest

from eth_utils import humanize_wei, denoms


@pytest.mark.parametrize(
    "value,expected",
    (
        (1, "1 wei"),
        (denoms.gwei, "1 gwei"),
        (denoms.ether, "1 ether"),
        (891, "891 wei"),
        (987654, "987654 wei"),
        (9876543, "0.009876543 gwei"),
        (100 * denoms.finney, "0.1 ether"),
        (denoms.finney, "0.001 ether"),
        (denoms.finney - 1, "999999.999999999 gwei"),
    ),
)
def test_humanize_wei(value, expected):
    assert humanize_wei(value) == expected
