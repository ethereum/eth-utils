#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.020349659896651e-06 | 9.090893622358341e-06 | -13.35% | -11.78% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 8.016970549273901e-06 | 9.124434465213597e-06 | -13.81% | -12.14% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.914258383203599e-06 | 9.014278201157546e-06 | -13.90% | -12.20% | 0.88x | ❌ |
| `apply_formatter_if[condition-false]` | 9.074749865965376e-07 | 1.0841553924295254e-06 | -19.47% | -16.30% | 0.84x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1254444712825563e-06 | 1.4806262706103968e-06 | -31.56% | -23.99% | 0.76x | ❌ |
| `apply_formatter_to_array[empty]` | 5.1424085470351805e-06 | 5.2916003178107804e-06 | -2.90% | -2.82% | 0.97x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.2649132350396435e-06 | 6.678030854065933e-06 | -6.59% | -6.19% | 0.94x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.554779354177785e-06 | 5.896312792748611e-06 | -6.15% | -5.79% | 0.94x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0476250606291962e-05 | 1.3130488507735551e-05 | -25.34% | -20.21% | 0.80x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0214826346092948e-05 | 1.2642901841305314e-05 | -23.77% | -19.21% | 0.81x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 9.001888308335476e-06 | 6.0549655397173345e-06 | 32.74% | 48.67% | 1.49x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.482164292702801e-06 | 6.373599244135624e-06 | 32.78% | 48.77% | 1.49x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 1.0125407390624298e-05 | 6.8000581775630725e-06 | 32.84% | 48.90% | 1.49x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0770645818613382e-05 | 7.01910038451156e-06 | 34.83% | 53.45% | 1.53x | ✅ |
| `apply_key_map[empty]` | 1.475027695276628e-05 | 1.2196008571449441e-05 | 17.32% | 20.94% | 1.21x | ✅ |
| `apply_key_map[single-key]` | 1.7265196597533136e-05 | 1.4620048231486683e-05 | 15.32% | 18.09% | 1.18x | ✅ |
| `apply_key_map[two-keys]` | 1.93770805115146e-05 | 1.676197337277545e-05 | 13.50% | 15.60% | 1.16x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8700379646973757e-05 | 1.588014037375292e-05 | 15.08% | 17.76% | 1.18x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.7180361100218734e-06 | 1.5335927340428755e-06 | 10.74% | 12.03% | 1.12x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.263030580011791e-06 | 1.877504690563026e-06 | 17.04% | 20.53% | 1.21x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003546289337716527 | 0.0012759479065855162 | -259.80% | -72.21% | 0.28x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.000580756134830038 | 0.0015229206766082496 | -162.23% | -61.87% | 0.38x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0004705456351440224 | 0.0015593236705040195 | -231.39% | -69.82% | 0.30x | ❌ |
