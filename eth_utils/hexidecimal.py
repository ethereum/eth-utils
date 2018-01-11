# String encodings and numeric representations

import binascii
import codecs
import string

from .types import (
    is_string,
    is_bytes,
)
from .string import (
    coerce_args_to_bytes,
    coerce_return_to_text,
    coerce_return_to_bytes,
    force_obj_to_text,
)
from .formatting import (
    is_prefixed,
)


@coerce_return_to_bytes
def decode_hex(value):
    if not is_string(value):
        raise TypeError('Value must be an instance of str or unicode')
    return codecs.decode(remove_0x_prefix(value), 'hex')


@coerce_args_to_bytes
@coerce_return_to_text
def encode_hex(value):
    if not is_string(value):
        raise TypeError('Value must be an instance of str or unicode')
    return add_0x_prefix(codecs.encode(value, 'hex'))


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

    if any(char not in string.hexdigits for char in force_obj_to_text(value_to_decode)):
        return False

    try:
        value_as_bytes = codecs.decode(value_to_decode, 'hex')
    except binascii.Error:
        return False
    except TypeError:
        return False
    else:
        return bool(value_as_bytes)
