#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00023954872346326718 | 0.000240508903584428 | -0.40% | -0.40% | 1.00x | ❌ |
| `get_logger` | 5.3196635494525394e-05 | 5.308598548921129e-05 | 0.21% | 0.21% | 1.00x | ✅ |
| `setup_DEBUG2_logging` | 1.1331753694707565e-06 | 1.0316355159600674e-06 | 8.96% | 9.84% | 1.10x | ✅ |
