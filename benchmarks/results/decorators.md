#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2655292542223168e-05 | 2.2307979252879972e-05 | -76.27% | -43.27% | 0.57x | ❌ |
| `replace_exceptions[no-exception]` | 1.5824204714582545e-06 | 1.4481644743179737e-06 | 8.48% | 9.27% | 1.09x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.767168305885048e-06 | 1.3765835164929246e-05 | -57.02% | -36.31% | 0.64x | ❌ |
| `return_arg_type[float-pos0]` | 2.587411665051841e-06 | 2.374172884152048e-06 | 8.24% | 8.98% | 1.09x | ✅ |
| `return_arg_type[int-pos0]` | 2.9362428325437866e-06 | 2.7253027288868347e-06 | 7.18% | 7.74% | 1.08x | ✅ |
| `return_arg_type[int-pos1]` | 2.8854008728712057e-06 | 2.6766362251053628e-06 | 7.24% | 7.80% | 1.08x | ✅ |
| `return_arg_type[str-pos0]` | 2.9985846121186736e-06 | 3.4285742186697053e-06 | -14.34% | -12.54% | 0.87x | ❌ |
| `return_arg_type[str-pos1]` | 2.9796595021320824e-06 | 3.433755258309206e-06 | -15.24% | -13.22% | 0.87x | ❌ |
