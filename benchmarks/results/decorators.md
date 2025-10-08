#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2531497410792176e-05 | 2.265011357767296e-05 | -80.75% | -44.67% | 0.55x | ❌ |
| `replace_exceptions[no-exception]` | 1.535584284579466e-06 | 1.4106460708748581e-06 | 8.14% | 8.86% | 1.09x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.847588480501527e-06 | 1.3864545508846826e-05 | -56.70% | -36.19% | 0.64x | ❌ |
| `return_arg_type[float-pos0]` | 2.5647563250023826e-06 | 2.3254895571760775e-06 | 9.33% | 10.29% | 1.10x | ✅ |
| `return_arg_type[int-pos0]` | 2.9398487052753236e-06 | 2.6988087272236628e-06 | 8.20% | 8.93% | 1.09x | ✅ |
| `return_arg_type[int-pos1]` | 2.8822952634097863e-06 | 2.6205358286112597e-06 | 9.08% | 9.99% | 1.10x | ✅ |
| `return_arg_type[str-pos0]` | 3.0500926168858395e-06 | 3.235388882381382e-06 | -6.08% | -5.73% | 0.94x | ❌ |
| `return_arg_type[str-pos1]` | 3.0039726960183683e-06 | 3.1477441549340836e-06 | -4.79% | -4.57% | 0.95x | ❌ |
