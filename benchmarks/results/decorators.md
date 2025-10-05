#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2572255318233436e-05 | 2.2308677590893503e-05 | -77.44% | -43.64% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5493350980316267e-06 | 1.3629366014816539e-06 | 12.03% | 13.68% | 1.14x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.872958420842533e-06 | 1.3511201820327547e-05 | -52.27% | -34.33% | 0.66x | ❌ |
| `return_arg_type[float-pos0]` | 2.587255835319237e-06 | 2.2841607787801443e-06 | 11.71% | 13.27% | 1.13x | ✅ |
| `return_arg_type[int-pos0]` | 2.9353156144729173e-06 | 2.6814092206875716e-06 | 8.65% | 9.47% | 1.09x | ✅ |
| `return_arg_type[int-pos1]` | 2.890905062612663e-06 | 2.632502857262471e-06 | 8.94% | 9.82% | 1.10x | ✅ |
| `return_arg_type[str-pos0]` | 2.9774017798397737e-06 | 3.214398657224198e-06 | -7.96% | -7.37% | 0.93x | ❌ |
| `return_arg_type[str-pos1]` | 2.917805433546137e-06 | 3.129509750981697e-06 | -7.26% | -6.76% | 0.93x | ❌ |
