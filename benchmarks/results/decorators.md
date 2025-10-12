#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2421507656689364e-05 | 2.2071892565712295e-05 | -77.69% | -43.72% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5380845839235897e-06 | 1.6451500962077644e-06 | -6.96% | -6.51% | 0.93x | ❌ |
| `replace_exceptions[unmapped-exception]` | 8.815647631327321e-06 | 1.3526913934357202e-05 | -53.44% | -34.83% | 0.65x | ❌ |
| `return_arg_type[float-pos0]` | 2.6398087204242974e-06 | 2.3436307732864145e-06 | 11.22% | 12.64% | 1.13x | ✅ |
| `return_arg_type[int-pos0]` | 3.0105427689026054e-06 | 2.673323137490674e-06 | 11.20% | 12.61% | 1.13x | ✅ |
| `return_arg_type[int-pos1]` | 2.8738010271061543e-06 | 2.632022519324683e-06 | 8.41% | 9.19% | 1.09x | ✅ |
| `return_arg_type[str-pos0]` | 2.962574180358964e-06 | 3.353249302532911e-06 | -13.19% | -11.65% | 0.88x | ❌ |
| `return_arg_type[str-pos1]` | 2.9233186502498405e-06 | 3.2815390627909893e-06 | -12.25% | -10.92% | 0.89x | ❌ |
