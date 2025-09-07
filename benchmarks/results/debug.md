#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2932347744000253 | 0.29089580259997094 | 0.80% | 0.80% | 1.01x | ✅ |
| `pip_freeze` | 0.29164228699996786 | 0.2911974273999931 | 0.15% | 0.15% | 1.00x | ✅ |
| `platform_info` | 2.6058849525196326e-06 | 2.9806652451121333e-06 | -14.38% | -12.57% | 0.87x | ❌ |
| `python_version` | 1.0347260133356932e-06 | 1.1886659947204249e-06 | -14.88% | -12.95% | 0.87x | ❌ |
