#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06726171219997923 | 0.08456511673333202 | -25.73% | -20.46% | 0.80x | ❌ |
| `name_from_chain_id` | 6.126902169731276e-06 | 6.00201701202322e-06 | 2.04% | 2.08% | 1.02x | ✅ |
| `network_from_chain_id` | 6.1928089607131904e-06 | 7.194187104508698e-06 | -16.17% | -13.92% | 0.86x | ❌ |
| `short_name_from_chain_id` | 6.2300000002588555e-06 | 6.106256643232632e-06 | 1.99% | 2.03% | 1.02x | ✅ |
