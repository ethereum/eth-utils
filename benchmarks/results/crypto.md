#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.828292056106608e-05 | 7.093175146355282e-05 | 19.65% | 24.46% | 1.24x | ✅ |
| `keccak[bytes]` | 9.058914512344627e-05 | 7.295222987063529e-05 | 19.47% | 24.18% | 1.24x | ✅ |
| `keccak[hexstr]` | 0.0001025755701916537 | 7.696218818784261e-05 | 24.97% | 33.28% | 1.33x | ✅ |
| `keccak[int]` | 0.00015853602201430761 | 8.525732979332306e-05 | 46.22% | 85.95% | 1.86x | ✅ |
| `keccak[text]` | 9.42965595796593e-05 | 7.362225183580657e-05 | 21.92% | 28.08% | 1.28x | ✅ |
