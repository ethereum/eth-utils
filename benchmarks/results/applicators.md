#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.137868306031196e-06 | 9.395568702550705e-06 | -15.45% | -13.39% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 8.13017753900811e-06 | 9.499234202182331e-06 | -16.84% | -14.41% | 0.86x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 8.089700159782767e-06 | 9.4104785084404e-06 | -16.33% | -14.04% | 0.86x | ❌ |
| `apply_formatter_if[condition-false]` | 9.643350128733413e-07 | 9.629096952549817e-07 | 0.15% | 0.15% | 1.00x | ✅ |
| `apply_formatter_if[condition-true]` | 1.2277150609664302e-06 | 1.4215856447977417e-06 | -15.79% | -13.64% | 0.86x | ❌ |
| `apply_formatter_to_array[empty]` | 5.1517071451085356e-06 | 6.16522119907302e-06 | -19.67% | -16.44% | 0.84x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.319339149157702e-06 | 7.551952230218671e-06 | -19.51% | -16.32% | 0.84x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.651540919650299e-06 | 6.734680845586349e-06 | -19.17% | -16.08% | 0.84x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0859948641061443e-05 | 1.5176309914681995e-05 | -39.75% | -28.44% | 0.72x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0381284558329197e-05 | 1.4519443417450694e-05 | -39.86% | -28.50% | 0.71x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.761038622239719e-06 | 6.922684520663949e-06 | 20.98% | 26.56% | 1.27x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.286779417748304e-06 | 7.195307551163238e-06 | 22.52% | 29.07% | 1.29x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.77952577985889e-06 | 7.690845260603262e-06 | 21.36% | 27.16% | 1.27x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0374449723328257e-05 | 8.092310419968325e-06 | 22.00% | 28.20% | 1.28x | ✅ |
| `apply_key_map[empty]` | 1.4781101795790131e-05 | 1.3879722723622854e-05 | 6.10% | 6.49% | 1.06x | ✅ |
| `apply_key_map[single-key]` | 1.7139382840841026e-05 | 1.6518285466348615e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `apply_key_map[two-keys]` | 1.9324226714323428e-05 | 1.8550011173438748e-05 | 4.01% | 4.17% | 1.04x | ✅ |
| `apply_key_map[unrelated-key]` | 1.853577168461166e-05 | 1.767946382482024e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.7062827617972614e-06 | 1.601348476880244e-06 | 6.15% | 6.55% | 1.07x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2543683045135067e-06 | 1.9476936578396063e-06 | 13.60% | 15.75% | 1.16x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003834323844966062 | 0.0003540776486491315 | 7.66% | 8.29% | 1.08x | ✅ |
| `combine_argument_formatters[three-formatters]` | 0.0005653955295701004 | 0.0008315295231297432 | -47.07% | -32.01% | 0.68x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.00046212298121710673 | 0.0006610320805981728 | -43.04% | -30.09% | 0.70x | ❌ |
