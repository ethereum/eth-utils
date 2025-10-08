#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.726946160983561e-05 | 7.057838507240011e-05 | 19.13% | 23.65% | 1.24x | ✅ |
| `keccak[bytes]` | 8.988435466515191e-05 | 7.31118697091953e-05 | 18.66% | 22.94% | 1.23x | ✅ |
| `keccak[hexstr]` | 0.00010168103780174886 | 7.556438087703985e-05 | 25.68% | 34.56% | 1.35x | ✅ |
| `keccak[int]` | 0.00015775674418074507 | 8.507568084121536e-05 | 46.07% | 85.43% | 1.85x | ✅ |
| `keccak[text]` | 9.274491543907348e-05 | 7.32693162164768e-05 | 21.00% | 26.58% | 1.27x | ✅ |
