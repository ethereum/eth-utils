#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.930604143691044e-06 | 9.448604077450269e-06 | -19.14% | -16.07% | 0.84x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 8.006361623650012e-06 | 9.459912800970447e-06 | -18.15% | -15.37% | 0.85x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.94968812883991e-06 | 9.396401032759063e-06 | -18.20% | -15.40% | 0.85x | ❌ |
| `apply_formatter_if[condition-false]` | 9.923620377725604e-07 | 9.795831394873297e-07 | 1.29% | 1.30% | 1.01x | ✅ |
| `apply_formatter_if[condition-true]` | 1.2397310003911695e-06 | 1.4372857397345707e-06 | -15.94% | -13.74% | 0.86x | ❌ |
| `apply_formatter_to_array[empty]` | 5.343693524701964e-06 | 6.190681386792024e-06 | -15.85% | -13.68% | 0.86x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.288930182816907e-06 | 7.838618625867392e-06 | -24.64% | -19.77% | 0.80x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.5576837735460445e-06 | 6.805068074394796e-06 | -22.44% | -18.33% | 0.82x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0852162506804363e-05 | 1.5016950881276038e-05 | -38.38% | -27.73% | 0.72x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0368688650975533e-05 | 1.443502888951604e-05 | -39.22% | -28.17% | 0.72x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.887259229978873e-06 | 6.912800401214632e-06 | 22.22% | 28.56% | 1.29x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.268407719157027e-06 | 7.2747805631858315e-06 | 21.51% | 27.40% | 1.27x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.898989698923983e-06 | 7.699039125993627e-06 | 22.22% | 28.57% | 1.29x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0492989332765177e-05 | 8.177314571324398e-06 | 22.07% | 28.32% | 1.28x | ✅ |
| `apply_key_map[empty]` | 1.4825034883808867e-05 | 1.3742861473027787e-05 | 7.30% | 7.87% | 1.08x | ✅ |
| `apply_key_map[single-key]` | 1.7562677044992046e-05 | 1.64816025540114e-05 | 6.16% | 6.56% | 1.07x | ✅ |
| `apply_key_map[two-keys]` | 1.9531436040019243e-05 | 1.8296661191694964e-05 | 6.32% | 6.75% | 1.07x | ✅ |
| `apply_key_map[unrelated-key]` | 1.876562645833647e-05 | 1.7458256667879846e-05 | 6.97% | 7.49% | 1.07x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6732170721697073e-06 | 1.6031528856401244e-06 | 4.19% | 4.37% | 1.04x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2584600086666105e-06 | 1.969184803005041e-06 | 12.81% | 14.69% | 1.15x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003959748006404041 | 0.0003123785936450354 | 21.11% | 26.76% | 1.27x | ✅ |
| `combine_argument_formatters[three-formatters]` | 0.0005758272028522254 | 0.00083942591280687 | -45.78% | -31.40% | 0.69x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0004641239592094084 | 0.0005799513984788819 | -24.96% | -19.97% | 0.80x | ❌ |
