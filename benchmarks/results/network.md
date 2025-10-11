#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06588185166666942 | 0.08362932018751934 | -26.94% | -21.22% | 0.79x | ❌ |
| `name_from_chain_id` | 5.954589604341024e-06 | 6.219991610214578e-06 | -4.46% | -4.27% | 0.96x | ❌ |
| `network_from_chain_id` | 6.29832911251411e-06 | 6.130946745380384e-06 | 2.66% | 2.73% | 1.03x | ✅ |
| `short_name_from_chain_id` | 6.092671005353108e-06 | 5.845224792411366e-06 | 4.06% | 4.23% | 1.04x | ✅ |
