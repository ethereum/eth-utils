#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.10776989138462166 | 0.10023380618751077 | 6.99% | 7.52% | 1.08x | ✅ |
| `name_from_chain_id` | 6.094357254868827e-06 | 6.0439204168129435e-06 | 0.83% | 0.83% | 1.01x | ✅ |
| `network_from_chain_id` | 6.20238309762081e-06 | 6.13932955598907e-06 | 1.02% | 1.03% | 1.01x | ✅ |
| `short_name_from_chain_id` | 6.128720490289682e-06 | 6.0988026974668014e-06 | 0.49% | 0.49% | 1.00x | ✅ |
