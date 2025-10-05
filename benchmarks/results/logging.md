#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024420536726948506 | 0.00024277021138513437 | 0.59% | 0.59% | 1.01x | ✅ |
| `get_logger` | 5.359288102852115e-05 | 5.3801823291233434e-05 | -0.39% | -0.39% | 1.00x | ❌ |
| `setup_DEBUG2_logging` | 1.181785557831175e-06 | 1.0921040527969487e-06 | 7.59% | 8.21% | 1.08x | ✅ |
