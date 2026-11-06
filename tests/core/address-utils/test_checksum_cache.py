from eth_utils import (
    to_checksum_address,
)
from eth_utils.address import (
    _cached_checksum_address,
)


def test_mutable_address_is_normalized_on_every_call():
    value = bytearray.fromhex("ab" * 20)
    before = to_checksum_address(value)
    value[0] = 1
    after = to_checksum_address(value)
    assert before != after
    assert after == to_checksum_address(bytes(value))


def test_checksum_cache_is_bounded():
    _cached_checksum_address.cache_clear()
    for value in range(600):
        assert len(to_checksum_address(value.to_bytes(20, "big"))) == 42
    assert _cached_checksum_address.cache_info().currsize <= 256


def test_normalized_string_subclass_is_not_cached():
    class Address(str):
        __hash__ = None
        replacement = "a"

        def lower(self):
            return self

        def __getitem__(self, key):
            if isinstance(key, int):
                return self.replacement
            return super().__getitem__(key)

    value = Address("0x" + "ab" * 20)
    before = to_checksum_address(value)
    value.replacement = "b"
    after = to_checksum_address(value)
    assert before != after
    assert before.lower() == "0x" + "a" * 40
    assert after.lower() == "0x" + "b" * 40
