#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2931962712000086 | 0.29286912480001775 | 0.11% | 0.11% | 1.00x | ✅ |
| `pip_freeze` | 0.29233954159999487 | 0.30098954120001054 | -2.96% | -2.87% | 0.97x | ❌ |
| `platform_info` | 2.5488318123833657e-06 | 3.0457847793314237e-06 | -19.50% | -16.32% | 0.84x | ❌ |
| `python_version` | 1.0022420049301716e-06 | 1.1651861165374809e-06 | -16.26% | -13.98% | 0.86x | ❌ |
