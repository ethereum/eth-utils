import pytest

from eth_typing import (
    ChainId,
)

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
        (2, "Expanse Network"),
        (42, "LUKSO Mainnet"),
    ],
)
def test_network_name_from_chain_id(chain_id, expected_name):
    result = name_from_chain_id(chain_id)
    assert result == expected_name


@pytest.mark.parametrize(
    ("chain_id", "expected_short_name"),
    [
        (1, "eth"),
        (2, "exp"),
        (42, "lukso"),
    ],
)
def test_short_name_from_chain_id(chain_id, expected_short_name):
    result = short_name_from_chain_id(chain_id)
    assert isinstance(result, str)
    assert result == expected_short_name


@pytest.mark.parametrize(
    ("chain_id", "expected_network"),
    [
        (1, Network(1, "Ethereum Mainnet", "eth", ChainId.ETH)),
        (2, Network(2, "Expanse Network", "exp", ChainId.EXP)),
        (42, Network(42, "LUKSO Mainnet", "lukso", ChainId.LUKSO)),
        (43, Network(43, "Darwinia Pangolin Testnet", "pangolin", ChainId.PANGOLIN)),
    ],
)
def test_network_from_chain_id(chain_id, expected_network):
    result = network_from_chain_id(chain_id)
    assert isinstance(result, Network)
    assert result == expected_network


@pytest.mark.parametrize("invalid_chain_id", (222**222, 333**333, 444**444))
def test_from_chain_id_utility_methods_with_invalid_chain_id(invalid_chain_id):
    error_message = f"chain_id is not recognized: {invalid_chain_id}"

    # test network_from_chain_id
    with pytest.raises(ValidationError, match=error_message):
        network_from_chain_id(invalid_chain_id)

    # test short_name_from_chain_id
    with pytest.raises(ValidationError, match=error_message):
        short_name_from_chain_id(invalid_chain_id)

    # test name_from_chain_id
    with pytest.raises(ValidationError, match=error_message):
        name_from_chain_id(invalid_chain_id)
