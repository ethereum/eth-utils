#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.11559080590909203 | 0.10250358326666932 | 11.32% | 12.77% | 1.13x | ✅ |
| `name_from_chain_id` | 6.215935025641832e-06 | 6.039851637081296e-06 | 2.83% | 2.92% | 1.03x | ✅ |
| `network_from_chain_id` | 6.23439271125452e-06 | 5.918217231105029e-06 | 5.07% | 5.34% | 1.05x | ✅ |
| `short_name_from_chain_id` | 6.251592784812253e-06 | 5.905927967277357e-06 | 5.53% | 5.85% | 1.06x | ✅ |
