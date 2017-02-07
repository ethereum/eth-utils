from __future__ import absolute_import

import re

from .crypto import keccak
from .encoding import (
    decode_hex,
    encode_hex,
)
from .string import (
    coerce_args_to_text,
    coerce_args_to_bytes,
    coerce_return_to_text,
    coerce_return_to_bytes,
)
from .types import (
    is_string,
)
from .formatting import (
    add_0x_prefix,
    is_prefixed,
)


@coerce_args_to_text
def _is_hex_address(value):
    """
    Checks if the given string is an address in hexidecimal encoded form.
    """
    if not is_string(value):
        return False
    elif len(value) not in {42, 40}:
        return False
    elif re.match(r"^(0x)?[0-9a-fA-F]{40}", value):
        return True
    else:
        return False


@coerce_args_to_bytes
def _is_binary_address(value):
    """
    Checks if the given string is an address in raw bytes form.
    """
    if not is_string(value):
        return False
    elif len(value) != 20:
        return False
    else:
        return True


@coerce_args_to_text
def _is_32byte_address(value):
    """
    Checks if the given string is an address in hexidecimal encoded form padded to 32 bytes.
    """
    if not is_string(value):
        return False

    if len(value) == 32:
        value_as_hex = encode_hex(value)
    elif len(value) in {66, 64}:
        value_as_hex = add_0x_prefix(value)
    else:
        return False

    if is_prefixed(value_as_hex, '0x000000000000000000000000'):
        return True
    else:
        return False


@coerce_args_to_text
def is_address(value):
    """
    Checks if the given string is an address in any of the known formats.
    """
    if _is_hex_address(value):
        return True
    elif _is_binary_address(value):
        return True
    elif _is_32byte_address(value):
        return True
    else:
        return False


@coerce_args_to_text
@coerce_return_to_text
def _normalize_hex_address(address):
    """
    Returns a hexidecimal address in it's normalized hexidecimal representation.
    """
    return add_0x_prefix(address).lower()


@coerce_args_to_text
@coerce_return_to_text
def _normalize_binary_address(address):
    """
    Returns a raw binary address in it's normalized hexidecimal representation.
    """
    hex_address = encode_hex(address)
    return _normalize_hex_address(hex_address)


@coerce_args_to_text
@coerce_return_to_text
def _normalize_32byte_address(address):
    if len(address) == 32:
        return _normalize_binary_address(address[-20:])
    elif len(address) in {66, 64}:
        return _normalize_hex_address(address[-40:])
    else:
        raise ValueError("Invalid address.  Must be 32 byte value")


@coerce_args_to_text
@coerce_return_to_text
def normalize_address(address):
    """
    Converts an address to it's normalized hexidecimal representation.
    """
    if _is_hex_address(address):
        return _normalize_hex_address(address)
    elif _is_binary_address(address):
        return _normalize_binary_address(address)
    elif _is_32byte_address(address):
        return _normalize_32byte_address(address)

    raise ValueError("Unknown address format")


def is_normalized_address(value):
    """
    Returns whether the provided value is an address in it's normalized form.
    """
    if not is_address(value):
        return False
    else:
        return value == normalize_address(value)


@coerce_args_to_bytes
@coerce_return_to_bytes
def canonicalize_address(address):
    """
    """
    return decode_hex(normalize_address(address))


def is_canonical_address(value):
    if not is_address(value):
        return False
    else:
        return value == canonicalize_address(value)


@coerce_args_to_text
def is_same_address(left, right):
    """
    Checks if both addresses are same or not
    """
    if not is_address(left) or not is_address(right):
        raise ValueError("Both values must be valid addresses")
    else:
        return normalize_address(left) == normalize_address(right)


@coerce_args_to_text
@coerce_return_to_text
def to_checksum_address(address):
    """
    Makes a checksum address
    """
    if not is_address(address):
        raise TypeError("Malformed address: {0}".format(address))

    normalized_address = normalize_address(address)
    address_hash = encode_hex(keccak(normalize_address))

    checksum_address = add_0x_prefix(''.join(
        (
            normalized_address[i + 2].upper()
            if int(address_hash[i], 16) > 7
            else normalize_address[i]
        )
        for i in range(40)
    ))
    return checksum_address


@coerce_args_to_text
def is_checksum_address(value):
    if not is_address(value):
        return False
    return value == to_checksum_address(value)
