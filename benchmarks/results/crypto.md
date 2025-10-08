#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.825209196086898e-05 | 7.003936482478055e-05 | 20.64% | 26.00% | 1.26x | ✅ |
| `keccak[bytes]` | 8.917450087105679e-05 | 7.219098401816907e-05 | 19.05% | 23.53% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.0001019268238877134 | 7.559503398718352e-05 | 25.83% | 34.83% | 1.35x | ✅ |
| `keccak[int]` | 0.00015780979784704109 | 8.427303418990432e-05 | 46.60% | 87.26% | 1.87x | ✅ |
| `keccak[text]` | 9.26354337927227e-05 | 7.315463982455733e-05 | 21.03% | 26.63% | 1.27x | ✅ |
