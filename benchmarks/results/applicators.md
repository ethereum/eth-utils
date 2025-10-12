#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.913229032413022e-06 | 9.462682155192039e-06 | -19.58% | -16.37% | 0.84x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.984134542863507e-06 | 9.302990337321154e-06 | -16.52% | -14.18% | 0.86x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.977235601295844e-06 | 9.34818274364072e-06 | -17.19% | -14.67% | 0.85x | ❌ |
| `apply_formatter_if[condition-false]` | 9.259732983639988e-07 | 1.064889115640598e-06 | -15.00% | -13.05% | 0.87x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1705795835155708e-06 | 1.53889689125949e-06 | -31.46% | -23.93% | 0.76x | ❌ |
| `apply_formatter_to_array[empty]` | 5.17587457957461e-06 | 5.435920906369369e-06 | -5.02% | -4.78% | 0.95x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.255213188910591e-06 | 6.796063815717786e-06 | -8.65% | -7.96% | 0.92x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.4859868493154805e-06 | 6.027736408877824e-06 | -9.88% | -8.99% | 0.91x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0233570666949944e-05 | 7.762783582312918e-06 | 24.14% | 31.83% | 1.32x | ✅ |
| `apply_formatters_to_dict[key-not-present]` | 9.914825757443862e-06 | 7.018969080065729e-06 | 29.21% | 41.26% | 1.41x | ✅ |
| `apply_formatters_to_sequence[1-item]` | 8.833352049015538e-06 | 6.222079226027966e-06 | 29.56% | 41.97% | 1.42x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.285480991148535e-06 | 6.607259567305459e-06 | 28.84% | 40.53% | 1.41x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.903311070884373e-06 | 7.084425506159557e-06 | 28.46% | 39.79% | 1.40x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0412663496453224e-05 | 7.600942997858156e-06 | 27.00% | 36.99% | 1.37x | ✅ |
| `apply_key_map[empty]` | 1.4669262291719793e-05 | 7.549669857809938e-06 | 48.53% | 94.30% | 1.94x | ✅ |
| `apply_key_map[single-key]` | 1.7245821742497563e-05 | 9.551216385801801e-06 | 44.62% | 80.56% | 1.81x | ✅ |
| `apply_key_map[two-keys]` | 1.9345169421546262e-05 | 1.1039393516061126e-05 | 42.93% | 75.24% | 1.75x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8315573203540297e-05 | 1.0333893591478096e-05 | 43.58% | 77.24% | 1.77x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6614686008641652e-06 | 1.6058544152756483e-06 | 3.35% | 3.46% | 1.03x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.1703737040631017e-06 | 1.9583795608017672e-06 | 9.77% | 10.82% | 1.11x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.00034480441688677064 | 0.0013921320732756658 | -303.75% | -75.23% | 0.25x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006352855370507346 | 0.0015082431845415075 | -137.41% | -57.88% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005059633941865619 | 0.0013897297589269592 | -174.67% | -63.59% | 0.36x | ❌ |
