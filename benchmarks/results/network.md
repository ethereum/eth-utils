#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.0912369653000269 | 0.0996710641250047 | -9.24% | -8.46% | 0.92x | ❌ |
| `name_from_chain_id` | 6.043314081959347e-06 | 5.873099216070456e-06 | 2.82% | 2.90% | 1.03x | ✅ |
| `network_from_chain_id` | 6.145831879818555e-06 | 5.978129039454238e-06 | 2.73% | 2.81% | 1.03x | ✅ |
| `short_name_from_chain_id` | 6.190872421900764e-06 | 5.806758606727436e-06 | 6.20% | 6.61% | 1.07x | ✅ |
