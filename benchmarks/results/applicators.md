#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.919123487320889e-06 | 9.39486202028029e-06 | -18.64% | -15.71% | 0.84x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.894574717190907e-06 | 9.547716773986437e-06 | -20.94% | -17.31% | 0.83x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.812319291990937e-06 | 9.705243621907847e-06 | -24.23% | -19.50% | 0.80x | ❌ |
| `apply_formatter_if[condition-false]` | 9.925249331576489e-07 | 9.747184406818547e-07 | 1.79% | 1.83% | 1.02x | ✅ |
| `apply_formatter_if[condition-true]` | 1.239275526445284e-06 | 1.4164245757452533e-06 | -14.29% | -12.51% | 0.87x | ❌ |
| `apply_formatter_to_array[empty]` | 5.169612881113137e-06 | 6.066755807741008e-06 | -17.35% | -14.79% | 0.85x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.286344298001589e-06 | 7.67155715704499e-06 | -22.04% | -18.06% | 0.82x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.522002583572705e-06 | 6.8417887447965025e-06 | -23.90% | -19.29% | 0.81x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.048106445441698e-05 | 1.5404877008485565e-05 | -46.98% | -31.96% | 0.68x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 9.981461043833836e-06 | 1.4976246367189069e-05 | -50.04% | -33.35% | 0.67x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 9.068906284585029e-06 | 6.954055244696332e-06 | 23.32% | 30.41% | 1.30x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.188618997436123e-06 | 7.2944038564943416e-06 | 20.61% | 25.97% | 1.26x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.813757653945692e-06 | 7.714338464954117e-06 | 21.39% | 27.21% | 1.27x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0386316540741042e-05 | 8.200150575633438e-06 | 21.05% | 26.66% | 1.27x | ✅ |
| `apply_key_map[empty]` | 1.470574767917421e-05 | 1.3673329008193066e-05 | 7.02% | 7.55% | 1.08x | ✅ |
| `apply_key_map[single-key]` | 1.7128531187096095e-05 | 1.6572578502974796e-05 | 3.25% | 3.35% | 1.03x | ✅ |
| `apply_key_map[two-keys]` | 1.9201492117287023e-05 | 1.867695102792112e-05 | 2.73% | 2.81% | 1.03x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8985792276095832e-05 | 1.7576479011283254e-05 | 7.42% | 8.02% | 1.08x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.688387813790244e-06 | 1.6185911846703423e-06 | 4.13% | 4.31% | 1.04x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2235947681198796e-06 | 1.9542440188581846e-06 | 12.11% | 13.78% | 1.14x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.000388619341693571 | 0.0003144454767550356 | 19.09% | 23.59% | 1.24x | ✅ |
| `combine_argument_formatters[three-formatters]` | 0.0005702573610007708 | 0.000835698501502772 | -46.55% | -31.76% | 0.68x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0004980690389455429 | 0.0005809910020093366 | -16.65% | -14.27% | 0.86x | ❌ |
