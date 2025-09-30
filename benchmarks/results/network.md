#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.09319607529999985 | 0.10064314079997985 | -7.99% | -7.40% | 0.93x | ❌ |
| `name_from_chain_id` | 6.119723628137187e-06 | 6.0445444360544745e-06 | 1.23% | 1.24% | 1.01x | ✅ |
| `network_from_chain_id` | 6.318999092955858e-06 | 5.733958257666209e-06 | 9.26% | 10.20% | 1.10x | ✅ |
| `short_name_from_chain_id` | 6.2443849074268e-06 | 5.914161519641775e-06 | 5.29% | 5.58% | 1.06x | ✅ |
