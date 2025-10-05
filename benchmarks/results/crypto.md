#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.865708904461752e-05 | 7.028108276806763e-05 | 20.73% | 26.15% | 1.26x | ✅ |
| `keccak[bytes]` | 8.990719647495568e-05 | 7.204488709360211e-05 | 19.87% | 24.79% | 1.25x | ✅ |
| `keccak[hexstr]` | 0.00010144801121341543 | 7.489333672434203e-05 | 26.18% | 35.46% | 1.35x | ✅ |
| `keccak[int]` | 0.00015610671108138473 | 8.401525880117484e-05 | 46.18% | 85.81% | 1.86x | ✅ |
| `keccak[text]` | 9.40140538845957e-05 | 7.251454406003338e-05 | 22.87% | 29.65% | 1.30x | ✅ |
