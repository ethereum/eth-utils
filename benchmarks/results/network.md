#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06667784660003236 | 0.10210488339999604 | -53.13% | -34.70% | 0.65x | ❌ |
| `name_from_chain_id` | 6.114889515028704e-06 | 5.6742212419918435e-06 | 7.21% | 7.77% | 1.08x | ✅ |
| `network_from_chain_id` | 6.187008908469627e-06 | 6.005094426017476e-06 | 2.94% | 3.03% | 1.03x | ✅ |
| `short_name_from_chain_id` | 5.975784018727894e-06 | 5.958209931403421e-06 | 0.29% | 0.29% | 1.00x | ✅ |
