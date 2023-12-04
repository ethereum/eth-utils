import pytest

from eth_utils import (
    humanize_hash,
)


@pytest.mark.parametrize("hash32,expected", ((bytes(range(32)), "0001..1e1f"),))
def test_humanize_hash(hash32, expected):
    assert humanize_hash(hash32) == expected
