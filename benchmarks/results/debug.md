#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2924493676000111 | 0.2913077969999904 | 0.39% | 0.39% | 1.00x | ✅ |
| `pip_freeze` | 0.29110234760003095 | 0.29134832099998675 | -0.08% | -0.08% | 1.00x | ❌ |
| `platform_info` | 2.7523854157311214e-06 | 3.2599741401152934e-06 | -18.44% | -15.57% | 0.84x | ❌ |
| `python_version` | 9.961016772040063e-07 | 1.1741490378017667e-06 | -17.87% | -15.16% | 0.85x | ❌ |
