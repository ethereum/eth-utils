#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.29190952540000126 | 0.29179313879999424 | 0.04% | 0.04% | 1.00x | ✅ |
| `pip_freeze` | 0.2919125828000119 | 0.29281907160000176 | -0.31% | -0.31% | 1.00x | ❌ |
| `platform_info` | 2.6336307267332094e-06 | 2.974789315412743e-06 | -12.95% | -11.47% | 0.89x | ❌ |
| `python_version` | 1.0210388267774992e-06 | 1.1697639328089665e-06 | -14.57% | -12.71% | 0.87x | ❌ |
