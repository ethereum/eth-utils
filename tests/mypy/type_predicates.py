from collections.abc import (
    Mapping,
    Sequence,
)
import numbers
from typing import (
    Any,
)

from eth_typing import (
    Address,
    ChecksumAddress,
    HexAddress,
    HexStr,
)

from eth_utils import (
    is_binary_address,
    is_boolean,
    is_bytes,
    is_canonical_address,
    is_checksum_address,
    is_dict,
    is_hex,
    is_hex_address,
    is_hexstr,
    is_integer,
    is_list,
    is_list_like,
    is_normalized_address,
    is_null,
    is_number,
    is_text,
    is_tuple,
)


def check_type_predicates(value: object) -> None:
    if is_integer(value):
        integer_value: int = value  # noqa: F841
    if is_bytes(value):
        bytes_value: bytes | bytearray = value  # noqa: F841
    if is_text(value):
        text_value: str = value  # noqa: F841
    if is_boolean(value):
        boolean_value: bool = value  # noqa: F841
    if is_dict(value):
        mapping_value: Mapping[Any, Any] = value  # noqa: F841
    if is_list_like(value):
        sequence_value: Sequence[Any] = value  # noqa: F841
    if is_list(value):
        list_value: list[Any] = value  # noqa: F841
    if is_tuple(value):
        tuple_value: tuple[Any, ...] = value  # noqa: F841
    if is_null(value):
        null_value: None = value  # noqa: F841
    if is_number(value):
        number_value: numbers.Number = value  # noqa: F841


def check_address_predicates(value: object) -> None:
    if is_hex_address(value):
        hex_address_value: HexAddress = value  # noqa: F841
    if is_binary_address(value):
        binary_address_value: Address = value  # noqa: F841
    if is_normalized_address(value):
        normalized_address_value: HexAddress = value  # noqa: F841
    if is_canonical_address(value):
        canonical_address_value: Address = value  # noqa: F841
    if is_checksum_address(value):
        checksum_address_value: ChecksumAddress = value  # noqa: F841


def check_hex_predicates(value: object) -> None:
    if is_hexstr(value):
        hexstr_value: HexStr = value  # noqa: F841
    if is_hex(value):
        hex_value: HexStr = value  # noqa: F841
