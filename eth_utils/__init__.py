from importlib import (
    import_module,
)
from importlib.metadata import (
    version as __version,
)
from typing import (
    Any,
    List,
)

__version__ = __version("eth-utils")

_lazy_imports = {
    # abi
    "abi_to_signature": "abi",
    "collapse_if_tuple": "abi",
    "event_abi_to_log_topic": "abi",
    "event_signature_to_log_topic": "abi",
    "filter_abi_by_name": "abi",
    "filter_abi_by_type": "abi",
    "function_abi_to_4byte_selector": "abi",
    "function_signature_to_4byte_selector": "abi",
    "get_abi_input_names": "abi",
    "get_abi_input_types": "abi",
    "get_abi_output_names": "abi",
    "get_abi_output_types": "abi",
    "get_aligned_abi_inputs": "abi",
    "get_all_event_abis": "abi",
    "get_all_function_abis": "abi",
    "get_normalized_abi_inputs": "abi",
    # address
    "is_address": "address",
    "is_binary_address": "address",
    "is_canonical_address": "address",
    "is_checksum_address": "address",
    "is_checksum_formatted_address": "address",
    "is_hex_address": "address",
    "is_normalized_address": "address",
    "is_same_address": "address",
    "to_canonical_address": "address",
    "to_checksum_address": "address",
    "to_normalized_address": "address",
    # applicators
    "apply_formatter_at_index": "applicators",
    "apply_formatter_if": "applicators",
    "apply_formatter_to_array": "applicators",
    "apply_formatters_to_dict": "applicators",
    "apply_formatters_to_sequence": "applicators",
    "apply_key_map": "applicators",
    "apply_one_of_formatters": "applicators",
    "combine_argument_formatters": "applicators",
    # conversions
    "hexstr_if_str": "conversions",
    "text_if_str": "conversions",
    "to_bytes": "conversions",
    "to_hex": "conversions",
    "to_int": "conversions",
    "to_text": "conversions",
    # crypto
    "keccak": "crypto",
    # currency
    "denoms": "currency",
    "from_wei": "currency",
    "to_wei": "currency",
    # decorators
    "combomethod": "decorators",
    "replace_exceptions": "decorators",
    # encoding
    "big_endian_to_int": "encoding",
    "int_to_big_endian": "encoding",
    # exceptions
    "ValidationError": "exceptions",
    # functional
    "apply_to_return_value": "functional",
    "flatten_return": "functional",
    "reversed_return": "functional",
    "sort_return": "functional",
    "to_dict": "functional",
    "to_list": "functional",
    "to_ordered_dict": "functional",
    "to_set": "functional",
    "to_tuple": "functional",
    # hexadecimal
    "add_0x_prefix": "hexadecimal",
    "decode_hex": "hexadecimal",
    "encode_hex": "hexadecimal",
    "is_0x_prefixed": "hexadecimal",
    "is_hex": "hexadecimal",
    "is_hexstr": "hexadecimal",
    "remove_0x_prefix": "hexadecimal",
    # humanize
    "humanize_bytes": "humanize",
    "humanize_hash": "humanize",
    "humanize_hexstr": "humanize",
    "humanize_integer_sequence": "humanize",
    "humanize_ipfs_uri": "humanize",
    "humanize_seconds": "humanize",
    "humanize_wei": "humanize",
    # logging
    "DEBUG2_LEVEL_NUM": "logging",
    "ExtendedDebugLogger": "logging",
    "HasExtendedDebugLogger": "logging",
    "HasExtendedDebugLoggerMeta": "logging",
    "HasLogger": "logging",
    "HasLoggerMeta": "logging",
    "get_extended_debug_logger": "logging",
    "get_logger": "logging",
    "setup_DEBUG2_logging": "logging",
    # module_loading
    "import_string": "module_loading",
    # network
    "Network": "network",
    "name_from_chain_id": "network",
    "network_from_chain_id": "network",
    "short_name_from_chain_id": "network",
    # numeric
    "clamp": "numeric",
    # types
    "is_boolean": "types",
    "is_bytes": "types",
    "is_dict": "types",
    "is_integer": "types",
    "is_list": "types",
    "is_list_like": "types",
    "is_null": "types",
    "is_number": "types",
    "is_string": "types",
    "is_text": "types",
    "is_tuple": "types",
}


def __getattr__(name: str) -> Any:
    if name in _lazy_imports:
        module_name = _lazy_imports[name]
        module = import_module(f".{module_name}", package=__name__)
        value = getattr(module, name)
        globals()[name] = value  # Cache the imported function in globals
        return value
    elif name in globals():
        return globals()[name]
    raise AttributeError(f"module {__name__} has no attribute {name}")


def __dir__() -> List[str]:
    return list(_lazy_imports.keys()) + list(globals().keys())
