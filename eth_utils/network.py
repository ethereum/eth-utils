from dataclasses import dataclass

import requests
from eth_typing import ChainId

from eth_utils import ValidationError


def load_networks_from_url(url: str = "https://chainid.network/chains_mini.json"):
    response = requests.get(url)
    if response.status_code == 200:
        data = response.json()
        return data
    else:
        raise Exception(f"Failed to fetch data from {url}")


def initialize_network_objects(network_data: list):
    networks_obj = []
    for entry in network_data:
        try:
            network = Network(
                chain_id=entry['chainId'],
                name=entry['name'],
                shortName=entry['shortName'],
                symbol=ChainId(entry['chainId'])
            )
            networks_obj.append(network)
        except ValueError:
            pass
    return networks_obj


@dataclass
class Network:
    chain_id: int
    name: str
    shortName: str
    symbol: ChainId


networks = initialize_network_objects(load_networks_from_url())

network_names_by_id = {network.chain_id: network for network in networks}
network_names = {network.chain_id: network.name for network in networks}
network_short_names = {network.chain_id: network.shortName for network in networks}


def network_from_chain_id(chain_id: int) -> Network:
    try:
        return network_names_by_id[chain_id]
    except KeyError:
        raise ValidationError(f"Chain_id is not recognized: {chain_id}")


def name_from_chain_id(chain_id: int) -> str:
    try:
        return network_names[chain_id]
    except KeyError:
        raise ValidationError(f"Chain_id is not recognized: {chain_id}")


def short_name_from_chain_id(chain_id: int) -> str:
    try:
        return network_short_names[chain_id]
    except KeyError:
        raise ValidationError(f"Chain_id is not recognized: {chain_id}")
