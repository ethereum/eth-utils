#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.666200231708017e-05 | 7.098189752037344e-05 | 18.09% | 22.09% | 1.22x | ✅ |
| `keccak[bytes]` | 8.871399430437323e-05 | 7.252554572108917e-05 | 18.25% | 22.32% | 1.22x | ✅ |
| `keccak[hexstr]` | 0.00010024241477474947 | 7.976518828453754e-05 | 20.43% | 25.67% | 1.26x | ✅ |
| `keccak[int]` | 0.00015655746719524932 | 8.476317986134866e-05 | 45.86% | 84.70% | 1.85x | ✅ |
| `keccak[text]` | 9.180038665135188e-05 | 7.325948193587831e-05 | 20.20% | 25.31% | 1.25x | ✅ |
