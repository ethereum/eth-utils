#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2613452109132066e-05 | 2.2286293637834774e-05 | -76.69% | -43.40% | 0.57x | ❌ |
| `replace_exceptions[no-exception]` | 1.5685447320151176e-06 | 1.4281052380659782e-06 | 8.95% | 9.83% | 1.10x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.931966634936718e-06 | 1.3685303428565128e-05 | -53.22% | -34.73% | 0.65x | ❌ |
| `return_arg_type[float-pos0]` | 2.628533963014897e-06 | 2.2035183155314422e-06 | 16.17% | 19.29% | 1.19x | ✅ |
| `return_arg_type[int-pos0]` | 2.915519380396903e-06 | 2.5221106389640516e-06 | 13.49% | 15.60% | 1.16x | ✅ |
| `return_arg_type[int-pos1]` | 2.8752158633063134e-06 | 2.4931764826614562e-06 | 13.29% | 15.32% | 1.15x | ✅ |
| `return_arg_type[str-pos0]` | 2.9857285471308344e-06 | 3.210145955453564e-06 | -7.52% | -6.99% | 0.93x | ❌ |
| `return_arg_type[str-pos1]` | 2.93941692496057e-06 | 3.1093111733631567e-06 | -5.78% | -5.46% | 0.95x | ❌ |
