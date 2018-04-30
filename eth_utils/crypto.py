import warnings

from eth_hash.auto import keccak as keccak_256

from .conversions import (
    to_bytes,
)


def keccak(primitive=None, hexstr=None, text=None):
    warnings.warn(DeprecationWarning(
        "The `eth_utils.keccak()` function has been deprecated and will be removed in a "
        "future version. You should update your code to use eth_hash.auto.keccak instead."))
    return keccak_256(to_bytes(primitive, hexstr, text))
