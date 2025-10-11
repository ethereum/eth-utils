#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2541495003102044e-05 | 2.2468348671059844e-05 | -79.15% | -44.18% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5828447975639506e-06 | 1.380413451703057e-06 | 12.79% | 14.66% | 1.15x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.799476679292535e-06 | 1.3781161324359462e-05 | -56.61% | -36.15% | 0.64x | ❌ |
| `return_arg_type[float-pos0]` | 2.5514406774839623e-06 | 2.3307449792738485e-06 | 8.65% | 9.47% | 1.09x | ✅ |
| `return_arg_type[int-pos0]` | 2.9338479594786297e-06 | 2.6894167435605676e-06 | 8.33% | 9.09% | 1.09x | ✅ |
| `return_arg_type[int-pos1]` | 2.911071450720709e-06 | 2.612149588760188e-06 | 10.27% | 11.44% | 1.11x | ✅ |
| `return_arg_type[str-pos0]` | 3.039073947971827e-06 | 3.1848999291932517e-06 | -4.80% | -4.58% | 0.95x | ❌ |
| `return_arg_type[str-pos1]` | 2.935319979169851e-06 | 3.148775233976127e-06 | -7.27% | -6.78% | 0.93x | ❌ |
