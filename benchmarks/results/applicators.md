#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.94616606338471e-06 | 8.986991162622632e-06 | -13.10% | -11.58% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.886456541256967e-06 | 9.029031686565494e-06 | -14.49% | -12.65% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.903898483314757e-06 | 8.931261904063037e-06 | -13.00% | -11.50% | 0.88x | ❌ |
| `apply_formatter_if[condition-false]` | 9.261420101023893e-07 | 1.1061577381439e-06 | -19.44% | -16.27% | 0.84x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1543287897346747e-06 | 1.5610936994326647e-06 | -35.24% | -26.06% | 0.74x | ❌ |
| `apply_formatter_to_array[empty]` | 5.124027317187731e-06 | 5.234773444211285e-06 | -2.16% | -2.12% | 0.98x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.146079957329713e-06 | 6.625027866203916e-06 | -7.79% | -7.23% | 0.93x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.477351588907967e-06 | 5.875629041017689e-06 | -7.27% | -6.78% | 0.93x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0753474045158064e-05 | 7.958027813895439e-06 | 26.00% | 35.13% | 1.35x | ✅ |
| `apply_formatters_to_dict[key-not-present]` | 1.0118913178063708e-05 | 7.179953245255923e-06 | 29.04% | 40.93% | 1.41x | ✅ |
| `apply_formatters_to_sequence[1-item]` | 8.953809271430377e-06 | 6.083515920919946e-06 | 32.06% | 47.18% | 1.47x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.239736829927409e-06 | 6.497517602283558e-06 | 29.68% | 42.20% | 1.42x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.884968443422602e-06 | 6.950459298106263e-06 | 29.69% | 42.22% | 1.42x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0506597045051664e-05 | 7.209710263990563e-06 | 31.38% | 45.73% | 1.46x | ✅ |
| `apply_key_map[empty]` | 1.4603223287718399e-05 | 7.276432246726477e-06 | 50.17% | 100.69% | 2.01x | ✅ |
| `apply_key_map[single-key]` | 1.7107003272981764e-05 | 9.325966831805857e-06 | 45.48% | 83.43% | 1.83x | ✅ |
| `apply_key_map[two-keys]` | 1.9676358177306905e-05 | 1.1197620262340612e-05 | 43.09% | 75.72% | 1.76x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8851999999469627e-05 | 1.0231971946147154e-05 | 45.72% | 84.25% | 1.84x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6991306795548138e-06 | 1.5699472819360757e-06 | 7.60% | 8.23% | 1.08x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.223205768026871e-06 | 1.9612861933683543e-06 | 11.78% | 13.35% | 1.13x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003422631295832432 | 0.0012374597132560783 | -261.55% | -72.34% | 0.28x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006427448570050815 | 0.0015047825947462163 | -134.12% | -57.29% | 0.43x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005045617394853903 | 0.001386554431561852 | -174.80% | -63.61% | 0.36x | ❌ |
