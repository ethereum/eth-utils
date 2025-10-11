#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2402795320628764e-05 | 2.257456828292827e-05 | -82.01% | -45.06% | 0.55x | ❌ |
| `replace_exceptions[no-exception]` | 1.5497249560799803e-06 | 1.3726631773593524e-06 | 11.43% | 12.90% | 1.13x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.809791131458333e-06 | 1.412285432080547e-05 | -60.31% | -37.62% | 0.62x | ❌ |
| `return_arg_type[float-pos0]` | 2.568374153079246e-06 | 2.2334155744159716e-06 | 13.04% | 15.00% | 1.15x | ✅ |
| `return_arg_type[int-pos0]` | 2.9141177670156747e-06 | 2.622664910982216e-06 | 10.00% | 11.11% | 1.11x | ✅ |
| `return_arg_type[int-pos1]` | 2.8801158683445456e-06 | 2.5594894025032813e-06 | 11.13% | 12.53% | 1.13x | ✅ |
| `return_arg_type[str-pos0]` | 3.0171885853339017e-06 | 3.174804072791977e-06 | -5.22% | -4.96% | 0.95x | ❌ |
| `return_arg_type[str-pos1]` | 2.9006315340698667e-06 | 3.179452630093257e-06 | -9.61% | -8.77% | 0.91x | ❌ |
