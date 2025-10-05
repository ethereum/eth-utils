#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.012295183222255e-06 | 9.058711090582978e-06 | -13.06% | -11.55% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 8.002952795139382e-06 | 9.031327154054129e-06 | -12.85% | -11.39% | 0.89x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 8.050755695646195e-06 | 9.09846181888409e-06 | -13.01% | -11.52% | 0.88x | ❌ |
| `apply_formatter_if[condition-false]` | 9.195039385834682e-07 | 1.0827891905011473e-06 | -17.76% | -15.08% | 0.85x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1500752972866168e-06 | 1.5021575110326088e-06 | -30.61% | -23.44% | 0.77x | ❌ |
| `apply_formatter_to_array[empty]` | 5.199072026794483e-06 | 5.258841333395739e-06 | -1.15% | -1.14% | 0.99x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.5778588942588265e-06 | 6.568311669516326e-06 | 0.15% | 0.15% | 1.00x | ✅ |
| `apply_formatter_to_array[single-item]` | 5.6486348970156806e-06 | 5.888479209365696e-06 | -4.25% | -4.07% | 0.96x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0601388631375545e-05 | 1.3285108918334398e-05 | -25.31% | -20.20% | 0.80x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0369946922272171e-05 | 1.2625817795034892e-05 | -21.75% | -17.87% | 0.82x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.79954273874561e-06 | 5.999205676775525e-06 | 31.82% | 46.68% | 1.47x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.212925349071432e-06 | 6.342579652042106e-06 | 31.16% | 45.26% | 1.45x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.700913254917684e-06 | 6.762650822547375e-06 | 30.29% | 43.45% | 1.43x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0321731039700742e-05 | 7.2738476651141954e-06 | 29.53% | 41.90% | 1.42x | ✅ |
| `apply_key_map[empty]` | 1.4796151750789935e-05 | 1.2402778452431635e-05 | 16.18% | 19.30% | 1.19x | ✅ |
| `apply_key_map[single-key]` | 1.7262596599770947e-05 | 1.468102456514658e-05 | 14.95% | 17.58% | 1.18x | ✅ |
| `apply_key_map[two-keys]` | 1.9320748545409313e-05 | 1.696790855038216e-05 | 12.18% | 13.87% | 1.14x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8598165628944855e-05 | 1.5914333675774864e-05 | 14.43% | 16.86% | 1.17x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6909759459987563e-06 | 1.5227579156352795e-06 | 9.95% | 11.05% | 1.11x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2057750930889337e-06 | 1.875638737321486e-06 | 14.97% | 17.60% | 1.18x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003485556697392148 | 0.0013940410241474895 | -299.95% | -75.00% | 0.25x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006292712762239694 | 0.001502488661995576 | -138.77% | -58.12% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005126731086419775 | 0.0013864084214377066 | -170.43% | -63.02% | 0.37x | ❌ |
