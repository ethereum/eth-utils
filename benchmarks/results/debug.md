#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2992623146000142 | 0.3011505436000107 | -0.63% | -0.63% | 0.99x | ❌ |
| `pip_freeze` | 0.29656918040000163 | 0.2944549697999719 | 0.71% | 0.72% | 1.01x | ✅ |
| `platform_info` | 2.7335455705933585e-06 | 3.305846422231648e-06 | -20.94% | -17.31% | 0.83x | ❌ |
| `python_version` | 9.829997777173866e-07 | 1.182573954905412e-06 | -20.30% | -16.88% | 0.83x | ❌ |
