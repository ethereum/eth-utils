#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00023937758481200897 | 0.00023832566159498063 | 0.44% | 0.44% | 1.00x | ✅ |
| `get_logger` | 5.304704181023113e-05 | 5.313980874889255e-05 | -0.17% | -0.17% | 1.00x | ❌ |
| `setup_DEBUG2_logging` | 1.1683286299210449e-06 | 1.0455380244772517e-06 | 10.51% | 11.74% | 1.12x | ✅ |
