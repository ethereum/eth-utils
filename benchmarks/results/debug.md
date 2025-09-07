#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2929699325999991 | 0.2915040470000349 | 0.50% | 0.50% | 1.01x | ✅ |
| `pip_freeze` | 0.2904917991999582 | 0.2970797165999784 | -2.27% | -2.22% | 0.98x | ❌ |
| `platform_info` | 2.5697409388316824e-06 | 3.120640300511136e-06 | -21.44% | -17.65% | 0.82x | ❌ |
| `python_version` | 1.0173479522045384e-06 | 1.377248508348853e-06 | -35.38% | -26.13% | 0.74x | ❌ |
