from dataclasses import dataclass
from typing import Any
import warnings

from eth_typing import ChainId
import requests

from eth_utils import ValidationError


@dataclass
class Network:
    chain_id: int
    name: str
    shortName: str
    symbol: ChainId


def load_networks_from_url(
    url: str = "https://chainid.network/chains_mini.json",
) -> Any:
    response = requests.get(url)
    if response.status_code == 200:
        data = response.json()
        return data
    else:
        raise Exception(f"Failed to fetch data from {url}")


def initialize_network_objects(network_data: Any) -> list[Network]:
    networks_obj = []
    for entry in network_data:
        try:
            network = Network(
                chain_id=entry["chainId"],
                name=entry["name"],
                shortName=entry["shortName"],
                symbol=ChainId(entry["chainId"]),
            )
            networks_obj.append(network)
        except ValueError:
            # Entry does not have a valid ChainId constant in eth-typing
            warnings.warn(
                f"Network {entry['chainId']} with name '{entry['name']}' does not have "
                f"a valid ChainId. eth-typing should be updated with the latest "
                f"networks."
            )
            pass
    return networks_obj


networks = initialize_network_objects(load_networks_from_url())

networks_by_id = {network.chain_id: network for network in networks}
network_names_by_id = {network.chain_id: network.name for network in networks}
network_short_names_by_id = {
    network.chain_id: network.shortName for network in networks
}


def network_from_chain_id(chain_id: int) -> Network:
    try:
        return networks_by_id[chain_id]
    except KeyError:
        raise ValidationError(f"Chain_id is not recognized: {chain_id}")


def name_from_chain_id(chain_id: int) -> str:
    try:
        return network_names_by_id[chain_id]
    except KeyError:
        raise ValidationError(f"Chain_id is not recognized: {chain_id}")


def short_name_from_chain_id(chain_id: int) -> str:
    try:
        return network_short_names_by_id[chain_id]
    except KeyError:
        raise ValidationError(f"Chain_id is not recognized: {chain_id}")
