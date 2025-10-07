#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00021525425097086368 | 0.00021567927234509963 | -0.20% | -0.20% | 1.00x | ❌ |
| `get_logger` | 4.809282812026631e-05 | 4.798037668026486e-05 | 0.23% | 0.23% | 1.00x | ✅ |
| `setup_DEBUG2_logging` | 1.0701311793018284e-06 | 9.172330318265665e-07 | 14.29% | 16.67% | 1.17x | ✅ |
