#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.703254756489972e-05 | 6.994190097045079e-05 | 19.64% | 24.44% | 1.24x | ✅ |
| `keccak[bytes]` | 8.915240464164445e-05 | 7.146864113859717e-05 | 19.84% | 24.74% | 1.25x | ✅ |
| `keccak[hexstr]` | 0.00010044447072338918 | 7.508802116321511e-05 | 25.24% | 33.77% | 1.34x | ✅ |
| `keccak[int]` | 0.0001562004138000575 | 8.416179710109091e-05 | 46.12% | 85.60% | 1.86x | ✅ |
| `keccak[text]` | 9.240403138561589e-05 | 7.348722993003821e-05 | 20.47% | 25.74% | 1.26x | ✅ |
