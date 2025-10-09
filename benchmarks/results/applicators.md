#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.03971688133661e-06 | 8.90398451614308e-06 | -10.75% | -9.71% | 0.90x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.962706888800949e-06 | 8.932569280106972e-06 | -12.18% | -10.86% | 0.89x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.903358397232943e-06 | 8.905643357645407e-06 | -12.68% | -11.25% | 0.89x | ❌ |
| `apply_formatter_if[condition-false]` | 9.330353263568157e-07 | 1.0936393527941402e-06 | -17.21% | -14.69% | 0.85x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1864784029618989e-06 | 1.5280952383723713e-06 | -28.79% | -22.36% | 0.78x | ❌ |
| `apply_formatter_to_array[empty]` | 5.049440906290543e-06 | 5.186953640974635e-06 | -2.72% | -2.65% | 0.97x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.103403049519224e-06 | 6.639604213287416e-06 | -8.79% | -8.08% | 0.92x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.559514703827678e-06 | 5.859960078859093e-06 | -5.40% | -5.13% | 0.95x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0570055818068712e-05 | 1.319602640541765e-05 | -24.84% | -19.90% | 0.80x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0129781303821904e-05 | 1.2520984696397652e-05 | -23.61% | -19.10% | 0.81x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.944864664643177e-06 | 6.129197768723312e-06 | 31.48% | 45.94% | 1.46x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.284882870000072e-06 | 6.334723230503787e-06 | 31.77% | 46.57% | 1.47x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.832835598972873e-06 | 6.801897140268647e-06 | 30.82% | 44.56% | 1.45x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0454306220535394e-05 | 7.3851657874994374e-06 | 29.36% | 41.56% | 1.42x | ✅ |
| `apply_key_map[empty]` | 1.4619832045140423e-05 | 1.212531430310145e-05 | 17.06% | 20.57% | 1.21x | ✅ |
| `apply_key_map[single-key]` | 1.719761899310738e-05 | 1.46194259887247e-05 | 14.99% | 17.64% | 1.18x | ✅ |
| `apply_key_map[two-keys]` | 1.968006402778451e-05 | 1.6638674505769837e-05 | 15.45% | 18.28% | 1.18x | ✅ |
| `apply_key_map[unrelated-key]` | 1.858242469677107e-05 | 1.5704299438024974e-05 | 15.49% | 18.33% | 1.18x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6838398136493602e-06 | 1.5631042184179038e-06 | 7.17% | 7.72% | 1.08x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2422614849319397e-06 | 1.9057388377554833e-06 | 15.01% | 17.66% | 1.18x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.00034600676762125 | 0.0012523578779748625 | -261.95% | -72.37% | 0.28x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006400875469358664 | 0.0015093545090604167 | -135.80% | -57.59% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.00045366479357199685 | 0.0013942502795328908 | -207.33% | -67.46% | 0.33x | ❌ |
