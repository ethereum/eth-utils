#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.0002414636188769383 | 0.00024250170959813598 | -0.43% | -0.43% | 1.00x | ❌ |
| `get_logger` | 5.270718580551638e-05 | 5.293332689538299e-05 | -0.43% | -0.43% | 1.00x | ❌ |
| `setup_DEBUG2_logging` | 1.1639477147011233e-06 | 1.0402262722549427e-06 | 10.63% | 11.89% | 1.12x | ✅ |
