# mypy: disable-error-code=misc
from typing import Any, Callable, Union

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

# Calculate the largest value that does not overflow for "ether" (10**18)
MAX_UINT256 = 2**256 - 1
ETHER_UNIT = 10**18
MAX_SAFE_ETHER = MAX_UINT256 // ETHER_UNIT

from_wei_cases = [
    (1000000000000000000, "ether"),      # valid
    (1000000000, "gwei"),                # valid
    (0, "ether"),                        # edge case: zero
    (MAX_UINT256, "ether"),              # max input (safe for from_wei)
]
from_wei_ids = [
    "1-ether",
    "1-gwei",
    "zero",
    "max",
]

to_wei_cases = [
    (1, "ether"),                        # valid
    (1.5, "ether"),                      # valid float
    ("2", "ether"),                      # valid str
    (0, "ether"),                        # edge case: zero
    (MAX_SAFE_ETHER, "ether"),           # max safe value
]
to_wei_ids = [
    "1-ether",
    "1.5-ether",
    "2str-ether",
    "zero",
    "max",
]

from_wei_decimals_cases = [
    (100000000, 8),                      # valid
    (0, 8),                              # edge case: zero
    (MAX_UINT256, 8),                    # max input (safe for from_wei_decimals)
]
from_wei_decimals_ids = [
    "100M-8dec",
    "zero",
    "max",
]

# For decimals=8, max safe value is MAX_UINT256 // 10**8
MAX_SAFE_DEC8 = MAX_UINT256 // (10**8)
to_wei_decimals_cases = [
    (1, 8),                              # valid
    (1.5, 8),                            # valid float
    ("2", 8),                            # valid str
    (0, 8),                              # edge case: zero
    (MAX_SAFE_DEC8, 8),                  # max safe value
]
to_wei_decimals_ids = [
    "1-8dec",
    "1.5-8dec",
    "2str-8dec",
    "zero",
    "max",
]

@pytest.mark.benchmark(group="from_wei")
@pytest.mark.parametrize("number,unit", from_wei_cases, ids=from_wei_ids)
def test_from_wei(benchmark: BenchmarkFixture, number: int, unit: str) -> None:
    benchmark(_batch, 10, eth_utils.from_wei, number, unit)

@pytest.mark.benchmark(group="from_wei")
@pytest.mark.parametrize("number,unit", from_wei_cases, ids=from_wei_ids)
def test_faster_from_wei(benchmark: BenchmarkFixture, number: int, unit: str) -> None:
    benchmark(_batch, 10, faster_eth_utils.from_wei, number, unit)

@pytest.mark.benchmark(group="to_wei")
@pytest.mark.parametrize("number,unit", to_wei_cases, ids=to_wei_ids)
def test_to_wei(benchmark: BenchmarkFixture, number: Union[int, float, str], unit: str) -> None:
    benchmark(_batch, 10, eth_utils.to_wei, number, unit)

@pytest.mark.benchmark(group="to_wei")
@pytest.mark.parametrize("number,unit", to_wei_cases, ids=to_wei_ids)
def test_faster_to_wei(benchmark: BenchmarkFixture, number: Union[int, float, str], unit: str) -> None:
    benchmark(_batch, 10, faster_eth_utils.to_wei, number, unit)

@pytest.mark.benchmark(group="from_wei_decimals")
@pytest.mark.parametrize("number,decimals", from_wei_decimals_cases, ids=from_wei_decimals_ids)
def test_from_wei_decimals(benchmark: BenchmarkFixture, number: int, decimals: int) -> None:
    benchmark(_batch, 10, eth_utils.from_wei_decimals, number, decimals)

@pytest.mark.benchmark(group="from_wei_decimals")
@pytest.mark.parametrize("number,decimals", from_wei_decimals_cases, ids=from_wei_decimals_ids)
def test_faster_from_wei_decimals(benchmark: BenchmarkFixture, number: int, decimals: int) -> None:
    benchmark(_batch, 10, faster_eth_utils.from_wei_decimals, number, decimals)

@pytest.mark.benchmark(group="to_wei_decimals")
@pytest.mark.parametrize("number,decimals", to_wei_decimals_cases, ids=to_wei_decimals_ids)
def test_to_wei_decimals(benchmark: BenchmarkFixture, number: Union[int, float, str], decimals: int) -> None:
    benchmark(_batch, 10, eth_utils.to_wei_decimals, number, decimals)

@pytest.mark.benchmark(group="to_wei_decimals")
@pytest.mark.parametrize("number,decimals", to_wei_decimals_cases, ids=to_wei_decimals_ids)
def test_faster_to_wei_decimals(benchmark: BenchmarkFixture, number: Union[int, float, str], decimals: int) -> None:
    benchmark(_batch, 10, faster_eth_utils.to_wei_decimals, number, decimals)
