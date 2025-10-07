#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.26455726500000765 | 0.2655219969999848 | -0.36% | -0.36% | 1.00x | ❌ |
| `pip_freeze` | 0.26247675779999324 | 0.2654583729999899 | -1.14% | -1.12% | 0.99x | ❌ |
| `platform_info` | 2.6247615893445727e-06 | 2.9025151632906337e-06 | -10.58% | -9.57% | 0.90x | ❌ |
| `python_version` | 9.92942348210697e-07 | 1.1973967682133776e-06 | -20.59% | -17.07% | 0.83x | ❌ |
