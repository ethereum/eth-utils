#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.29357038059999924 | 0.29281264920000466 | 0.26% | 0.26% | 1.00x | ✅ |
| `pip_freeze` | 0.29305825040000855 | 0.2939432915999987 | -0.30% | -0.30% | 1.00x | ❌ |
| `platform_info` | 2.801041343492246e-06 | 3.3361373879502366e-06 | -19.10% | -16.04% | 0.84x | ❌ |
| `python_version` | 9.92482155910147e-07 | 1.2416414159619644e-06 | -25.10% | -20.07% | 0.80x | ❌ |
