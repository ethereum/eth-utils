#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2448212686138465e-05 | 2.2020395713920994e-05 | -76.90% | -43.47% | 0.57x | ❌ |
| `replace_exceptions[no-exception]` | 1.564214273710411e-06 | 1.4709769438845538e-06 | 5.96% | 6.34% | 1.06x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.906724900859758e-06 | 1.3655596852150516e-05 | -53.32% | -34.78% | 0.65x | ❌ |
| `return_arg_type[float-pos0]` | 2.618846001303042e-06 | 2.3400439962947463e-06 | 10.65% | 11.91% | 1.12x | ✅ |
| `return_arg_type[int-pos0]` | 2.9602695267409303e-06 | 2.7848834318905636e-06 | 5.92% | 6.30% | 1.06x | ✅ |
| `return_arg_type[int-pos1]` | 2.8389222735360345e-06 | 2.741090080908551e-06 | 3.45% | 3.57% | 1.04x | ✅ |
| `return_arg_type[str-pos0]` | 3.020403683307606e-06 | 3.450931691067239e-06 | -14.25% | -12.48% | 0.88x | ❌ |
| `return_arg_type[str-pos1]` | 2.9731604818171626e-06 | 3.463656407151002e-06 | -16.50% | -14.16% | 0.86x | ❌ |
