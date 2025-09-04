from typing import Any, Callable

import eth_utils
import eth_utils.network
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils
import faster_eth_utils.network


def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)


@pytest.mark.benchmark(group="initialize_network_objects")
def test_initialize_network_objects(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, eth_utils.network.initialize_network_objects)


@pytest.mark.benchmark(group="initialize_network_objects")
def test_faster_initialize_network_objects(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, faster_eth_utils.network.initialize_network_objects)


@pytest.mark.benchmark(group="network_from_chain_id")
def test_network_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.network_from_chain_id, 1)


@pytest.mark.benchmark(group="network_from_chain_id")
def test_faster_network_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.network_from_chain_id, 1)


@pytest.mark.benchmark(group="name_from_chain_id")
def test_name_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.name_from_chain_id, 1)


@pytest.mark.benchmark(group="name_from_chain_id")
def test_faster_name_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.name_from_chain_id, 1)


@pytest.mark.benchmark(group="short_name_from_chain_id")
def test_short_name_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, eth_utils.short_name_from_chain_id, 1)


@pytest.mark.benchmark(group="short_name_from_chain_id")
def test_faster_short_name_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, faster_eth_utils.short_name_from_chain_id, 1)
