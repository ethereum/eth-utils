import pytest

from faster_eth_utils.humanize import (
    humanize_ipfs_uri,
    is_ipfs_uri,
)


@pytest.mark.parametrize(
    "uri,expected",
    (
        ("ipfs://QmTKB75Y73zhNbD3Y73xeXGjYrZHmaXXNxoZqGCagu7r8u", "ipfs://QmTK..7r8u"),
        ("ipfs://QmaRBSoxprXdaEU98QqgtVkKrX4jcVxYdSR2TQwBKNiGMH", "ipfs://QmaR..iGMH"),
    ),
)
def test_humanize_ipfs_uri(uri, expected):
    actual = humanize_ipfs_uri(uri)
    assert actual == expected


@pytest.mark.parametrize(
    "uri,expected",
    (
        ("ipfs://QmTKB75Y73zhNbD3Y73xeXGjYrZHmaXXNxoZqGCagu7r8u", True),
        ("ipfs://QmaRBSoxprXdaEU98QqgtVkKrX4jcVxYdSR2TQwBKNiGMH", True),
        (123, False),
        ([], False),
        (False, False),
        ("ipfs://", False),
        ("ipfs//QmTKB75Y73zhNbD3Y73xeXGjYrZHmaXXNxoZqGCagu7r8u", False),
        ("ipfs:/QmTKB75Y73zhNbD3Y73xeXGjYrZHmaXXNxoZqGCagu7r8u", False),
        ("ipfs/QmTKB75Y73zhNbD3Y73xeXGjYrZHmaXXNxoZqGCagu7r8u", False),
        ("ipfsQmTKB75Y73zhNbD3Y73xeXGjYrZHmaXXNxoZqGCagu7r8u", False),
        ("http://QmTKB75Y73zhNbD3Y73xeXGjYrZHmaXXNxoZqGCagu7r8u", False),
    ),
)
def test_is_ipfs_uri(uri, expected):
    actual = is_ipfs_uri(uri)
    assert actual == expected
