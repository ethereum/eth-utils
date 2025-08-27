from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import abi as fe_abi
from eth_utils import abi as e_abi

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="abi_to_signature")
def test_abi_to_signature(benchmark: BenchmarkFixture) -> None:
    abi_element = {"name": "transfer", "type": "function", "inputs": [{"name": "to", "type": "address"}, {"name": "value", "type": "uint256"}]}
    benchmark(_batch, 100, e_abi.abi_to_signature, abi_element)

@pytest.mark.benchmark(group="abi_to_signature")
def test_faster_abi_to_signature(benchmark: BenchmarkFixture) -> None:
    abi_element = {"name": "transfer", "type": "function", "inputs": [{"name": "to", "type": "address"}, {"name": "value", "type": "uint256"}]}
    benchmark(_batch, 100, fe_abi.abi_to_signature, abi_element)
