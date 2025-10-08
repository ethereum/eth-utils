#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06888493900000867 | 0.0661320643999943 | 4.00% | 4.16% | 1.04x | ✅ |
| `name_from_chain_id` | 6.323779806001533e-06 | 6.02097920028507e-06 | 4.79% | 5.03% | 1.05x | ✅ |
| `network_from_chain_id` | 6.176885033622433e-06 | 6.0728578690493484e-06 | 1.68% | 1.71% | 1.02x | ✅ |
| `short_name_from_chain_id` | 6.315126941777588e-06 | 6.00383775760309e-06 | 4.93% | 5.18% | 1.05x | ✅ |
