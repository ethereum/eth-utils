#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2549766881488564e-05 | 2.2540790340687682e-05 | -79.61% | -44.32% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5630737990398722e-06 | 1.411630140838154e-06 | 9.69% | 10.73% | 1.11x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.830245061797998e-06 | 1.3627690569636736e-05 | -54.33% | -35.20% | 0.65x | ❌ |
| `return_arg_type[float-pos0]` | 2.5816063273473595e-06 | 2.3302044139235645e-06 | 9.74% | 10.79% | 1.11x | ✅ |
| `return_arg_type[int-pos0]` | 2.9918508742406132e-06 | 2.5603249860133434e-06 | 14.42% | 16.85% | 1.17x | ✅ |
| `return_arg_type[int-pos1]` | 2.9433616760961695e-06 | 2.5237446794508596e-06 | 14.26% | 16.63% | 1.17x | ✅ |
| `return_arg_type[str-pos0]` | 3.0701764832820787e-06 | 3.259549100162683e-06 | -6.17% | -5.81% | 0.94x | ❌ |
| `return_arg_type[str-pos1]` | 2.9207748418822345e-06 | 3.1768198826379074e-06 | -8.77% | -8.06% | 0.92x | ❌ |
