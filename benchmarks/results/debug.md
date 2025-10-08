#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.3057342966000192 | 0.3054186277999861 | 0.10% | 0.10% | 1.00x | ✅ |
| `pip_freeze` | 0.3116753882000012 | 0.3022801891999961 | 3.01% | 3.11% | 1.03x | ✅ |
| `platform_info` | 2.560726315661405e-06 | 3.031588682807485e-06 | -18.39% | -15.53% | 0.84x | ❌ |
| `python_version` | 1.0114684350216973e-06 | 1.191122473065679e-06 | -17.76% | -15.08% | 0.85x | ❌ |
