#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 8.69033713365111e-05 | 6.902225538784247e-05 | 20.58% | 25.91% | 1.26x | ✅ |
| `keccak[bytes]` | 8.858934657987805e-05 | 7.059140441258723e-05 | 20.32% | 25.50% | 1.25x | ✅ |
| `keccak[hexstr]` | 9.967184055708157e-05 | 7.402032016474073e-05 | 25.74% | 34.65% | 1.35x | ✅ |
| `keccak[int]` | 0.00015410078610033755 | 8.302239669247777e-05 | 46.12% | 85.61% | 1.86x | ✅ |
| `keccak[text]` | 9.108745014972452e-05 | 7.157889100418571e-05 | 21.42% | 27.25% | 1.27x | ✅ |
