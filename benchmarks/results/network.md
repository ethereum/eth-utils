#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06609917879998192 | 0.10255164886666535 | -55.15% | -35.55% | 0.64x | ❌ |
| `name_from_chain_id` | 6.149860608844017e-06 | 5.951731501122615e-06 | 3.22% | 3.33% | 1.03x | ✅ |
| `network_from_chain_id` | 6.214470537623937e-06 | 6.221185083163541e-06 | -0.11% | -0.11% | 1.00x | ❌ |
| `short_name_from_chain_id` | 6.2105618323179126e-06 | 6.1229826978762385e-06 | 1.41% | 1.43% | 1.01x | ✅ |
