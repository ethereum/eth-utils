#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06138515499997084 | 0.09049084982353527 | -47.41% | -32.16% | 0.68x | ❌ |
| `name_from_chain_id` | 6.114104458065119e-06 | 6.008765125842014e-06 | 1.72% | 1.75% | 1.02x | ✅ |
| `network_from_chain_id` | 6.215252313460036e-06 | 5.973916715742962e-06 | 3.88% | 4.04% | 1.04x | ✅ |
| `short_name_from_chain_id` | 6.122442861468171e-06 | 5.9234894270950185e-06 | 3.25% | 3.36% | 1.03x | ✅ |
