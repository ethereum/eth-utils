#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06540540499999281 | 0.10364905133333953 | -58.47% | -36.90% | 0.63x | ❌ |
| `name_from_chain_id` | 6.112099982147533e-06 | 6.116464291580573e-06 | -0.07% | -0.07% | 1.00x | ❌ |
| `network_from_chain_id` | 6.205892872505683e-06 | 6.126747753185507e-06 | 1.28% | 1.29% | 1.01x | ✅ |
| `short_name_from_chain_id` | 6.158115155544939e-06 | 5.889347092763887e-06 | 4.36% | 4.56% | 1.05x | ✅ |
