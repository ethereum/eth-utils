#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.29194655079999166 | 0.29177135500000306 | 0.06% | 0.06% | 1.00x | ✅ |
| `pip_freeze` | 0.29287269000001287 | 0.2915427762000036 | 0.45% | 0.46% | 1.00x | ✅ |
| `platform_info` | 2.538918526939231e-06 | 3.0001573260618504e-06 | -18.17% | -15.37% | 0.85x | ❌ |
| `python_version` | 9.95827924547358e-07 | 1.2034247895265007e-06 | -20.85% | -17.25% | 0.83x | ❌ |
