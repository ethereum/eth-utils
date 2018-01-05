# String encodings and numeric representations

import binascii
import codecs

from .types import (
    is_bytes,
    is_string,
)
from .conversions import (
    to_bytes,
    to_text,
)
from .formatting import (
    is_prefixed,
)


def decode_hex(value):
    """
    Returns `value` decoded into a byte string.
    Accepts any string with or without the `0x` prefix.
    """
    if not is_string(value):
        raise TypeError('Value must be an instance of str or unicode')
    decoded = codecs.decode(remove_0x_prefix(value), 'hex')
    return to_bytes(primitive=decoded)


def encode_hex(primitive=None, hexstr=None, text=None):
    """
    Returns any supported value encoded into a hexidecimal representation
    with a `0x` prefix.
    """
    value = to_bytes(primitive, hexstr, text)
    if not is_string(value):
        raise TypeError('Value must be an instance of str or unicode')
    encoded = add_0x_prefix(codecs.encode(value, 'hex'))
    return to_text(primitive=encoded)


def is_0x_prefixed(value):
    return is_prefixed(value, '0x') or is_prefixed(value, '0X')


def remove_0x_prefix(value):
    if is_0x_prefixed(value):
        return value[2:]
    return value


def add_0x_prefix(value):
    if is_0x_prefixed(value):
        return value

    prefix = b'0x' if is_bytes(value) else '0x'
    return prefix + value


def is_hex(value):
    if not is_string(value):
        return False
    elif value.lower() in {b'0x', '0x'}:
        return True

    unprefixed_value = remove_0x_prefix(value)
    if len(unprefixed_value) % 2 != 0:
        value_to_decode = (b'0' if is_bytes(unprefixed_value) else '0') + unprefixed_value
    else:
        value_to_decode = unprefixed_value

    try:
        value_as_bytes = codecs.decode(value_to_decode, 'hex')
    except binascii.Error:
        return False
    except TypeError:
        return False
    else:
        return bool(value_as_bytes)
