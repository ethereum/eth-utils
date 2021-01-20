from typing import Union, cast

from eth_hash.auto import keccak as keccak_256

from .conversions import to_bytes


def keccak(
    primitive: Union[bytes, int, bool] = None, hexstr: str = None, text: str = None
) -> bytes:
    input_bytes = to_bytes(primitive, hexstr, text)
    return cast(bytes, keccak_256(input_bytes))
