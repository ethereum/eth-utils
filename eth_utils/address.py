import re
from typing import (
    Any,
    Union,
    cast,
)

from eth_typing import (
    Address,
    AnyAddress,
    ChecksumAddress,
    HexAddress,
    HexStr,
)

from .conversions import (
    hexstr_if_str,
    to_hex,
)
from .crypto import (
    keccak,
)
from .hexadecimal import (
    decode_hex,
    encode_hex,
    remove_0x_prefix,
)
from .types import (
    is_bytes,
    is_text,
)

_HEX_ADDRESS_REGEXP = re.compile("(0x)?[0-9a-f]{40}", re.IGNORECASE | re.ASCII)


def is_hex_address(value: Any) -> bool:
    """
    Checks if the given string of text type is an address in hexadecimal encoded form.
    """
    return is_text(value) and _HEX_ADDRESS_REGEXP.fullmatch(value) is not None


def is_binary_address(value: Any) -> bool:
    """
    Checks if the given string is an address in raw bytes form.
    """
    return is_bytes(value) and len(value) == 20


def is_address(value: Any) -> bool:
    """
    Is the given string an address in any of the known formats?
    """
    return is_hex_address(value) or is_binary_address(value)


def to_normalized_address(value: Union[AnyAddress, str, bytes]) -> HexAddress:
    """
    Converts an address to its normalized hexadecimal representation.
    """
    try:
        hex_address = hexstr_if_str(to_hex, value).lower()
    except AttributeError:
        raise TypeError(f"Value must be any string, instead got type {type(value)}")
    if is_address(hex_address):
        return HexAddress(HexStr(hex_address))
    else:
        raise ValueError(
            f"Unknown format {repr(value)}, attempted to normalize to "
            f"{repr(hex_address)}"
        )


def is_normalized_address(value: Any) -> bool:
    """
    Returns whether the provided value is an address in its normalized form.
    """
    if not is_address(value):
        return False

    return cast(bool, value == to_normalized_address(value))


def to_canonical_address(address: Union[AnyAddress, str, bytes]) -> Address:
    """
    Convert a valid address to its canonical form (20-length bytes).
    """
    return Address(decode_hex(to_normalized_address(address)))


def is_canonical_address(address: Any) -> bool:
    """
    Returns `True` if the `value` is an address in its canonical form.
    """
    if not is_bytes(address) or len(address) != 20:
        return False

    return cast(bool, address == to_canonical_address(address))


def is_same_address(
    left: Union[AnyAddress, str, bytes], right: Union[AnyAddress, str, bytes]
) -> bool:
    """
    Checks if both addresses are same or not.
    """
    if not is_address(left) or not is_address(right):
        raise ValueError("Both values must be valid addresses")

    return to_normalized_address(left) == to_normalized_address(right)


def to_checksum_address(value: Union[AnyAddress, str, bytes]) -> ChecksumAddress:
    """
    Makes a checksum address given a supported format.
    """
    address_part = to_normalized_address(value)[2:42]
    hash_hex = encode_hex(keccak(text=address_part))[2:]
    return ChecksumAddress(
        HexAddress(
            HexStr(
                "0x"
                + "".join(
                    addr_char.upper() if int(hash_char, 16) > 7 else addr_char
                    for hash_char, addr_char in zip(hash_hex, address_part)
                )
            )
        )
    )


def is_checksum_address(value: Any) -> bool:
    # is_hex_address already checks if it is_text
    return is_hex_address(value) and bool(value == to_checksum_address(value))


def _is_checksum_formatted(value: Any) -> bool:
    unprefixed_value = remove_0x_prefix(value)
    return (
        not unprefixed_value.islower()
        and not unprefixed_value.isupper()
        and not unprefixed_value.isnumeric()
    )


def is_checksum_formatted_address(value: Any) -> bool:
    return is_hex_address(value) and _is_checksum_formatted(value)
