#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.922905727181467e-06 | 9.053688897987707e-06 | -14.27% | -12.49% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.906519025109653e-06 | 9.12028662332051e-06 | -15.35% | -13.31% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.88530202804794e-06 | 9.058659166294516e-06 | -14.88% | -12.95% | 0.87x | ❌ |
| `apply_formatter_if[condition-false]` | 9.122890443179655e-07 | 1.0850100868153958e-06 | -18.93% | -15.92% | 0.84x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1936815156728991e-06 | 1.556391584365719e-06 | -30.39% | -23.30% | 0.77x | ❌ |
| `apply_formatter_to_array[empty]` | 5.144580291127243e-06 | 5.265147174101929e-06 | -2.34% | -2.29% | 0.98x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.294919760303375e-06 | 6.659308924848038e-06 | -5.79% | -5.47% | 0.95x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.543718145465259e-06 | 5.893618989455586e-06 | -6.31% | -5.94% | 0.94x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0352416228309211e-05 | 7.803941184962546e-06 | 24.62% | 32.66% | 1.33x | ✅ |
| `apply_formatters_to_dict[key-not-present]` | 9.945685855624993e-06 | 7.090965234748287e-06 | 28.70% | 40.26% | 1.40x | ✅ |
| `apply_formatters_to_sequence[1-item]` | 8.709034858658658e-06 | 6.028987921474361e-06 | 30.77% | 44.45% | 1.44x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.137827699842434e-06 | 6.451543754590303e-06 | 29.40% | 41.64% | 1.42x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.771632060365106e-06 | 6.920134310517066e-06 | 29.18% | 41.21% | 1.41x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0369591226163904e-05 | 7.253293545010562e-06 | 30.05% | 42.96% | 1.43x | ✅ |
| `apply_key_map[empty]` | 1.4462695746151295e-05 | 7.302969651606712e-06 | 49.50% | 98.04% | 1.98x | ✅ |
| `apply_key_map[single-key]` | 1.704853792385191e-05 | 9.257619407926063e-06 | 45.70% | 84.16% | 1.84x | ✅ |
| `apply_key_map[two-keys]` | 1.92178310662574e-05 | 1.0971942294527554e-05 | 42.91% | 75.15% | 1.75x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8537294227155293e-05 | 1.0109404049436847e-05 | 45.46% | 83.37% | 1.83x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6726695215182168e-06 | 1.5562532692511133e-06 | 6.96% | 7.48% | 1.07x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.1517073528179654e-06 | 1.937989157957161e-06 | 9.93% | 11.03% | 1.11x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003421495263159097 | 0.0014040914566140511 | -310.37% | -75.63% | 0.24x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006314154249290841 | 0.0015241172190488192 | -141.38% | -58.57% | 0.41x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005089475855969053 | 0.0014070284874446904 | -176.46% | -63.83% | 0.36x | ❌ |
