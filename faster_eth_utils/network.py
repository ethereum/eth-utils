from dataclasses import (
    dataclass,
)
import json
import os
import sys
from pathlib import (
    Path,
)
from typing import (
    Final,
    List,
)

from eth_typing import (
    ChainId,
)

from faster_eth_utils import (
    ValidationError,
)


FASTER_ETH_UTILS_FOLDER: Final = Path(sys.modules["faster_eth_utils"].__file__).parent  # type: ignore [arg-type]


@dataclass
class Network:
    chain_id: int
    name: str
    shortName: str
    symbol: ChainId


def initialize_network_objects() -> List[Network]:
    networks_obj = []

    networks_json_path = os.path.abspath(
        os.path.join(str(FASTER_ETH_UTILS_FOLDER), "__json")
    )
    with open(
        os.path.join(networks_json_path, "eth_networks.json"),
        encoding="UTF-8",
    ) as open_file:
        network_data = json.load(open_file)

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
            # Chain does not have a valid ChainId, network files in eth-utils and
            # eth-typing should to be updated. Run `python update_networks.py` in the
            # project root.
            pass

    return networks_obj


networks = initialize_network_objects()

networks_by_id = {network.chain_id: network for network in networks}
network_names_by_id = {network.chain_id: network.name for network in networks}
network_short_names_by_id = {
    network.chain_id: network.shortName for network in networks
}


def network_from_chain_id(chain_id: int) -> Network:
    try:
        return networks_by_id[chain_id]
    except KeyError:
        raise ValidationError(f"chain_id is not recognized: {chain_id}")


def name_from_chain_id(chain_id: int) -> str:
    try:
        return network_names_by_id[chain_id]
    except KeyError:
        raise ValidationError(f"chain_id is not recognized: {chain_id}")


def short_name_from_chain_id(chain_id: int) -> str:
    try:
        return network_short_names_by_id[chain_id]
    except KeyError:
        raise ValidationError(f"chain_id is not recognized: {chain_id}")
