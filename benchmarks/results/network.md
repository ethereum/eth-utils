#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.10181193440001456 | 0.08420148226664423 | 17.30% | 20.91% | 1.21x | ✅ |
| `name_from_chain_id` | 6.260362842204801e-06 | 6.129139682958715e-06 | 2.10% | 2.14% | 1.02x | ✅ |
| `network_from_chain_id` | 6.279701803974756e-06 | 6.94046734796576e-06 | -10.52% | -9.52% | 0.90x | ❌ |
| `short_name_from_chain_id` | 6.195286821687211e-06 | 6.15666481965578e-06 | 0.62% | 0.63% | 1.01x | ✅ |
