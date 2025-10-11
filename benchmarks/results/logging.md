#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024134220493030032 | 0.0002428514744690902 | -0.63% | -0.62% | 0.99x | ❌ |
| `get_logger` | 5.3137070531692957e-05 | 5.386098056551406e-05 | -1.36% | -1.34% | 0.99x | ❌ |
| `setup_DEBUG2_logging` | 1.178890301942566e-06 | 1.071256483420835e-06 | 9.13% | 10.05% | 1.10x | ✅ |
