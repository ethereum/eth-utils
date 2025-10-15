#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.1039756214285522 | 0.1022093784374718 | 1.70% | 1.73% | 1.02x | ✅ |
| `name_from_chain_id` | 6.349317499212852e-06 | 6.033504563700096e-06 | 4.97% | 5.23% | 1.05x | ✅ |
| `network_from_chain_id` | 5.94081768176706e-06 | 6.174346457000604e-06 | -3.93% | -3.78% | 0.96x | ❌ |
| `short_name_from_chain_id` | 6.347053795864354e-06 | 6.062538058812281e-06 | 4.48% | 4.69% | 1.05x | ✅ |
