#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00023890575155672482 | 0.00023701235852156068 | 0.79% | 0.80% | 1.01x | ✅ |
| `get_logger` | 5.289446253606273e-05 | 5.31301264918437e-05 | -0.45% | -0.44% | 1.00x | ❌ |
| `setup_DEBUG2_logging` | 1.1454929259430784e-06 | 1.0537841219931585e-06 | 8.01% | 8.70% | 1.09x | ✅ |
