#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024193947839317603 | 0.00024150238365147956 | 0.18% | 0.18% | 1.00x | ✅ |
| `get_logger` | 5.327389277825631e-05 | 5.263916985220409e-05 | 1.19% | 1.21% | 1.01x | ✅ |
| `setup_DEBUG2_logging` | 1.1918976763536985e-06 | 1.087511232411589e-06 | 8.76% | 9.60% | 1.10x | ✅ |
