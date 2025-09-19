#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2479123837063099e-05 | 2.229895191398379e-05 | -78.69% | -44.04% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5805508792148266e-06 | 1.4028100593716472e-06 | 11.25% | 12.67% | 1.13x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.856014843355906e-06 | 1.337873037636581e-05 | -51.07% | -33.81% | 0.66x | ❌ |
| `return_arg_type[float-pos0]` | 2.5806982221588943e-06 | 2.239008084866132e-06 | 13.24% | 15.26% | 1.15x | ✅ |
| `return_arg_type[int-pos0]` | 2.9392259291643063e-06 | 2.520490876899275e-06 | 14.25% | 16.61% | 1.17x | ✅ |
| `return_arg_type[int-pos1]` | 2.9307764264913937e-06 | 2.44016988773871e-06 | 16.74% | 20.11% | 1.20x | ✅ |
| `return_arg_type[str-pos0]` | 3.0736133367443994e-06 | 3.2244721587318032e-06 | -4.91% | -4.68% | 0.95x | ❌ |
| `return_arg_type[str-pos1]` | 2.9807849579254477e-06 | 3.1512341595473408e-06 | -5.72% | -5.41% | 0.95x | ❌ |
