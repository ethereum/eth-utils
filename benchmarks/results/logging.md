#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024014748865237384 | 0.00024072207609929211 | -0.24% | -0.24% | 1.00x | ❌ |
| `get_logger` | 5.3315025686898206e-05 | 5.348042906494025e-05 | -0.31% | -0.31% | 1.00x | ❌ |
| `setup_DEBUG2_logging` | 1.1515996824766102e-06 | 1.0595217449319458e-06 | 8.00% | 8.69% | 1.09x | ✅ |
