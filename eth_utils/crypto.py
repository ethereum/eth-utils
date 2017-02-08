from __future__ import absolute_import

try:
    from sha3 import keccak_256
except ImportError:
    from sha3 import sha3_256 as keccak_256

from .string import (
    force_bytes,
)


def keccak(value):
    return keccak_256(force_bytes(value)).digest()


# ensure we have the *correct* hash function
assert keccak('') == b"\xc5\xd2F\x01\x86\xf7#<\x92~}\xb2\xdc\xc7\x03\xc0\xe5\x00\xb6S\xca\x82';{\xfa\xd8\x04]\x85\xa4p"  # noqa: E501
