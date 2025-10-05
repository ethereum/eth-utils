#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.718609684492347e-05 | 6.995746067715225e-05 | 19.76% | 24.63% | 1.25x | ✅ |
| `keccak[bytes]` | 8.851153346387193e-05 | 7.126507426300612e-05 | 19.48% | 24.20% | 1.24x | ✅ |
| `keccak[hexstr]` | 9.972239901442872e-05 | 7.548927974896287e-05 | 24.30% | 32.10% | 1.32x | ✅ |
| `keccak[int]` | 0.00015539840623047976 | 8.361585311886352e-05 | 46.19% | 85.85% | 1.86x | ✅ |
| `keccak[text]` | 9.113053936415023e-05 | 7.257955224125882e-05 | 20.36% | 25.56% | 1.26x | ✅ |
