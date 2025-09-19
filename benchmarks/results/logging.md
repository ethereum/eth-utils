#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024234666376093792 | 0.0002410859337754788 | 0.52% | 0.52% | 1.01x | ✅ |
| `get_logger` | 5.493308208225623e-05 | 5.374478354558298e-05 | 2.16% | 2.21% | 1.02x | ✅ |
| `setup_DEBUG2_logging` | 1.1428163343065178e-06 | 1.0567232262061337e-06 | 7.53% | 8.15% | 1.08x | ✅ |
