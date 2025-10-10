#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.29774406519998137 | 0.29607687800000804 | 0.56% | 0.56% | 1.01x | ✅ |
| `pip_freeze` | 0.2984505707999915 | 0.29614928599996804 | 0.77% | 0.78% | 1.01x | ✅ |
| `platform_info` | 2.7752686766777502e-06 | 3.2982372510779827e-06 | -18.84% | -15.86% | 0.84x | ❌ |
| `python_version` | 1.0099181142270587e-06 | 1.1654805464697774e-06 | -15.40% | -13.35% | 0.87x | ❌ |
