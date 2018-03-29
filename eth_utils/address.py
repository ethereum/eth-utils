from .crypto import keccak
from .hexadecimal import (
    add_0x_prefix,
    decode_hex,
    encode_hex,
    is_hex,
    remove_0x_prefix,
)
from .conversions import (
    hexstr_if_str,
    to_hex,
)
from .types import (
    is_bytes,
    is_text,
)


def is_hex_address(value):
    """
    Checks if the given string of text type is an address in hexadecimal encoded form.
    """
    if not is_text(value):
        return False
    elif not is_hex(value):
        return False
    else:
        unprefixed = remove_0x_prefix(value)
        return len(unprefixed) == 40


def is_binary_address(value):
    """
    Checks if the given string is an address in raw bytes form.
    """
    if not is_bytes(value):
        return False
    elif len(value) != 20:
        return False
    else:
        return True


def is_address(value):
    """
    Checks if the given string in a supported value
    is an address in any of the known formats.
    """
    if is_checksum_formatted_address(value):
        return is_checksum_address(value)
    elif is_hex_address(value):
        return True
    elif is_binary_address(value):
        return True
    else:
        return False


def to_normalized_address(address):
    """
    Converts an address to it's normalized hexadecimal representation.
    """
    hex_address = hexstr_if_str(to_hex, address).lower()
    if is_address(hex_address):
        return hex_address
    else:
        raise ValueError(
            "Unknown format {}, attempted to normalize to {}".format(address, hex_address)
        )


def is_normalized_address(value):
    """
    Returns whether the provided value is an address in it's normalized form.
    """
    if not is_address(value):
        return False
    else:
        return value == to_normalized_address(value)


def to_canonical_address(address):
    """
    Given any supported representation of an address
    returns it's canonical form (20 byte long string).
    """
    return decode_hex(to_normalized_address(address))


def is_canonical_address(address):
    """
    Returns `True` if the `value` is an address in it's canonical form.
    """
    if not is_bytes(address) or len(address) != 20:
        return False
    return address == to_canonical_address(address)


def is_same_address(left, right):
    """
    Checks if both addresses are same or not.
    """
    if not is_address(left) or not is_address(right):
        raise ValueError("Both values must be valid addresses")
    else:
        return to_normalized_address(left) == to_normalized_address(right)


def to_checksum_address(address):
    """
    Makes a checksum address given a supported format.
    """
    norm_address = to_normalized_address(address)
    address_hash = encode_hex(keccak(text=remove_0x_prefix(norm_address)))

    checksum_address = add_0x_prefix(''.join(
        (
            norm_address[i].upper()
            if int(address_hash[i], 16) > 7
            else norm_address[i]
        )
        for i in range(2, 42)
    ))
    return checksum_address


def is_checksum_address(value):
    if not is_text(value):
        return False

    if not is_hex_address(value):
        return False
    return value == to_checksum_address(value)


def is_checksum_formatted_address(value):
    if not is_text(value):
        return False

    if not is_hex_address(value):
        return False
    elif remove_0x_prefix(value) == remove_0x_prefix(value).lower():
        return False
    elif remove_0x_prefix(value) == remove_0x_prefix(value).upper():
        return False
    else:
        return True
