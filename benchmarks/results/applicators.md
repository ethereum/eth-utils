#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.855007576887097e-06 | 8.992567396239848e-06 | -14.48% | -12.65% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.808139680035954e-06 | 8.933186008760663e-06 | -14.41% | -12.59% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.831382943129005e-06 | 8.973842179287808e-06 | -14.59% | -12.73% | 0.87x | ❌ |
| `apply_formatter_if[condition-false]` | 9.2771182538051e-07 | 1.1129924339244168e-06 | -19.97% | -16.65% | 0.83x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1584646947964914e-06 | 1.5412534798422183e-06 | -33.04% | -24.84% | 0.75x | ❌ |
| `apply_formatter_to_array[empty]` | 5.101872905181305e-06 | 5.149027878991177e-06 | -0.92% | -0.92% | 0.99x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.226196568616253e-06 | 6.597363393222825e-06 | -5.96% | -5.63% | 0.94x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.4989111144359385e-06 | 5.849619716921442e-06 | -6.38% | -6.00% | 0.94x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0388772407129901e-05 | 1.3058266260824574e-05 | -25.70% | -20.44% | 0.80x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 9.948455272492825e-06 | 1.2446788430764592e-05 | -25.11% | -20.07% | 0.80x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.806996935715568e-06 | 5.98832071915432e-06 | 32.00% | 47.07% | 1.47x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.206900882638262e-06 | 6.3052511294002905e-06 | 31.52% | 46.02% | 1.46x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.807448719494927e-06 | 6.783169018353206e-06 | 30.84% | 44.59% | 1.45x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0405552178599892e-05 | 6.994629827428783e-06 | 32.78% | 48.76% | 1.49x | ✅ |
| `apply_key_map[empty]` | 1.469266864300729e-05 | 1.2060771788035253e-05 | 17.91% | 21.82% | 1.22x | ✅ |
| `apply_key_map[single-key]` | 1.7207250003536956e-05 | 1.4486264150927534e-05 | 15.81% | 18.78% | 1.19x | ✅ |
| `apply_key_map[two-keys]` | 1.9271671126322656e-05 | 1.655667302524556e-05 | 14.09% | 16.40% | 1.16x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8709482018165403e-05 | 1.5670097836650864e-05 | 16.25% | 19.40% | 1.19x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.7938029748418784e-06 | 1.544936583436072e-06 | 13.87% | 16.11% | 1.16x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.1913238421854633e-06 | 1.9012546602622473e-06 | 13.24% | 15.26% | 1.15x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003531092011772712 | 0.0013931807874468136 | -294.55% | -74.65% | 0.25x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006359550097697242 | 0.0014951269240308358 | -135.10% | -57.46% | 0.43x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005133983806066936 | 0.001383425850153039 | -169.46% | -62.89% | 0.37x | ❌ |
