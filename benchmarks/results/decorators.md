#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2489702852690908e-05 | 2.2934995448517833e-05 | -83.63% | -45.54% | 0.54x | ❌ |
| `replace_exceptions[no-exception]` | 1.5897107923091092e-06 | 1.404154769614537e-06 | 11.67% | 13.21% | 1.13x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.843914771292295e-06 | 1.4080479307227265e-05 | -59.21% | -37.19% | 0.63x | ❌ |
| `return_arg_type[float-pos0]` | 2.6374920289982936e-06 | 2.2718119201001303e-06 | 13.86% | 16.10% | 1.16x | ✅ |
| `return_arg_type[int-pos0]` | 3.010736044570945e-06 | 2.532287702814717e-06 | 15.89% | 18.89% | 1.19x | ✅ |
| `return_arg_type[int-pos1]` | 2.9916681901283294e-06 | 2.4855430291114546e-06 | 16.92% | 20.36% | 1.20x | ✅ |
| `return_arg_type[str-pos0]` | 3.09196950790814e-06 | 3.1884421441703445e-06 | -3.12% | -3.03% | 0.97x | ❌ |
| `return_arg_type[str-pos1]` | 2.9914310073130386e-06 | 3.2490156926500693e-06 | -8.61% | -7.93% | 0.92x | ❌ |
