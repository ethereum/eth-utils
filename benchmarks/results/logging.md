#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.0002357031557931874 | 0.00023645248397690386 | -0.32% | -0.32% | 1.00x | ❌ |
| `get_logger` | 5.208102003091957e-05 | 5.1669891222474715e-05 | 0.79% | 0.80% | 1.01x | ✅ |
| `setup_DEBUG2_logging` | 1.1467412397912903e-06 | 1.036585475547408e-06 | 9.61% | 10.63% | 1.11x | ✅ |
