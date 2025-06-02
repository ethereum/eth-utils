from faster_eth_utils import (
    denoms,
)
from faster_eth_utils.units import (
    units,
)


def test_all_units_are_on_denoms_object():
    for name in units.keys():
        assert hasattr(denoms, name)
