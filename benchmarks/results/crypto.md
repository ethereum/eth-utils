#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.728831190165761e-05 | 7.048924868113197e-05 | 19.25% | 23.83% | 1.24x | ✅ |
| `keccak[bytes]` | 8.933022579597695e-05 | 7.21878300841478e-05 | 19.19% | 23.75% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.00010101756769823357 | 7.562100010423876e-05 | 25.14% | 33.58% | 1.34x | ✅ |
| `keccak[int]` | 0.00015900412403057053 | 8.411055826092338e-05 | 47.10% | 89.04% | 1.89x | ✅ |
| `keccak[text]` | 9.149564872954546e-05 | 7.311699230984166e-05 | 20.09% | 25.14% | 1.25x | ✅ |
