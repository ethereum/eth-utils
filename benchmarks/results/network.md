#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.10399483142857337 | 0.1023376151875226 | 1.59% | 1.62% | 1.02x | ✅ |
| `name_from_chain_id` | 6.054663872769061e-06 | 6.0017590737527285e-06 | 0.87% | 0.88% | 1.01x | ✅ |
| `network_from_chain_id` | 6.2336198953133045e-06 | 5.762911253292633e-06 | 7.55% | 8.17% | 1.08x | ✅ |
| `short_name_from_chain_id` | 6.0071537933669815e-06 | 5.97486580832231e-06 | 0.54% | 0.54% | 1.01x | ✅ |
