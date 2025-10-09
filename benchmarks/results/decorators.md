#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2457375063633068e-05 | 2.2309384435675123e-05 | -79.09% | -44.16% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5575900836544186e-06 | 1.3591798768014923e-06 | 12.74% | 14.60% | 1.15x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.857185044547802e-06 | 1.3764463159867183e-05 | -55.40% | -35.65% | 0.64x | ❌ |
| `return_arg_type[float-pos0]` | 2.629812568388021e-06 | 2.289697541898062e-06 | 12.93% | 14.85% | 1.15x | ✅ |
| `return_arg_type[int-pos0]` | 2.966710716435496e-06 | 2.706681861840959e-06 | 8.76% | 9.61% | 1.10x | ✅ |
| `return_arg_type[int-pos1]` | 2.9175175799565085e-06 | 2.6275533751876513e-06 | 9.94% | 11.04% | 1.11x | ✅ |
| `return_arg_type[str-pos0]` | 3.0064643768746495e-06 | 3.177793363711627e-06 | -5.70% | -5.39% | 0.95x | ❌ |
| `return_arg_type[str-pos1]` | 2.937506911513947e-06 | 3.2111875980227093e-06 | -9.32% | -8.52% | 0.91x | ❌ |
