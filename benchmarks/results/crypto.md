#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 7.638748052723892e-05 | 5.9558157056536214e-05 | 22.03% | 28.26% | 1.28x | ✅ |
| `keccak[bytes]` | 7.82044909901065e-05 | 6.146806998124807e-05 | 21.40% | 27.23% | 1.27x | ✅ |
| `keccak[hexstr]` | 8.873783566584638e-05 | 6.72461460098452e-05 | 24.22% | 31.96% | 1.32x | ✅ |
| `keccak[int]` | 0.0001454741381076699 | 7.705309035525974e-05 | 47.03% | 88.80% | 1.89x | ✅ |
| `keccak[text]` | 8.029808083732244e-05 | 6.305663542019594e-05 | 21.47% | 27.34% | 1.27x | ✅ |
