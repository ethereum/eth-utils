#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.685927649812728e-05 | 7.059071861583935e-05 | 18.73% | 23.05% | 1.23x | ✅ |
| `keccak[bytes]` | 8.870868322253824e-05 | 7.193612407832365e-05 | 18.91% | 23.32% | 1.23x | ✅ |
| `keccak[hexstr]` | 0.00010043869671263279 | 7.580152153769072e-05 | 24.53% | 32.50% | 1.33x | ✅ |
| `keccak[int]` | 0.00015988142975032111 | 8.403271784160017e-05 | 47.44% | 90.26% | 1.90x | ✅ |
| `keccak[text]` | 9.125649902750735e-05 | 7.336852310395197e-05 | 19.60% | 24.38% | 1.24x | ✅ |
