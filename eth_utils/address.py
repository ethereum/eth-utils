from .crypto import keccak
from .hexidecimal import (
    add_0x_prefix,
    decode_hex,
    encode_hex,
    is_hex,
    remove_0x_prefix,
)
from .conversions import (
    to_bytes,
    to_text,
)
from .types import (
    is_string,
    is_bytes,
)
from .formatting import (
    is_prefixed,
)


def is_hex_address(primitive=None, hexstr=None, text=None):
    """
    Checks if a given string in a supported value
    is an address in hexidecimal encoded form.
    """
    value = to_text(primitive=primitive, hexstr=hexstr, text=text)
    if not is_string(value):
        return False
    elif len(value) not in {42, 40}:
        return False
    elif is_hex(value):
        return True
    else:
        return False


def is_binary_address(primitive=None, hexstr=None, text=None):
    """
    Checks if a given string in a supported value
    is an address in raw bytes form.
    """
    value = to_bytes(primitive, hexstr, text)
    if not is_string(value):
        return False
    elif len(value) != 20:
        return False
    else:
        return True


def is_32byte_address(primitive=None, hexstr=None, text=None):
    """
    Checks if a given string in a supported value
    is an address in hexidecimal encoded form padded to 32 bytes.
    """
    value = to_text(primitive, hexstr, text)
    if not is_string(value):
        return False

    if len(value) == 32:
        value_as_hex = encode_hex(text=value)
    elif len(value) in {66, 64}:
        value_as_hex = add_0x_prefix(value)
    else:
        return False

    if is_prefixed(value_as_hex, '0x000000000000000000000000'):
        try:
            return int(value_as_hex, 16) > 0
        except ValueError:
            return False
    else:
        return False


def is_address(primitive=None, hexstr=None, text=None):
    """
    Checks if a given string in a supported value
    is an address in any of the known formats.
    """
    value = to_text(primitive, hexstr, text)
    if is_checksum_formatted_address(text=value):
        return is_checksum_address(text=value)
    elif is_hex_address(text=value):
        return True
    elif is_binary_address(text=value):
        return True
    elif is_32byte_address(text=value):
        return True
    else:
        return False


def _normalize_hex_address(address):
    """
    Returns a hexidecimal address in it's normalized hexidecimal representation.
    """
    value = add_0x_prefix(address.lower())
    return_value = to_text(value) if is_bytes(value) else to_text(text=value)
    return return_value


def _normalize_binary_address(address):
    """
    Returns a raw binary address in it's normalized hexidecimal representation.
    """
    hex_address = encode_hex(text=address)
    return _normalize_hex_address(hex_address)


def _normalize_32byte_address(address):
    if len(address) == 32:
        return _normalize_binary_address(address[-20:])
    elif len(address) in {66, 64}:
        return _normalize_hex_address(address[-40:])
    else:
        raise ValueError("Invalid address.  Must be 32 byte value")


def to_normalized_address(primitive=None, hexstr=None, text=None):
    """
    Converts an address to it's normalized hexidecimal representation.
    """
    address = to_text(primitive, hexstr, text)
    if is_hex_address(text=address):
        return _normalize_hex_address(address)
    elif is_binary_address(text=address):
        return _normalize_binary_address(address)
    elif is_32byte_address(text=address):
        return _normalize_32byte_address(address)

    raise ValueError("Unknown address format {0}".format(address))


def is_normalized_address(primitive=None, hexstr=None, text=None):
    """
    Returns whether the provided value is an address in it's normalized form.
    """
    if not is_address(primitive, hexstr, text):
        return False
    else:
        value = next(item for item in [primitive, hexstr, text] if item is not None)
        return value == to_normalized_address(primitive, hexstr, text)


def to_canonical_address(primitive=None, hexstr=None, text=None):
    """
    Given any supported representation of an address
    returns it's canonical form (20 byte long string).
    """
    byte_address = to_bytes(primitive, hexstr, text)
    return decode_hex(to_normalized_address(byte_address))


def is_canonical_address(primitive=None, hexstr=None, text=None):
    """
    Returns `True` if the `value` is an address in it's canonical form.
    """
    if not is_address(primitive, hexstr, text):
        return False
    else:
        value = next(item for item in [primitive, hexstr, text] if item is not None)
        return value == to_canonical_address(primitive, hexstr, text)


def is_same_address(left, right):
    """
    Checks if both addresses are same or not.
    Accepts explicit arguments in the format:
    {'type': 'address'}
    Where type is one of: 'primitive', 'hexstr', 'text'
    and address is one of: bytestring, hexstring, string
    """
    if not is_address(**left) or not is_address(**right):
        raise ValueError("Both values must be valid addresses")
    else:
        return to_normalized_address(**left) == to_normalized_address(**right)


def to_checksum_address(primitive=None, hexstr=None, text=None):
    """
    Makes a checksum address given a supported format.
    """
    address = to_text(primitive, hexstr, text)
    norm_address = to_normalized_address(text=address)
    address_hash = encode_hex(keccak(remove_0x_prefix(norm_address)))

    checksum_address = add_0x_prefix(''.join(
        (
            norm_address[i].upper()
            if int(address_hash[i], 16) > 7
            else norm_address[i]
        )
        for i in range(2, 42)
    ))
    if is_bytes(checksum_address):
        return to_text(primitive=checksum_address)
    else:
        return to_text(text=checksum_address)


def is_checksum_address(primitive=None, hexstr=None, text=None):
    value = to_text(primitive, hexstr, text)
    if not is_hex_address(text=value):
        return False
    return value == to_checksum_address(text=value)


def is_checksum_formatted_address(primitive=None, hexstr=None, text=None):
    value = to_text(primitive, hexstr, text)
    if not is_hex_address(text=value):
        return False
    elif remove_0x_prefix(value) == remove_0x_prefix(value).lower():
        return False
    elif remove_0x_prefix(value) == remove_0x_prefix(value).upper():
        return False
    else:
        return True
