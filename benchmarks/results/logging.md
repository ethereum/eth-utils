#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.0002406991831498773 | 0.0002400687727390861 | 0.26% | 0.26% | 1.00x | ✅ |
| `get_logger` | 5.3535165036181025e-05 | 5.3834481409272824e-05 | -0.56% | -0.56% | 0.99x | ❌ |
| `setup_DEBUG2_logging` | 1.1603457777535733e-06 | 1.0479074763565526e-06 | 9.69% | 10.73% | 1.11x | ✅ |
