#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.685967813642955e-05 | 7.123298372717367e-05 | 17.99% | 21.94% | 1.22x | ✅ |
| `keccak[bytes]` | 8.930472566056564e-05 | 7.199156985958112e-05 | 19.39% | 24.05% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.00010052455394278697 | 7.441301302365883e-05 | 25.98% | 35.09% | 1.35x | ✅ |
| `keccak[int]` | 0.00015631902458533944 | 8.44190825358362e-05 | 46.00% | 85.17% | 1.85x | ✅ |
| `keccak[text]` | 9.202048120672355e-05 | 7.2368405607401e-05 | 21.36% | 27.16% | 1.27x | ✅ |
