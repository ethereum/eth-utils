#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.953904869510726e-06 | 8.904211919737948e-06 | -11.95% | -10.67% | 0.89x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.908706521459431e-06 | 8.813387214515385e-06 | -11.44% | -10.26% | 0.90x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.943324519271923e-06 | 8.873305887769164e-06 | -11.71% | -10.48% | 0.90x | ❌ |
| `apply_formatter_if[condition-false]` | 9.297810588488497e-07 | 1.0368850187036284e-06 | -11.52% | -10.33% | 0.90x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1926096700846677e-06 | 1.4835601903881783e-06 | -24.40% | -19.61% | 0.80x | ❌ |
| `apply_formatter_to_array[empty]` | 5.075209314871506e-06 | 5.254621288234365e-06 | -3.54% | -3.41% | 0.97x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.175001290787204e-06 | 6.6759149314941395e-06 | -8.11% | -7.50% | 0.92x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.484684548662063e-06 | 5.867628896302571e-06 | -6.98% | -6.53% | 0.93x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0378463057129327e-05 | 1.305122460677987e-05 | -25.75% | -20.48% | 0.80x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0000962715245314e-05 | 1.2431722324459328e-05 | -24.31% | -19.55% | 0.80x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.643897552483491e-06 | 5.929710473849774e-06 | 31.40% | 45.77% | 1.46x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.109306532269867e-06 | 6.241859785287296e-06 | 31.48% | 45.94% | 1.46x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.744301923941715e-06 | 6.700976944553298e-06 | 31.23% | 45.42% | 1.45x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0378096309777617e-05 | 7.147041083639808e-06 | 31.13% | 45.21% | 1.45x | ✅ |
| `apply_key_map[empty]` | 1.4797262125972918e-05 | 1.2018481548499163e-05 | 18.78% | 23.12% | 1.23x | ✅ |
| `apply_key_map[single-key]` | 1.7071662574392717e-05 | 1.4190581818038958e-05 | 16.88% | 20.30% | 1.20x | ✅ |
| `apply_key_map[two-keys]` | 1.9240904942193922e-05 | 1.683858179509819e-05 | 12.49% | 14.27% | 1.14x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8449019791617065e-05 | 1.5997824443282408e-05 | 13.29% | 15.32% | 1.15x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.660593409244878e-06 | 1.53563510226441e-06 | 7.52% | 8.14% | 1.08x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.1857862791678686e-06 | 1.8711990340355058e-06 | 14.39% | 16.81% | 1.17x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.00033867213382117743 | 0.0014284285987372458 | -321.77% | -76.29% | 0.24x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006269933211014361 | 0.001515894985892729 | -141.77% | -58.64% | 0.41x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005023316636103564 | 0.0014071880574873191 | -180.13% | -64.30% | 0.36x | ❌ |
