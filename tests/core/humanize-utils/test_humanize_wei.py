import pytest

from faster_eth_utils import (
    denoms,
    humanize_wei,
)


@pytest.mark.parametrize(
    "value,expected",
    (
        (1, "1 wei"),
        (denoms.wei, "1 wei"),
        (denoms.kwei, "1000 wei"),
        (denoms.babbage, "1000 wei"),
        (denoms.femtoether, "1000 wei"),
        (denoms.mwei, "0.001 gwei"),
        (denoms.lovelace, "0.001 gwei"),
        (denoms.picoether, "0.001 gwei"),
        (denoms.gwei, "1 gwei"),
        (denoms.shannon, "1 gwei"),
        (denoms.nanoether, "1 gwei"),
        (denoms.nano, "1 gwei"),
        (denoms.szabo, "1000 gwei"),
        (denoms.microether, "1000 gwei"),
        (denoms.micro, "1000 gwei"),
        (denoms.finney, "0.001 ether"),
        (denoms.milliether, "0.001 ether"),
        (denoms.milli, "0.001 ether"),
        (denoms.ether, "1 ether"),
        (denoms.kether, "1000 ether"),
        (denoms.grand, "1000 ether"),
        (denoms.mether, "1000000 ether"),
        (denoms.gether, "1000000000 ether"),
        (denoms.tether, "1000000000000 ether"),
        (891, "891 wei"),
        (987654, "987654 wei"),
        (9876543, "0.009876543 gwei"),
        (100 * denoms.finney, "0.1 ether"),
        (denoms.finney - 1, "999999.999999999 gwei"),
        (denoms.finney + 1, "0.001000000000000001 ether"),
        (0, "0 wei"),
    ),
)
def test_humanize_wei(value, expected):
    assert humanize_wei(value) == expected


def test_humanize_error_signed_int():
    with pytest.raises(ValueError):
        humanize_wei(-1)


def test_humanize_error_string():
    with pytest.raises(TypeError):
        humanize_wei("hey")
