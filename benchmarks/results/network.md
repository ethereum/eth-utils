#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.12069852140000421 | 0.10075830106248418 | 16.52% | 19.79% | 1.20x | ✅ |
| `name_from_chain_id` | 6.2224340761816855e-06 | 5.91160632989587e-06 | 5.00% | 5.26% | 1.05x | ✅ |
| `network_from_chain_id` | 6.322269716384075e-06 | 5.978582878966184e-06 | 5.44% | 5.75% | 1.06x | ✅ |
| `short_name_from_chain_id` | 6.2022506715693546e-06 | 5.834602093807359e-06 | 5.93% | 6.30% | 1.06x | ✅ |
