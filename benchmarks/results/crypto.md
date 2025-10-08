#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.761438911563416e-05 | 7.035505579922208e-05 | 19.70% | 24.53% | 1.25x | ✅ |
| `keccak[bytes]` | 9.003184383248869e-05 | 7.217714482395587e-05 | 19.83% | 24.74% | 1.25x | ✅ |
| `keccak[hexstr]` | 0.000103161287832973 | 7.510540863890165e-05 | 27.20% | 37.36% | 1.37x | ✅ |
| `keccak[int]` | 0.00015848867708297595 | 8.39542331851062e-05 | 47.03% | 88.78% | 1.89x | ✅ |
| `keccak[text]` | 9.285617528266774e-05 | 7.302781380546069e-05 | 21.35% | 27.15% | 1.27x | ✅ |
