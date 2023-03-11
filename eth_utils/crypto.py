from typing import (
    Optional,
    Union,
)

from eth_hash.auto import (
    keccak as keccak_256,
)
from eth_typing import (
    Hash32,
)

from .conversions import (
    to_bytes,
)


def keccak(
    primitive: Optional[Union[bytes, int, bool]] = None,
    hexstr: Optional[str] = None,
    text: Optional[str] = None,
) -> Hash32:
    return Hash32(keccak_256(to_bytes(primitive, hexstr, text)))
