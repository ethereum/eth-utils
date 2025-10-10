#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.752066954288107e-05 | 7.080136466701352e-05 | 19.10% | 23.61% | 1.24x | ✅ |
| `keccak[bytes]` | 8.985565095197155e-05 | 7.260765619222084e-05 | 19.20% | 23.76% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.00010083865258582805 | 7.65753243436778e-05 | 24.06% | 31.69% | 1.32x | ✅ |
| `keccak[int]` | 0.00015619146617004467 | 8.637239516986198e-05 | 44.70% | 80.83% | 1.81x | ✅ |
| `keccak[text]` | 9.18637493390036e-05 | 7.358705000060741e-05 | 19.90% | 24.84% | 1.25x | ✅ |
