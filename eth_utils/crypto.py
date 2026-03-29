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
    if isinstance(primitive, bytes) and hexstr is None and text is None:
        return bytes(keccak_256(primitive))
    elif (
        isinstance(primitive, (bytearray, memoryview))
        and hexstr is None
        and text is None
    ):
        return bytes(keccak_256(bytes(primitive)))

    return bytes(keccak_256(to_bytes(primitive, hexstr, text)))
