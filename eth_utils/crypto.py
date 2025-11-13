from eth_hash.auto import (
    keccak as keccak_256,
)

from .conversions import (
    to_bytes,
)


def keccak(
    primitive: bytes | int | bool | None = None,
    hexstr: str | None = None,
    text: str | None = None,
) -> bytes:
    return bytes(keccak_256(to_bytes(primitive, hexstr, text)))
