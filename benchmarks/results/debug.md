#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.29128971379999485 | 0.2883440950000022 | 1.01% | 1.02% | 1.01x | ✅ |
| `pip_freeze` | 0.29062196620000125 | 0.28930039780000244 | 0.45% | 0.46% | 1.00x | ✅ |
| `platform_info` | 2.553574607268941e-06 | 3.050548979242712e-06 | -19.46% | -16.29% | 0.84x | ❌ |
| `python_version` | 9.88207639983159e-07 | 1.3060731065247843e-06 | -32.17% | -24.34% | 0.76x | ❌ |
