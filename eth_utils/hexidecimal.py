# String encodings and numeric representations
import codecs

from .types import (
    is_string,
    is_bytes,
)
from .string import (
    coerce_args_to_bytes,
    coerce_return_to_text,
    coerce_return_to_bytes,
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
