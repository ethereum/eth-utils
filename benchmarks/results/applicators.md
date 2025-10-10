#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.048183381301494e-06 | 9.071649838640269e-06 | -12.72% | -11.28% | 0.89x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.988575006068828e-06 | 9.107009821060046e-06 | -14.00% | -12.28% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.96829395393171e-06 | 9.16988430892073e-06 | -15.08% | -13.10% | 0.87x | ❌ |
| `apply_formatter_if[condition-false]` | 9.215544244636397e-07 | 1.086554510606246e-06 | -17.90% | -15.19% | 0.85x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1392696330632013e-06 | 1.5004302431757148e-06 | -31.70% | -24.07% | 0.76x | ❌ |
| `apply_formatter_to_array[empty]` | 5.3797056238768766e-06 | 5.354987928874138e-06 | 0.46% | 0.46% | 1.00x | ✅ |
| `apply_formatter_to_array[multi-item]` | 6.317411761902171e-06 | 6.723952182401008e-06 | -6.44% | -6.05% | 0.94x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.572165743990471e-06 | 5.981317290112366e-06 | -7.34% | -6.84% | 0.93x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.038073492492657e-05 | 1.2889439284828256e-05 | -24.17% | -19.46% | 0.81x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 9.981940969541212e-06 | 1.2260600583475052e-05 | -22.83% | -18.59% | 0.81x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.931894354449165e-06 | 6.237160042750314e-06 | 30.17% | 43.20% | 1.43x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.430046243021417e-06 | 6.5650348446060525e-06 | 30.38% | 43.64% | 1.44x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.867923692748275e-06 | 7.053641252505773e-06 | 28.52% | 39.90% | 1.40x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.040610720332272e-05 | 7.3940544616008165e-06 | 28.95% | 40.74% | 1.41x | ✅ |
| `apply_key_map[empty]` | 1.4869060058180557e-05 | 1.213115117560327e-05 | 18.41% | 22.57% | 1.23x | ✅ |
| `apply_key_map[single-key]` | 1.7401350002899108e-05 | 1.4619968451666727e-05 | 15.98% | 19.02% | 1.19x | ✅ |
| `apply_key_map[two-keys]` | 1.9623261472298997e-05 | 1.6585551646489713e-05 | 15.48% | 18.32% | 1.18x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8709872427827362e-05 | 1.5887743042422556e-05 | 15.08% | 17.76% | 1.18x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.669667700955258e-06 | 1.5451643241811746e-06 | 7.46% | 8.06% | 1.08x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.157992333765132e-06 | 1.8972905169247285e-06 | 12.08% | 13.74% | 1.14x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003412315127431386 | 0.0014187844948897678 | -315.78% | -75.95% | 0.24x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006316393442514066 | 0.0015156764461036702 | -139.96% | -58.33% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005051097365118328 | 0.0013964555092015132 | -176.47% | -63.83% | 0.36x | ❌ |
