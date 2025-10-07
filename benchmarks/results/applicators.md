#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.495728071485805e-06 | 8.691965345111001e-06 | -15.96% | -13.76% | 0.86x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.453311330131052e-06 | 8.609898027529052e-06 | -15.52% | -13.43% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.430541629283226e-06 | 8.647126115027464e-06 | -16.37% | -14.07% | 0.86x | ❌ |
| `apply_formatter_if[condition-false]` | 8.835916461496593e-07 | 9.945796247569088e-07 | -12.56% | -11.16% | 0.89x | ❌ |
| `apply_formatter_if[condition-true]` | 1.0866630795989378e-06 | 1.4296545073243328e-06 | -31.56% | -23.99% | 0.76x | ❌ |
| `apply_formatter_to_array[empty]` | 4.694319408274463e-06 | 5.2182307240796765e-06 | -11.16% | -10.04% | 0.90x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.085792097011784e-06 | 6.1568979346509505e-06 | -1.17% | -1.15% | 0.99x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.123480931504024e-06 | 5.305807566064428e-06 | -3.56% | -3.44% | 0.97x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 9.719791361524772e-06 | 1.2950698260888124e-05 | -33.24% | -24.95% | 0.75x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 9.382269986114073e-06 | 1.2244415227810973e-05 | -30.51% | -23.38% | 0.77x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.032169059511648e-06 | 6.172114809460425e-06 | 23.16% | 30.14% | 1.30x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 8.755495456831378e-06 | 6.839257056237545e-06 | 21.89% | 28.02% | 1.28x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.230984172153363e-06 | 7.4091029282691925e-06 | 19.74% | 24.59% | 1.25x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 9.7821480020846e-06 | 7.948597982761143e-06 | 18.74% | 23.07% | 1.23x | ✅ |
| `apply_key_map[empty]` | 1.3834441342047467e-05 | 1.1392820211416418e-05 | 17.65% | 21.43% | 1.21x | ✅ |
| `apply_key_map[single-key]` | 1.5932620825303823e-05 | 1.3453612317149422e-05 | 15.56% | 18.43% | 1.18x | ✅ |
| `apply_key_map[two-keys]` | 1.799314566456102e-05 | 1.5433721863030938e-05 | 14.22% | 16.58% | 1.17x | ✅ |
| `apply_key_map[unrelated-key]` | 1.7287105172115597e-05 | 1.4506123062080022e-05 | 16.09% | 19.17% | 1.19x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.5350717966186908e-06 | 1.4959271290552945e-06 | 2.55% | 2.62% | 1.03x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.033647005083654e-06 | 1.9472357283935563e-06 | 4.25% | 4.44% | 1.04x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.00030782177885505885 | 0.0009754906002468662 | -216.90% | -68.44% | 0.32x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0005032832971935742 | 0.001210974639601312 | -140.61% | -58.44% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.00045285156230143864 | 0.0011086866017575247 | -144.82% | -59.15% | 0.41x | ❌ |
