from eth_hash.auto import keccak as keccak_256

from .conversions import (
    to_bytes,
)


def keccak(primitive=None, hexstr=None, text=None):
    return keccak_256(to_bytes(primitive, hexstr, text))
