from typing import Any, Callable
import pytest
from pytest_codspeed import BenchmarkFixture
from faster_eth_utils import abi as fe_abi
from eth_utils import abi as e_abi

def _batch(i: int, fn: Callable[..., Any], *inputs: Any) -> None:
    for _ in range(i):
        fn(*inputs)

# Sample ABI and elements for testing
sample_abi = [
    {
        "name": "transfer",
        "type": "function",
        "inputs": [{"name": "to", "type": "address"}, {"name": "value", "type": "uint256"}],
        "outputs": [{"name": "success", "type": "bool"}]
    },
    {
        "name": "Approval",
        "type": "event",
        "inputs": [{"name": "owner", "type": "address"}, {"name": "spender", "type": "address"}, {"name": "value", "type": "uint256"}]
    }
]
abi_element = sample_abi[0]
event_abi = sample_abi[1]

@pytest.mark.benchmark(group="abi_to_signature")
def test_abi_to_signature(benchmark: BenchmarkFixture) -> None:
    abi_element = {"name": "transfer", "type": "function", "inputs": [{"name": "to", "type": "address"}, {"name": "value", "type": "uint256"}]}
    benchmark(_batch, 100, e_abi.abi_to_signature, abi_element)

@pytest.mark.benchmark(group="abi_to_signature")
def test_faster_abi_to_signature(benchmark: BenchmarkFixture) -> None:
    abi_element = {"name": "transfer", "type": "function", "inputs": [{"name": "to", "type": "address"}, {"name": "value", "type": "uint256"}]}
    benchmark(_batch, 100, fe_abi.abi_to_signature, abi_element)

@pytest.mark.benchmark(group="collapse_if_tuple")
def test_collapse_if_tuple(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.collapse_if_tuple, abi_element)

@pytest.mark.benchmark(group="collapse_if_tuple")
def test_faster_collapse_if_tuple(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.collapse_if_tuple, abi_element)

@pytest.mark.benchmark(group="filter_abi_by_name")
def test_filter_abi_by_name(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.filter_abi_by_name, "transfer", sample_abi)

@pytest.mark.benchmark(group="filter_abi_by_name")
def test_faster_filter_abi_by_name(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.filter_abi_by_name, "transfer", sample_abi)

@pytest.mark.benchmark(group="filter_abi_by_type")
def test_filter_abi_by_type(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.filter_abi_by_type, "function", sample_abi)

@pytest.mark.benchmark(group="filter_abi_by_type")
def test_faster_filter_abi_by_type(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.filter_abi_by_type, "function", sample_abi)

@pytest.mark.benchmark(group="get_all_function_abis")
def test_get_all_function_abis(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.get_all_function_abis, sample_abi)

@pytest.mark.benchmark(group="get_all_function_abis")
def test_faster_get_all_function_abis(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.get_all_function_abis, sample_abi)

@pytest.mark.benchmark(group="get_all_event_abis")
def test_get_all_event_abis(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.get_all_event_abis, sample_abi)

@pytest.mark.benchmark(group="get_all_event_abis")
def test_faster_get_all_event_abis(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.get_all_event_abis, sample_abi)

@pytest.mark.benchmark(group="get_normalized_abi_inputs")
def test_get_normalized_abi_inputs(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.get_normalized_abi_inputs, abi_element, 10, 10)

@pytest.mark.benchmark(group="get_normalized_abi_inputs")
def test_faster_get_normalized_abi_inputs(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.get_normalized_abi_inputs, abi_element, 10, 10)

@pytest.mark.benchmark(group="get_aligned_abi_inputs")
def test_get_aligned_abi_inputs(benchmark: BenchmarkFixture) -> None:
    normalized_inputs = fe_abi.get_normalized_abi_inputs(abi_element, 10, 10)
    benchmark(_batch, 100, e_abi.get_aligned_abi_inputs, abi_element, normalized_inputs)

@pytest.mark.benchmark(group="get_aligned_abi_inputs")
def test_faster_get_aligned_abi_inputs(benchmark: BenchmarkFixture) -> None:
    normalized_inputs = fe_abi.get_normalized_abi_inputs(abi_element, 10, 10)
    benchmark(_batch, 100, fe_abi.get_aligned_abi_inputs, abi_element, normalized_inputs)

@pytest.mark.benchmark(group="get_abi_input_names")
def test_get_abi_input_names(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.get_abi_input_names, abi_element)

@pytest.mark.benchmark(group="get_abi_input_names")
def test_faster_get_abi_input_names(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.get_abi_input_names, abi_element)

@pytest.mark.benchmark(group="get_abi_input_types")
def test_get_abi_input_types(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.get_abi_input_types, abi_element)

@pytest.mark.benchmark(group="get_abi_input_types")
def test_faster_get_abi_input_types(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.get_abi_input_types, abi_element)

@pytest.mark.benchmark(group="get_abi_output_names")
def test_get_abi_output_names(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.get_abi_output_names, abi_element)

@pytest.mark.benchmark(group="get_abi_output_names")
def test_faster_get_abi_output_names(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.get_abi_output_names, abi_element)

@pytest.mark.benchmark(group="get_abi_output_types")
def test_get_abi_output_types(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.get_abi_output_types, abi_element)

@pytest.mark.benchmark(group="get_abi_output_types")
def test_faster_get_abi_output_types(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.get_abi_output_types, abi_element)

@pytest.mark.benchmark(group="function_signature_to_4byte_selector")
def test_function_signature_to_4byte_selector(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.function_signature_to_4byte_selector, "transfer(address,uint256)")

@pytest.mark.benchmark(group="function_signature_to_4byte_selector")
def test_faster_function_signature_to_4byte_selector(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.function_signature_to_4byte_selector, "transfer(address,uint256)")

@pytest.mark.benchmark(group="function_abi_to_4byte_selector")
def test_function_abi_to_4byte_selector(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.function_abi_to_4byte_selector, abi_element)

@pytest.mark.benchmark(group="function_abi_to_4byte_selector")
def test_faster_function_abi_to_4byte_selector(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.function_abi_to_4byte_selector, abi_element)

@pytest.mark.benchmark(group="event_signature_to_log_topic")
def test_event_signature_to_log_topic(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.event_signature_to_log_topic, "Approval(address,address,uint256)")

@pytest.mark.benchmark(group="event_signature_to_log_topic")
def test_faster_event_signature_to_log_topic(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.event_signature_to_log_topic, "Approval(address,address,uint256)")

@pytest.mark.benchmark(group="event_abi_to_log_topic")
def test_event_abi_to_log_topic(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, e_abi.event_abi_to_log_topic, event_abi)

@pytest.mark.benchmark(group="event_abi_to_log_topic")
def test_faster_event_abi_to_log_topic(benchmark: BenchmarkFixture) -> None:
    benchmark(_batch, 100, fe_abi.event_abi_to_log_topic, event_abi)
