#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.30179628460000457 | 0.30200687179999475 | -0.07% | -0.07% | 1.00x | ❌ |
| `pip_freeze` | 0.3022864340000183 | 0.2989830012000084 | 1.09% | 1.10% | 1.01x | ✅ |
| `platform_info` | 2.812730399614682e-06 | 3.299786588882597e-06 | -17.32% | -14.76% | 0.85x | ❌ |
| `python_version` | 1.0209683172070705e-06 | 1.3066035333039416e-06 | -27.98% | -21.86% | 0.78x | ❌ |
