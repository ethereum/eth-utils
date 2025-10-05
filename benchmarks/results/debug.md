#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2883915427999909 | 0.28831626859996506 | 0.03% | 0.03% | 1.00x | ✅ |
| `pip_freeze` | 0.288862902199935 | 0.2878522779999912 | 0.35% | 0.35% | 1.00x | ✅ |
| `platform_info` | 2.566770818705303e-06 | 2.930192417158101e-06 | -14.16% | -12.40% | 0.88x | ❌ |
| `python_version` | 1.0044817415169781e-06 | 1.1620354751731042e-06 | -15.69% | -13.56% | 0.86x | ❌ |
