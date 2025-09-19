#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.773408523462605e-05 | 7.114881513405774e-05 | 18.90% | 23.31% | 1.23x | ✅ |
| `keccak[bytes]` | 9.033082290413837e-05 | 7.454258275001538e-05 | 17.48% | 21.18% | 1.21x | ✅ |
| `keccak[hexstr]` | 0.00010223932825530108 | 7.631997175464297e-05 | 25.35% | 33.96% | 1.34x | ✅ |
| `keccak[int]` | 0.00015756642298129267 | 8.539087095147273e-05 | 45.81% | 84.52% | 1.85x | ✅ |
| `keccak[text]` | 9.322356311513875e-05 | 7.425005317878549e-05 | 20.35% | 25.55% | 1.26x | ✅ |
