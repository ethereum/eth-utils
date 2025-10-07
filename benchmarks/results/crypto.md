#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 7.906963571108547e-05 | 6.54013416194671e-05 | 17.29% | 20.90% | 1.21x | ✅ |
| `keccak[bytes]` | 8.238386722656649e-05 | 6.724620124521438e-05 | 18.37% | 22.51% | 1.23x | ✅ |
| `keccak[hexstr]` | 9.068514661033195e-05 | 7.069868743356414e-05 | 22.04% | 28.27% | 1.28x | ✅ |
| `keccak[int]` | 0.00014234204671547098 | 7.801341789721008e-05 | 45.19% | 82.46% | 1.82x | ✅ |
| `keccak[text]` | 8.357525947960523e-05 | 6.851725324143632e-05 | 18.02% | 21.98% | 1.22x | ✅ |
