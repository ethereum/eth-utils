from typing import NewType, TypeVar, Union
import warnings

from eth_typing import Address

try:
    from eth_typing import AnyAddress, ChecksumAddress, HexAddress, HexStr, Primitives
except ImportError:
    warnings.warn("Old version of 'eth-typing', please update.")

    # for hex encoded addresses
    HexAddress = NewType("HexAddress", str)  # type: ignore
    ChecksumAddress = NewType(  # type: ignore
        "ChecksumAddress", HexAddress
    )  # for hex addresses with checksums
    AnyAddress = TypeVar(  # type: ignore
        "AnyAddress", Address, HexAddress, ChecksumAddress
    )
    HexStr = NewType("HexStr", str)  # type: ignore
    Primitives = Union[bytes, int, bool]  # type: ignore


T = TypeVar("T")
