import pkg_resources
import sys
import warnings

from .abi import (  # noqa: F401
    event_abi_to_log_topic,
    event_signature_to_log_topic,
    function_abi_to_4byte_selector,
    function_signature_to_4byte_selector,
)
from .address import (  # noqa: F401
    is_32byte_address,
    is_address,
    is_binary_address,
    is_canonical_address,
    is_checksum_address,
    is_checksum_formatted_address,
    is_hex_address,
    is_normalized_address,
    is_same_address,
    to_canonical_address,
    to_checksum_address,
    to_normalized_address,
)
from .applicators import (  # noqa: F401
    apply_formatter_at_index,
    apply_formatter_if,
    apply_formatter_to_array,
    apply_formatters_to_dict,
    apply_key_map,
    apply_one_of_formatters,
    combine_argument_formatters,
)
from .conversions import (  # noqa: F401
    to_bytes,
    to_hex,
    to_int,
    to_text,
    hexstr_if_str,
    text_if_str,
)
from .crypto import (  # noqa: F401
    keccak,
)
from .currency import (  # noqa: F401
    denoms,
    from_wei,
    to_wei,
)
from .decorators import (  # noqa: F401
    combomethod,
)
from .encoding import (  # noqa: F401
    big_endian_to_int,
    int_to_big_endian,
)
from .formatting import (  # noqa: F401
    pad_left,
    pad_right,
)
from .functional import (  # noqa: F401
    apply_to_return_value,
    flatten_return,
    reversed_return,
    sort_return,
    to_dict,
    to_list,
    to_ordered_dict,
    to_set,
    to_tuple,
)
from .hexidecimal import (  # noqa: F401
    add_0x_prefix,
    decode_hex,
    encode_hex,
    is_0x_prefixed,
    is_hex,
    remove_0x_prefix,
)
from .string import (  # noqa: F401
    coerce_args_to_bytes,
    coerce_args_to_text,
    coerce_return_to_bytes,
    coerce_return_to_text,
    force_bytes,
    force_obj_to_bytes,
    force_obj_to_text,
    force_text,
)
from .types import (  # noqa: F401
    is_boolean,
    is_bytes,
    is_dict,
    is_integer,
    is_list_like,
    is_null,
    is_number,
    is_string,
    is_text,
)


if sys.version_info.major < 3:
    warnings.simplefilter('always', DeprecationWarning)
    warnings.warn(DeprecationWarning(
        "The `eth-utils` library has dropped support for Python 2. Upgrade to Python 3."
    ))
    warnings.resetwarnings()


__version__ = pkg_resources.get_distribution("eth-utils").version
