#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.29108064239999293 | 0.28755624979999084 | 1.21% | 1.23% | 1.01x | ✅ |
| `pip_freeze` | 0.2875324352000007 | 0.28875984519999065 | -0.43% | -0.43% | 1.00x | ❌ |
| `platform_info` | 2.7666264450131104e-06 | 3.3726318782111983e-06 | -21.90% | -17.97% | 0.82x | ❌ |
| `python_version` | 1.0167221348060401e-06 | 1.2150108139701917e-06 | -19.50% | -16.32% | 0.84x | ❌ |
