from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import network as fe_network
from eth_utils import network as e_network

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="initialize_network_objects")
def test_initialize_network_objects(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, e_network.initialize_network_objects)

@pytest.mark.benchmark(group="initialize_network_objects")
def test_faster_initialize_network_objects(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, fe_network.initialize_network_objects)

@pytest.mark.benchmark(group="network_from_chain_id")
def test_network_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_network.network_from_chain_id, 1)

@pytest.mark.benchmark(group="network_from_chain_id")
def test_faster_network_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_network.network_from_chain_id, 1)

@pytest.mark.benchmark(group="name_from_chain_id")
def test_name_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_network.name_from_chain_id, 1)

@pytest.mark.benchmark(group="name_from_chain_id")
def test_faster_name_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_network.name_from_chain_id, 1)

@pytest.mark.benchmark(group="short_name_from_chain_id")
def test_short_name_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_network.short_name_from_chain_id, 1)

@pytest.mark.benchmark(group="short_name_from_chain_id")
def test_faster_short_name_from_chain_id(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_network.short_name_from_chain_id, 1)
