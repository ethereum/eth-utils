from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import humanize as fe_humanize
from eth_utils import humanize as e_humanize

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

@pytest.mark.benchmark(group="humanize_seconds")
def test_humanize_seconds(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_humanize.humanize_seconds, 3661)

@pytest.mark.benchmark(group="humanize_seconds")
def test_faster_humanize_seconds(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_humanize.humanize_seconds, 3661)

@pytest.mark.benchmark(group="humanize_bytes")
def test_humanize_bytes(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_humanize.humanize_bytes, b"hello world")

@pytest.mark.benchmark(group="humanize_bytes")
def test_faster_humanize_bytes(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_humanize.humanize_bytes, b"hello world")

@pytest.mark.benchmark(group="humanize_hexstr")
def test_humanize_hexstr(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_humanize.humanize_hexstr, "0x68656c6c6f")

@pytest.mark.benchmark(group="humanize_hexstr")
def test_faster_humanize_hexstr(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_humanize.humanize_hexstr, "0x68656c6c6f")

@pytest.mark.benchmark(group="humanize_hash")
def test_humanize_hash(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_humanize.humanize_hash, b"\x00" * 32)

@pytest.mark.benchmark(group="humanize_hash")
def test_faster_humanize_hash(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_humanize.humanize_hash, b"\x00" * 32)

@pytest.mark.benchmark(group="humanize_ipfs_uri")
def test_humanize_ipfs_uri(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_humanize.humanize_ipfs_uri, "ipfs://QmYwAPJzv5CZsnAzt8auVTL5zL2b8w6Q7rKjz3bgiGkXkP")

@pytest.mark.benchmark(group="humanize_ipfs_uri")
def test_faster_humanize_ipfs_uri(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_humanize.humanize_ipfs_uri, "ipfs://QmYwAPJzv5CZsnAzt8auVTL5zL2b8w6Q7rKjz3bgiGkXkP")

@pytest.mark.benchmark(group="is_ipfs_uri")
def test_is_ipfs_uri(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_humanize.is_ipfs_uri, "ipfs://QmYwAPJzv5CZsnAzt8auVTL5zL2b8w6Q7rKjz3bgiGkXkP")

@pytest.mark.benchmark(group="is_ipfs_uri")
def test_faster_is_ipfs_uri(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_humanize.is_ipfs_uri, "ipfs://QmYwAPJzv5CZsnAzt8auVTL5zL2b8w6Q7rKjz3bgiGkXkP")

@pytest.mark.benchmark(group="humanize_integer_sequence")
def test_humanize_integer_sequence(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_humanize.humanize_integer_sequence, [1, 2, 3, 4, 5])

@pytest.mark.benchmark(group="humanize_integer_sequence")
def test_faster_humanize_integer_sequence(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_humanize.humanize_integer_sequence, [1, 2, 3, 4, 5])

@pytest.mark.benchmark(group="humanize_wei")
def test_humanize_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_humanize.humanize_wei, 1000000000000000000)

@pytest.mark.benchmark(group="humanize_wei")
def test_faster_humanize_wei(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_humanize.humanize_wei, 1000000000000000000)
