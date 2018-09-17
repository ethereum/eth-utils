from typing import NewType, TypeVar, Union

from eth_typing import Address


HexAddress = NewType("HexAddress", str)  # for hex encoded addresses
ChecksumAddress = NewType(
    "ChecksumAddress", HexAddress
)  # for hex addresses with checksums
AnyAddress = TypeVar("AnyAddress", Address, HexAddress, ChecksumAddress)
HexStr = NewType("HexStr", str)
Primitives = Union[bytes, int, bool]
T = TypeVar("T")
