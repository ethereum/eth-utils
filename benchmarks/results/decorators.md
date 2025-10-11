#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2483835695506098e-05 | 2.243885169658481e-05 | -79.74% | -44.37% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.548451959467296e-06 | 1.3625570881378013e-06 | 12.01% | 13.64% | 1.14x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.856996067256836e-06 | 1.369610080969587e-05 | -54.64% | -35.33% | 0.65x | ❌ |
| `return_arg_type[float-pos0]` | 2.7068523132060467e-06 | 2.3226034212758287e-06 | 14.20% | 16.54% | 1.17x | ✅ |
| `return_arg_type[int-pos0]` | 2.969230706059819e-06 | 2.829126884518039e-06 | 4.72% | 4.95% | 1.05x | ✅ |
| `return_arg_type[int-pos1]` | 2.9049225524966544e-06 | 2.5881204682506976e-06 | 10.91% | 12.24% | 1.12x | ✅ |
| `return_arg_type[str-pos0]` | 2.986391082792956e-06 | 3.1406828867740274e-06 | -5.17% | -4.91% | 0.95x | ❌ |
| `return_arg_type[str-pos1]` | 2.9160425516293815e-06 | 3.095086168605487e-06 | -6.14% | -5.78% | 0.94x | ❌ |
