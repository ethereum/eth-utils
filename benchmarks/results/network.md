#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06645537666668133 | 0.08605021973333654 | -29.49% | -22.77% | 0.77x | ❌ |
| `name_from_chain_id` | 6.424673629309059e-06 | 5.987758669411413e-06 | 6.80% | 7.30% | 1.07x | ✅ |
| `network_from_chain_id` | 6.187287939047096e-06 | 6.25736434495268e-06 | -1.13% | -1.12% | 0.99x | ❌ |
| `short_name_from_chain_id` | 6.385283527586612e-06 | 6.080594549546798e-06 | 4.77% | 5.01% | 1.05x | ✅ |
