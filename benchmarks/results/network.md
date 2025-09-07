#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.09484813988889426 | 0.09983287613335202 | -5.26% | -4.99% | 0.95x | ❌ |
| `name_from_chain_id` | 6.032595760550253e-06 | 6.108889131570364e-06 | -1.26% | -1.25% | 0.99x | ❌ |
| `network_from_chain_id` | 6.104273712262773e-06 | 7.052883284596742e-06 | -15.54% | -13.45% | 0.87x | ❌ |
| `short_name_from_chain_id` | 6.042880151529743e-06 | 6.272291944153981e-06 | -3.80% | -3.66% | 0.96x | ❌ |
