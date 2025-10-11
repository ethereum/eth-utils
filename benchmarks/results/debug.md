#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.29380204339998955 | 0.29332902840001224 | 0.16% | 0.16% | 1.00x | ✅ |
| `pip_freeze` | 0.2955809670000008 | 0.29488619299997937 | 0.24% | 0.24% | 1.00x | ✅ |
| `platform_info` | 2.5517490249271504e-06 | 3.062110834649169e-06 | -20.00% | -16.67% | 0.83x | ❌ |
| `python_version` | 1.022273915072146e-06 | 1.1649071114650617e-06 | -13.95% | -12.24% | 0.88x | ❌ |
