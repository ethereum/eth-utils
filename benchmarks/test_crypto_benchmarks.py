from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import crypto as fe_crypto
from eth_utils import crypto as e_crypto

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="keccak")
def test_keccak(benchmark: BenchmarkFixture) -> None:
    data = b"hello world"
    benchmark(_batch, 100, e_crypto.keccak, data)

@pytest.mark.benchmark(group="keccak")
def test_faster_keccak(benchmark: BenchmarkFixture) -> None:
    data = b"hello world"
    benchmark(_batch, 100, fe_crypto.keccak, data)
