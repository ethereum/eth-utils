#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.80837706965094e-05 | 7.080292111608098e-05 | 19.62% | 24.41% | 1.24x | ✅ |
| `keccak[bytes]` | 8.9862823529376e-05 | 7.228665050449828e-05 | 19.56% | 24.31% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.00010236102122316392 | 7.573588855876348e-05 | 26.01% | 35.16% | 1.35x | ✅ |
| `keccak[int]` | 0.00015910609376403525 | 8.542033248021948e-05 | 46.31% | 86.26% | 1.86x | ✅ |
| `keccak[text]` | 9.417498840172187e-05 | 7.342412596703259e-05 | 22.03% | 28.26% | 1.28x | ✅ |
