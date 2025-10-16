#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2392133125018504e-05 | 2.1898729721747044e-05 | -76.71% | -43.41% | 0.57x | ❌ |
| `replace_exceptions[no-exception]` | 1.5601017990064478e-06 | 1.467676631696428e-06 | 5.92% | 6.30% | 1.06x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.785834742136822e-06 | 1.337433263912583e-05 | -52.23% | -34.31% | 0.66x | ❌ |
| `return_arg_type[float-pos0]` | 2.587646798948013e-06 | 2.3489541418262432e-06 | 9.22% | 10.16% | 1.10x | ✅ |
| `return_arg_type[int-pos0]` | 2.8882846318195008e-06 | 2.717554389983003e-06 | 5.91% | 6.28% | 1.06x | ✅ |
| `return_arg_type[int-pos1]` | 2.863573370648157e-06 | 2.6516426697729445e-06 | 7.40% | 7.99% | 1.08x | ✅ |
| `return_arg_type[str-pos0]` | 2.958795399317367e-06 | 3.3759401548510194e-06 | -14.10% | -12.36% | 0.88x | ❌ |
| `return_arg_type[str-pos1]` | 2.88978477759898e-06 | 3.3627931170907563e-06 | -16.37% | -14.07% | 0.86x | ❌ |
