#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.29278194519999945 | 0.29112986859998957 | 0.56% | 0.57% | 1.01x | ✅ |
| `pip_freeze` | 0.29376971459998913 | 0.2892336905999969 | 1.54% | 1.57% | 1.02x | ✅ |
| `platform_info` | 2.5911187499616515e-06 | 3.0128606839791504e-06 | -16.28% | -14.00% | 0.86x | ❌ |
| `python_version` | 1.0145357131934702e-06 | 1.2877841005472158e-06 | -26.93% | -21.22% | 0.79x | ❌ |
