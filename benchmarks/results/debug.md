#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.2954959006000081 | 0.29556983920001584 | -0.03% | -0.03% | 1.00x | ❌ |
| `pip_freeze` | 0.29687956360000956 | 0.2938529419999895 | 1.02% | 1.03% | 1.01x | ✅ |
| `platform_info` | 2.567499348666797e-06 | 3.0249383337364283e-06 | -17.82% | -15.12% | 0.85x | ❌ |
| `python_version` | 9.927769350209907e-07 | 1.3376363978173657e-06 | -34.74% | -25.78% | 0.74x | ❌ |
