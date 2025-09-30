#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.732567229769651e-05 | 7.014374962811876e-05 | 19.68% | 24.50% | 1.24x | ✅ |
| `keccak[bytes]` | 8.843621753734135e-05 | 7.199636435538861e-05 | 18.59% | 22.83% | 1.23x | ✅ |
| `keccak[hexstr]` | 0.00010341491790954493 | 7.466351352353832e-05 | 27.80% | 38.51% | 1.39x | ✅ |
| `keccak[int]` | 0.0001545573187785331 | 8.365884002338458e-05 | 45.87% | 84.75% | 1.85x | ✅ |
| `keccak[text]` | 9.052088142521601e-05 | 7.238354373954693e-05 | 20.04% | 25.06% | 1.25x | ✅ |
