#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.0888331639999933 | 0.09985568449999249 | -12.41% | -11.04% | 0.89x | ❌ |
| `name_from_chain_id` | 6.165055925984853e-06 | 6.134905578820859e-06 | 0.49% | 0.49% | 1.00x | ✅ |
| `network_from_chain_id` | 6.28834654720381e-06 | 6.3038812551501e-06 | -0.25% | -0.25% | 1.00x | ❌ |
| `short_name_from_chain_id` | 6.149344616462819e-06 | 5.960000463963751e-06 | 3.08% | 3.18% | 1.03x | ✅ |
