#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.291690738200009 | 0.2916066078000085 | 0.03% | 0.03% | 1.00x | ✅ |
| `pip_freeze` | 0.29232286059999524 | 0.2916911722000009 | 0.22% | 0.22% | 1.00x | ✅ |
| `platform_info` | 2.637176844727854e-06 | 3.0271594127533157e-06 | -14.79% | -12.88% | 0.87x | ❌ |
| `python_version` | 1.0117457684098953e-06 | 1.1860410697288674e-06 | -17.23% | -14.70% | 0.85x | ❌ |
