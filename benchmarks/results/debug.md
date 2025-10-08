#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.3062015323999958 | 0.296928450200005 | 3.03% | 3.12% | 1.03x | ✅ |
| `pip_freeze` | 0.2999900124000078 | 0.3129789209999899 | -4.33% | -4.15% | 0.96x | ❌ |
| `platform_info` | 2.5962383489626974e-06 | 3.1247787599059033e-06 | -20.36% | -16.91% | 0.83x | ❌ |
| `python_version` | 1.0719165090046074e-06 | 1.2333339835689023e-06 | -15.06% | -13.09% | 0.87x | ❌ |
