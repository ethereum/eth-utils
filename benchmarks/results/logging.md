#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024029684200180734 | 0.00024035992074632548 | -0.03% | -0.03% | 1.00x | ❌ |
| `get_logger` | 5.315076441083198e-05 | 5.372668165862952e-05 | -1.08% | -1.07% | 0.99x | ❌ |
| `setup_DEBUG2_logging` | 1.186086257929195e-06 | 1.070490526709892e-06 | 9.75% | 10.80% | 1.11x | ✅ |
