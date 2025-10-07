#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.11468014433333451 | 0.0996762817647102 | 13.08% | 15.05% | 1.15x | ✅ |
| `name_from_chain_id` | 5.19919790812712e-06 | 5.20783071200408e-06 | -0.17% | -0.17% | 1.00x | ❌ |
| `network_from_chain_id` | 5.172290264312574e-06 | 5.24479744060815e-06 | -1.40% | -1.38% | 0.99x | ❌ |
| `short_name_from_chain_id` | 5.1822852376527e-06 | 5.170542814812281e-06 | 0.23% | 0.23% | 1.00x | ✅ |
