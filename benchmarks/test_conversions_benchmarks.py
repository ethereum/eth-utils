# mypy: disable-error-code=misc
# benchmarks/test_conversions_benchmarks.py
from typing import Any, Callable, List, Optional, Union, Tuple, Dict

import eth_utils
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_eth_utils

def _batch(i: int, fn: Callable[..., Any], *args: Any, **kwargs: Any) -> None:
    for _ in range(i):
        fn(*args, **kwargs)

to_hex_kwargs_cases: List[Dict[str, Any]] = [
    {"primitive": b"helloworld"},
    {"primitive": 123456789},
    {"primitive": True},
    {"hexstr": "0x68656c6c6f"},
    {"text": "hello world"},
]
to_hex_ids = [
    "primitive-bytes",
    "primitive-int",
    "primitive-bool",
    "hexstr",
    "text",
]

to_int_kwargs_cases: List[Dict[str, Any]] = [
    {"primitive": 123456789},
    {"primitive": True},
    {"primitive": b"\x07[\xcd\x15"},
    {"hexstr": "0x68656c6c6f"},
    {"text": "12345"},
]
to_int_ids = [
    "primitive-int",
    "primitive-bool",
    "primitive-bytes",
    "hexstr",
    "text",
]

to_bytes_kwargs_cases: List[Dict[str, Any]] = [
    {"primitive": 123456789},
    {"primitive": b"helloworld"},
    {"primitive": True},
    {"hexstr": "0x68656c6c6f"},
    {"text": "hello world"},
]
to_bytes_ids = [
    "primitive-int",
    "primitive-bytes",
    "primitive-bool",
    "hexstr",
    "text",
]

to_text_kwargs_cases: List[Dict[str, Any]] = [
    {"primitive": b"helloworld"},
    {"hexstr": "0x68656c6c6f"},
    {"text": "hello world"},
]
to_text_ids = [
    "primitive-bytes",
    "hexstr",
    "text",
]

text_if_str_cases: List[Tuple[Any, ...]] = [
    ("helloworld",),  # str
    (b"helloworld",), # bytes
]
text_if_str_ids = [
    "str",
    "bytes",
]

hexstr_if_str_cases: List[Tuple[Any, ...]] = [
    ("0x68656c6c6f",),  # hexstr
    (b"helloworld",),   # bytes
    (123456789,),       # int
]
hexstr_if_str_ids = [
    "hexstr",
    "bytes",
    "int",
]

@pytest.mark.benchmark(group="to_hex")
@pytest.mark.parametrize("kwargs", to_hex_kwargs_cases, ids=to_hex_ids)
def test_to_hex(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, eth_utils.to_hex, **kwargs)

@pytest.mark.benchmark(group="to_hex")
@pytest.mark.parametrize("kwargs", to_hex_kwargs_cases, ids=to_hex_ids)
def test_faster_to_hex(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, faster_eth_utils.to_hex, **kwargs)

@pytest.mark.benchmark(group="to_int")
@pytest.mark.parametrize("kwargs", to_int_kwargs_cases, ids=to_int_ids)
def test_to_int(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, eth_utils.to_int, **kwargs)

@pytest.mark.benchmark(group="to_int")
@pytest.mark.parametrize("kwargs", to_int_kwargs_cases, ids=to_int_ids)
def test_faster_to_int(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, faster_eth_utils.to_int, **kwargs)

@pytest.mark.benchmark(group="to_bytes")
@pytest.mark.parametrize("kwargs", to_bytes_kwargs_cases, ids=to_bytes_ids)
def test_to_bytes(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, eth_utils.to_bytes, **kwargs)

@pytest.mark.benchmark(group="to_bytes")
@pytest.mark.parametrize("kwargs", to_bytes_kwargs_cases, ids=to_bytes_ids)
def test_faster_to_bytes(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, faster_eth_utils.to_bytes, **kwargs)

@pytest.mark.benchmark(group="to_text")
@pytest.mark.parametrize("kwargs", to_text_kwargs_cases, ids=to_text_ids)
def test_to_text(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, eth_utils.to_text, **kwargs)

@pytest.mark.benchmark(group="to_text")
@pytest.mark.parametrize("kwargs", to_text_kwargs_cases, ids=to_text_ids)
def test_faster_to_text(benchmark: BenchmarkFixture, kwargs: Dict[str, Any]) -> None:
    benchmark(_batch, 10, faster_eth_utils.to_text, **kwargs)

@pytest.mark.benchmark(group="text_if_str")
@pytest.mark.parametrize("args", text_if_str_cases, ids=text_if_str_ids)
def test_text_if_str(benchmark: BenchmarkFixture, args: Tuple[Any, ...]) -> None:
    benchmark(_batch, 10, eth_utils.text_if_str, eth_utils.to_text, *args)

@pytest.mark.benchmark(group="text_if_str")
@pytest.mark.parametrize("args", text_if_str_cases, ids=text_if_str_ids)
def test_faster_text_if_str(benchmark: BenchmarkFixture, args: Tuple[Any, ...]) -> None:
    benchmark(_batch, 10, faster_eth_utils.text_if_str, faster_eth_utils.to_text, *args)

@pytest.mark.benchmark(group="hexstr_if_str")
@pytest.mark.parametrize("args", hexstr_if_str_cases, ids=hexstr_if_str_ids)
def test_hexstr_if_str(benchmark: BenchmarkFixture, args: Tuple[Any, ...]) -> None:
    benchmark(_batch, 10, eth_utils.hexstr_if_str, eth_utils.to_hex, *args)

@pytest.mark.benchmark(group="hexstr_if_str")
@pytest.mark.parametrize("args", hexstr_if_str_cases, ids=hexstr_if_str_ids)
def test_faster_hexstr_if_str(benchmark: BenchmarkFixture, args: Tuple[Any, ...]) -> None:
    benchmark(_batch, 10, faster_eth_utils.hexstr_if_str, faster_eth_utils.to_hex, *args)
