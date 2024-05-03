from typing import (
    TYPE_CHECKING,
)

if TYPE_CHECKING:
    from eth_abi.abi import (
        ABICodec,
    )


def int_to_big_endian(value: int) -> bytes:
    return value.to_bytes((value.bit_length() + 7) // 8 or 1, "big")


def big_endian_to_int(value: bytes) -> int:
    return int.from_bytes(value, "big")


def get_default_codec() -> "ABICodec":
    from eth_abi.abi import (
        ABICodec,
    )
    from eth_abi.registry import (
        registry as default_registry,
    )

    return ABICodec(default_registry)
