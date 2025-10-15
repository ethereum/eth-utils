#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.798335860613398e-05 | 7.109237471744306e-05 | 19.20% | 23.76% | 1.24x | ✅ |
| `keccak[bytes]` | 9.087764902803138e-05 | 7.273286944677221e-05 | 19.97% | 24.95% | 1.25x | ✅ |
| `keccak[hexstr]` | 0.00010185440445627245 | 7.686750757415845e-05 | 24.53% | 32.51% | 1.33x | ✅ |
| `keccak[int]` | 0.00015953089756040847 | 8.488750382642122e-05 | 46.79% | 87.93% | 1.88x | ✅ |
| `keccak[text]` | 9.227986505276209e-05 | 7.326021300549123e-05 | 20.61% | 25.96% | 1.26x | ✅ |
