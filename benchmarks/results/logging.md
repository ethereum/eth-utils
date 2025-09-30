#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00023949168003310848 | 0.00023873736780278656 | 0.31% | 0.32% | 1.00x | ✅ |
| `get_logger` | 5.3500320990852265e-05 | 5.3098795783543424e-05 | 0.75% | 0.76% | 1.01x | ✅ |
| `setup_DEBUG2_logging` | 1.1627580739595915e-06 | 1.06499832208411e-06 | 8.41% | 9.18% | 1.09x | ✅ |
