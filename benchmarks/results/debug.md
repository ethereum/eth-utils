#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2956306884000014 | 0.295087782600001 | 0.18% | 0.18% | 1.00x | ✅ |
| `pip_freeze` | 0.2962605840000151 | 0.29681046680000234 | -0.19% | -0.19% | 1.00x | ❌ |
| `platform_info` | 2.6061114164098587e-06 | 3.0333981664053963e-06 | -16.40% | -14.09% | 0.86x | ❌ |
| `python_version` | 1.0007803004258159e-06 | 1.1497263353676198e-06 | -14.88% | -12.95% | 0.87x | ❌ |
