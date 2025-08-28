from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import debug as fe_debug
from eth_utils import debug as e_debug

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="pip_freeze")
def test_pip_freeze(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1, e_debug.pip_freeze)

@pytest.mark.benchmark(group="pip_freeze")
def test_faster_pip_freeze(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1, fe_debug.pip_freeze)

@pytest.mark.benchmark(group="python_version")
def test_python_version(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, e_debug.python_version)

@pytest.mark.benchmark(group="python_version")
def test_faster_python_version(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, fe_debug.python_version)

@pytest.mark.benchmark(group="platform_info")
def test_platform_info(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, e_debug.platform_info)

@pytest.mark.benchmark(group="platform_info")
def test_faster_platform_info(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 10, fe_debug.platform_info)

@pytest.mark.benchmark(group="get_environment_summary")
def test_get_environment_summary(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1, e_debug.get_environment_summary)

@pytest.mark.benchmark(group="get_environment_summary")
def test_faster_get_environment_summary(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 1, fe_debug.get_environment_summary)
