#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.160905559891913e-06 | 9.307830625417949e-06 | -14.05% | -12.32% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 8.061444241689626e-06 | 9.206055103367171e-06 | -14.20% | -12.43% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 8.050749862525688e-06 | 9.249488025036346e-06 | -14.89% | -12.96% | 0.87x | ❌ |
| `apply_formatter_if[condition-false]` | 9.154556345142989e-07 | 1.077024965703752e-06 | -17.65% | -15.00% | 0.85x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1624326771005997e-06 | 1.497414566299854e-06 | -28.82% | -22.37% | 0.78x | ❌ |
| `apply_formatter_to_array[empty]` | 5.111787391662018e-06 | 5.473989985885042e-06 | -7.09% | -6.62% | 0.93x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.297780808697898e-06 | 6.859338005815505e-06 | -8.92% | -8.19% | 0.92x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.5071868090208255e-06 | 6.112263929992642e-06 | -10.99% | -9.90% | 0.90x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0355246991014521e-05 | 1.3089852945545364e-05 | -26.41% | -20.89% | 0.79x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0015749287274176e-05 | 1.2355517128602999e-05 | -23.36% | -18.94% | 0.81x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.842579909270743e-06 | 6.183203590140762e-06 | 30.07% | 43.01% | 1.43x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.128532845935984e-06 | 6.568387197294362e-06 | 28.05% | 38.98% | 1.39x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.656969044773131e-06 | 7.021620123367418e-06 | 27.29% | 37.53% | 1.38x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 9.990496363969994e-06 | 7.369987982026217e-06 | 26.23% | 35.56% | 1.36x | ✅ |
| `apply_key_map[empty]` | 1.4596020714404224e-05 | 1.2170382256292734e-05 | 16.62% | 19.93% | 1.20x | ✅ |
| `apply_key_map[single-key]` | 1.7067119781629915e-05 | 1.4617284187584438e-05 | 14.35% | 16.76% | 1.17x | ✅ |
| `apply_key_map[two-keys]` | 1.9243752678310116e-05 | 1.6612549979560838e-05 | 13.67% | 15.84% | 1.16x | ✅ |
| `apply_key_map[unrelated-key]` | 1.842923198511318e-05 | 1.5797256534461362e-05 | 14.28% | 16.66% | 1.17x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.787813862943538e-06 | 1.5231633136129307e-06 | 14.80% | 17.38% | 1.17x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.3313983609430033e-06 | 1.8768012106344983e-06 | 19.50% | 24.22% | 1.24x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003510129519818348 | 0.0012597137762095565 | -258.88% | -72.14% | 0.28x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006373486807784596 | 0.0015119269799660758 | -137.22% | -57.85% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.00051547254079165 | 0.0014015637811017254 | -171.90% | -63.22% | 0.37x | ❌ |
