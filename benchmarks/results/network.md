#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.09674955044442868 | 0.10510938320000301 | -8.64% | -7.95% | 0.92x | ❌ |
| `name_from_chain_id` | 6.121310758841406e-06 | 5.876018017853346e-06 | 4.01% | 4.17% | 1.04x | ✅ |
| `network_from_chain_id` | 6.2311386834493274e-06 | 6.030351305546801e-06 | 3.22% | 3.33% | 1.03x | ✅ |
| `short_name_from_chain_id` | 6.131070659427625e-06 | 5.963237414597408e-06 | 2.74% | 2.81% | 1.03x | ✅ |
