#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.907572967287423e-05 | 7.163503553282237e-05 | 19.58% | 24.35% | 1.24x | ✅ |
| `keccak[bytes]` | 9.139097791460288e-05 | 7.368676113395446e-05 | 19.37% | 24.03% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.00010250725981490871 | 7.727233179943302e-05 | 24.62% | 32.66% | 1.33x | ✅ |
| `keccak[int]` | 0.00015838253835390994 | 8.537073976641144e-05 | 46.10% | 85.52% | 1.86x | ✅ |
| `keccak[text]` | 9.433118959667248e-05 | 7.491807913784718e-05 | 20.58% | 25.91% | 1.26x | ✅ |
