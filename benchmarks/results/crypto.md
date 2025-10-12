#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.920399127172924e-05 | 6.934767613911586e-05 | 22.26% | 28.63% | 1.29x | ✅ |
| `keccak[bytes]` | 9.038201716518108e-05 | 7.11893598789828e-05 | 21.24% | 26.96% | 1.27x | ✅ |
| `keccak[hexstr]` | 9.993621026177277e-05 | 7.506148026258829e-05 | 24.89% | 33.14% | 1.33x | ✅ |
| `keccak[int]` | 0.0001586880699909279 | 8.301435529704192e-05 | 47.69% | 91.16% | 1.91x | ✅ |
| `keccak[text]` | 9.186730160957319e-05 | 7.215126759490113e-05 | 21.46% | 27.33% | 1.27x | ✅ |
