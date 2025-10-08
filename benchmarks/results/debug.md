#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2948580157999913 | 0.29420715720001456 | 0.22% | 0.22% | 1.00x | ✅ |
| `pip_freeze` | 0.29449884699999984 | 0.2931818315999976 | 0.45% | 0.45% | 1.00x | ✅ |
| `platform_info` | 2.5903622378785264e-06 | 3.0851733870192906e-06 | -19.10% | -16.04% | 0.84x | ❌ |
| `python_version` | 1.0076402106898076e-06 | 1.1618036344154018e-06 | -15.30% | -13.27% | 0.87x | ❌ |
