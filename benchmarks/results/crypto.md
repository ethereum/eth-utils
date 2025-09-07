#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 7.769907040576573e-05 | 5.966442092050401e-05 | 23.21% | 30.23% | 1.30x | ✅ |
| `keccak[bytes]` | 7.894841751915181e-05 | 6.217279714232536e-05 | 21.25% | 26.98% | 1.27x | ✅ |
| `keccak[hexstr]` | 8.939395420513054e-05 | 6.758913814528821e-05 | 24.39% | 32.26% | 1.32x | ✅ |
| `keccak[int]` | 0.00014593061571614594 | 7.722448534827226e-05 | 47.08% | 88.97% | 1.89x | ✅ |
| `keccak[text]` | 8.247478445002945e-05 | 6.343595015234927e-05 | 23.08% | 30.01% | 1.30x | ✅ |
