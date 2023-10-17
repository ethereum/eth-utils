from eth_typing import ChainId
import pytest

from eth_utils import (
    Network,
    ValidationError,
    name_from_chain_id,
    network_from_chain_id,
    short_name_from_chain_id,
)


@pytest.mark.parametrize(
    ("chain_id", "expected_name"),
    [
        (1, "Ethereum Mainnet"),
        (249, None),
        (2, "Expanse Network"),
        (42, "LUKSO Mainnet"),
        (214, None),
    ],
)
def test_network_name_from_chain_id(chain_id, expected_name):
    if expected_name is not None:
        result = name_from_chain_id(chain_id)
        assert result == expected_name
    else:
        with pytest.raises(ValidationError) as ex:
            name_from_chain_id(chain_id)
        assert "chain_id is not recognized" in str(ex.value)


@pytest.mark.parametrize(
    ("chain_id", "expected_short_name"),
    [
        (1, "eth"),
        (249, None),
        (2, "exp"),
        (42, "lukso"),
        (214, None),
    ],
)
def test_short_name_from_chain_id(chain_id, expected_short_name):
    if expected_short_name is not None:
        result = short_name_from_chain_id(chain_id)
        assert isinstance(result, str)
        assert result == expected_short_name
    else:
        with pytest.raises(ValidationError) as ex:
            short_name_from_chain_id(chain_id)
        assert "chain_id is not recognized" in str(ex.value)


@pytest.mark.parametrize(
    ("chain_id", "expected_network"),
    [
        (1, Network(1, "Ethereum Mainnet", "eth", ChainId.ETH)),
        (249, None),
        (2, Network(2, "Expanse Network", "exp", ChainId.EXP)),
        (42, Network(42, "LUKSO Mainnet", "lukso", ChainId.LUKSO)),
        (43, Network(43, "Darwinia Pangolin Testnet", "pangolin", ChainId.PANGOLIN)),
    ],
)
def test_network_from_chain_id(chain_id, expected_network):
    if expected_network is not None:
        result = network_from_chain_id(chain_id)
        assert isinstance(result, Network)
        assert result == expected_network
    else:
        with pytest.raises(ValidationError) as ex:
            network_from_chain_id(chain_id)
        assert "chain_id is not recognized" in str(ex.value)
