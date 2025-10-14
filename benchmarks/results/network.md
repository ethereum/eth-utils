#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06588678360001268 | 0.10055378718750063 | -52.62% | -34.48% | 0.66x | ❌ |
| `name_from_chain_id` | 6.099553049411842e-06 | 6.137910877655089e-06 | -0.63% | -0.62% | 0.99x | ❌ |
| `network_from_chain_id` | 6.321013886797604e-06 | 6.090301919912864e-06 | 3.65% | 3.79% | 1.04x | ✅ |
| `short_name_from_chain_id` | 6.10576599085978e-06 | 5.9671986150763735e-06 | 2.27% | 2.32% | 1.02x | ✅ |
