#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024639802076282505 | 0.0002462343130624967 | 0.07% | 0.07% | 1.00x | ✅ |
| `get_logger` | 5.3096433629441234e-05 | 5.309544848494891e-05 | 0.00% | 0.00% | 1.00x | ✅ |
| `setup_DEBUG2_logging` | 1.1638898199186458e-06 | 1.0559071785476078e-06 | 9.28% | 10.23% | 1.10x | ✅ |
