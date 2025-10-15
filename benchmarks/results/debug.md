#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.30771728240000584 | 0.3107409393999774 | -0.98% | -0.97% | 0.99x | ❌ |
| `pip_freeze` | 0.31120161459999734 | 0.3142145124000194 | -0.97% | -0.96% | 0.99x | ❌ |
| `platform_info` | 2.7952879776532e-06 | 3.398766515635945e-06 | -21.59% | -17.76% | 0.82x | ❌ |
| `python_version` | 1.0234599844207333e-06 | 1.3420912709706976e-06 | -31.13% | -23.74% | 0.76x | ❌ |
