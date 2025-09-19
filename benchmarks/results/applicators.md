#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.168798398894842e-06 | 7.58018791878158e-06 | 7.21% | 7.77% | 1.08x | ✅ |
| `apply_formatter_at_index[at-index-1]` | 7.877374625525687e-06 | 7.640913402553591e-06 | 3.00% | 3.09% | 1.03x | ✅ |
| `apply_formatter_at_index[at-index-2]` | 7.845987445218659e-06 | 7.3560743624037575e-06 | 6.24% | 6.66% | 1.07x | ✅ |
| `apply_formatter_if[condition-false]` | 9.401860748885046e-07 | 9.921973071632572e-07 | -5.53% | -5.24% | 0.95x | ❌ |
| `apply_formatter_if[condition-true]` | 1.2038839238935722e-06 | 1.4857003111875098e-06 | -23.41% | -18.97% | 0.81x | ❌ |
| `apply_formatter_to_array[empty]` | 5.23781933161767e-06 | 4.565205238618364e-06 | 12.84% | 14.73% | 1.15x | ✅ |
| `apply_formatter_to_array[multi-item]` | 6.4329130745078365e-06 | 5.77452126884478e-06 | 10.23% | 11.40% | 1.11x | ✅ |
| `apply_formatter_to_array[single-item]` | 5.614173103333068e-06 | 5.185200823087538e-06 | 7.64% | 8.27% | 1.08x | ✅ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0831847115305898e-05 | 1.3281993220344393e-05 | -22.62% | -18.45% | 0.82x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0364761686292216e-05 | 1.2729638657118031e-05 | -22.82% | -18.58% | 0.81x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.748816974112992e-06 | 5.290539812421209e-06 | 39.53% | 65.37% | 1.65x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.250842348609e-06 | 5.626078125099345e-06 | 39.18% | 64.43% | 1.64x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.806938239206873e-06 | 6.1354528442268486e-06 | 37.44% | 59.84% | 1.60x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.038622887697702e-05 | 6.53363459005127e-06 | 37.09% | 58.97% | 1.59x | ✅ |
| `apply_key_map[empty]` | 1.472552337889433e-05 | 1.2217580147272948e-05 | 17.03% | 20.53% | 1.21x | ✅ |
| `apply_key_map[single-key]` | 1.743571279432373e-05 | 1.444933490943823e-05 | 17.13% | 20.67% | 1.21x | ✅ |
| `apply_key_map[two-keys]` | 1.957515551292288e-05 | 1.6555223452055043e-05 | 15.43% | 18.24% | 1.18x | ✅ |
| `apply_key_map[unrelated-key]` | 1.86971272637712e-05 | 1.5911955380321994e-05 | 14.90% | 17.50% | 1.18x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.727500060382914e-06 | 1.6082121851750302e-06 | 6.91% | 7.42% | 1.07x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2476213024802582e-06 | 1.9924395393557857e-06 | 11.35% | 12.81% | 1.13x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.000344561893349227 | 0.0012417068778734707 | -260.37% | -72.25% | 0.28x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0005615968727149171 | 0.0015010222047264084 | -167.28% | -62.59% | 0.37x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0004563549393156484 | 0.0015520737401227562 | -240.10% | -70.60% | 0.29x | ❌ |
