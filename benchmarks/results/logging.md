#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024180933823952168 | 0.00024217900602679083 | -0.15% | -0.15% | 1.00x | ❌ |
| `get_logger` | 5.3581525166580186e-05 | 5.4059840212932126e-05 | -0.89% | -0.88% | 0.99x | ❌ |
| `setup_DEBUG2_logging` | 1.1454173388148373e-06 | 1.0340709237156286e-06 | 9.72% | 10.77% | 1.11x | ✅ |
