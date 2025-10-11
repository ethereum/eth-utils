#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.91633056243246e-05 | 7.143854064731236e-05 | 19.88% | 24.81% | 1.25x | ✅ |
| `keccak[bytes]` | 9.05963061952489e-05 | 7.319010195329559e-05 | 19.21% | 23.78% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.00010209331176146883 | 7.646074730271083e-05 | 25.11% | 33.52% | 1.34x | ✅ |
| `keccak[int]` | 0.00015874881370692224 | 8.599164077380019e-05 | 45.83% | 84.61% | 1.85x | ✅ |
| `keccak[text]` | 9.29248777082848e-05 | 7.431728172205569e-05 | 20.02% | 25.04% | 1.25x | ✅ |
