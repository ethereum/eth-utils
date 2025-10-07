#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.1573287726320623e-05 | 2.171492554221084e-05 | -87.63% | -46.70% | 0.53x | ❌ |
| `replace_exceptions[no-exception]` | 1.4426877106237136e-06 | 1.3680048173622704e-06 | 5.18% | 5.46% | 1.05x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.148129996867199e-06 | 1.3357770947891492e-05 | -63.94% | -39.00% | 0.61x | ❌ |
| `return_arg_type[float-pos0]` | 2.337340277900797e-06 | 2.0667393547535958e-06 | 11.58% | 13.09% | 1.13x | ✅ |
| `return_arg_type[int-pos0]` | 2.7727760545418784e-06 | 2.531709462083341e-06 | 8.69% | 9.52% | 1.10x | ✅ |
| `return_arg_type[int-pos1]` | 2.733328568884749e-06 | 2.4730073250060017e-06 | 9.52% | 10.53% | 1.11x | ✅ |
| `return_arg_type[str-pos0]` | 2.7271097167899004e-06 | 3.0255862738531307e-06 | -10.94% | -9.87% | 0.90x | ❌ |
| `return_arg_type[str-pos1]` | 2.832455334826942e-06 | 3.0018226544398837e-06 | -5.98% | -5.64% | 0.94x | ❌ |
