#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2533170253664587e-05 | 2.2010585769322775e-05 | -75.62% | -43.06% | 0.57x | ❌ |
| `replace_exceptions[no-exception]` | 1.6390552524610157e-06 | 1.5228002313415567e-06 | 7.09% | 7.63% | 1.08x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.800044247882704e-06 | 1.3663107084889243e-05 | -55.26% | -35.59% | 0.64x | ❌ |
| `return_arg_type[float-pos0]` | 2.5758714641683533e-06 | 2.350189912263847e-06 | 8.76% | 9.60% | 1.10x | ✅ |
| `return_arg_type[int-pos0]` | 2.9040492073854156e-06 | 2.6992707991637452e-06 | 7.05% | 7.59% | 1.08x | ✅ |
| `return_arg_type[int-pos1]` | 2.8839064733240923e-06 | 2.630676403031705e-06 | 8.78% | 9.63% | 1.10x | ✅ |
| `return_arg_type[str-pos0]` | 2.9620841508494647e-06 | 3.319743305123535e-06 | -12.07% | -10.77% | 0.89x | ❌ |
| `return_arg_type[str-pos1]` | 2.888415744598565e-06 | 3.31760230223392e-06 | -14.86% | -12.94% | 0.87x | ❌ |
