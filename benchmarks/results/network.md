#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06550613399997474 | 0.09720359681250557 | -48.39% | -32.61% | 0.67x | ❌ |
| `name_from_chain_id` | 6.114378630667806e-06 | 5.968778090994267e-06 | 2.38% | 2.44% | 1.02x | ✅ |
| `network_from_chain_id` | 6.15985590202278e-06 | 6.1345692889669526e-06 | 0.41% | 0.41% | 1.00x | ✅ |
| `short_name_from_chain_id` | 6.124543997802894e-06 | 5.882552169823543e-06 | 3.95% | 4.11% | 1.04x | ✅ |
