#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.0002385888107281711 | 0.00024135498141483787 | -1.16% | -1.15% | 0.99x | ❌ |
| `get_logger` | 5.345092852246446e-05 | 5.3818421072681814e-05 | -0.69% | -0.68% | 0.99x | ❌ |
| `setup_DEBUG2_logging` | 1.1471802010622968e-06 | 1.0329555644359683e-06 | 9.96% | 11.06% | 1.11x | ✅ |
