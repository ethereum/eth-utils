#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024127423315970547 | 0.00024154184095643848 | -0.11% | -0.11% | 1.00x | ❌ |
| `get_logger` | 5.258189128243162e-05 | 5.304262381288434e-05 | -0.88% | -0.87% | 0.99x | ❌ |
| `setup_DEBUG2_logging` | 1.1658753647779033e-06 | 1.0304142784784563e-06 | 11.62% | 13.15% | 1.13x | ✅ |
