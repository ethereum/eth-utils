#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2576652953429928e-05 | 2.239602750208387e-05 | -78.08% | -43.84% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.570165459035757e-06 | 1.3843169349530131e-06 | 11.84% | 13.43% | 1.13x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.933771859281436e-06 | 1.3868802470076125e-05 | -55.24% | -35.58% | 0.64x | ❌ |
| `return_arg_type[float-pos0]` | 2.6268440563999433e-06 | 2.2896124387395407e-06 | 12.84% | 14.73% | 1.15x | ✅ |
| `return_arg_type[int-pos0]` | 2.9016141238494254e-06 | 2.7040856732104776e-06 | 6.81% | 7.30% | 1.07x | ✅ |
| `return_arg_type[int-pos1]` | 2.853656048862934e-06 | 2.6399571028519247e-06 | 7.49% | 8.09% | 1.08x | ✅ |
| `return_arg_type[str-pos0]` | 2.9587412130157235e-06 | 3.218969957377334e-06 | -8.80% | -8.08% | 0.92x | ❌ |
| `return_arg_type[str-pos1]` | 2.890714533639218e-06 | 3.1303973527423785e-06 | -8.29% | -7.66% | 0.92x | ❌ |
