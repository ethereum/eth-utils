from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import currency as fe_currency
from eth_utils import currency as e_currency

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="from_wei")
def test_from_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_currency.from_wei, 1000000000000000000, "ether")

@pytest.mark.benchmark(group="from_wei")
def test_faster_from_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_currency.from_wei, 1000000000000000000, "ether")

@pytest.mark.benchmark(group="to_wei")
def test_to_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_currency.to_wei, 1, "ether")

@pytest.mark.benchmark(group="to_wei")
def test_faster_to_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_currency.to_wei, 1, "ether")

@pytest.mark.benchmark(group="from_wei_decimals")
def test_from_wei_decimals(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_currency.from_wei_decimals, 100000000, 8)

@pytest.mark.benchmark(group="from_wei_decimals")
def test_faster_from_wei_decimals(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_currency.from_wei_decimals, 100000000, 8)

@pytest.mark.benchmark(group="to_wei_decimals")
def test_to_wei_decimals(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_currency.to_wei_decimals, 1, 8)

@pytest.mark.benchmark(group="to_wei_decimals")
def test_faster_to_wei_decimals(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_currency.to_wei_decimals, 1, 8)
