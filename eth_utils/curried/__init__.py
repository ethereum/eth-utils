# flake8: noqa
from eth_utils.toolz import curry

from eth_utils import (
    add_0x_prefix,
    apply_formatter_at_index,
    apply_formatter_if,
    apply_formatter_to_array,
    apply_formatters_to_dict,
    apply_formatters_to_sequence,
    apply_key_map,
    apply_one_of_formatters,
    apply_to_return_value,
    big_endian_to_int,
    clamp,
    combine_argument_formatters,
    combomethod,
    decode_hex,
    denoms,
    encode_hex,
    event_abi_to_log_topic,
    event_signature_to_log_topic,
    ExtendedDebugLogger,
    flatten_return,
    from_wei,
    function_abi_to_4byte_selector,
    function_signature_to_4byte_selector,
    HasExtendedDebugLogger,
    HasLogger,
    hexstr_if_str,
    humanize_hash,
    humanize_seconds,
    import_string,
    int_to_big_endian,
    is_0x_prefixed,
    is_address,
    is_binary_address,
    is_boolean,
    is_bytes,
    is_canonical_address,
    is_checksum_address,
    is_checksum_formatted_address,
    is_dict,
    is_hex,
    is_hex_address,
    is_integer,
    is_list,
    is_list_like,
    is_normalized_address,
    is_null,
    is_number,
    is_same_address,
    is_string,
    is_text,
    is_tuple,
    keccak,
    remove_0x_prefix,
    replace_exceptions,
    reversed_return,
    setup_DEBUG2_logging,
    sort_return,
    text_if_str,
    to_bytes,
    to_canonical_address,
    to_checksum_address,
    to_dict,
    to_hex,
    to_int,
    to_list,
    to_normalized_address,
    to_ordered_dict,
    to_set,
    to_text,
    to_tuple,
    to_wei,
    ValidationError,
)

apply_formatter_at_index = curry(apply_formatter_at_index)
apply_formatter_if = curry(apply_formatter_if)
apply_formatter_to_array = curry(apply_formatter_to_array)
apply_formatters_to_dict = curry(apply_formatters_to_dict)
apply_formatters_to_sequence = curry(apply_formatters_to_sequence)
apply_key_map = curry(apply_key_map)
apply_one_of_formatters = curry(apply_one_of_formatters)
from_wei = curry(from_wei)
hexstr_if_str = curry(hexstr_if_str)
is_same_address = curry(is_same_address)
text_if_str = curry(text_if_str)
to_wei = curry(to_wei)
clamp = curry(clamp)

del curry
