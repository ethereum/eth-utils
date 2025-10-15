#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.712904241601823e-05 | 7.006736588492386e-05 | 19.58% | 24.35% | 1.24x | ✅ |
| `keccak[bytes]` | 8.924636576084341e-05 | 7.193592010571384e-05 | 19.40% | 24.06% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.00010046095361468976 | 7.506623817858474e-05 | 25.28% | 33.83% | 1.34x | ✅ |
| `keccak[int]` | 0.00015590041891005546 | 8.389650646609778e-05 | 46.19% | 85.82% | 1.86x | ✅ |
| `keccak[text]` | 9.350356618200409e-05 | 7.261222871751997e-05 | 22.34% | 28.77% | 1.29x | ✅ |
