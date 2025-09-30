#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.9131375004593e-06 | 7.784247963829173e-06 | 1.63% | 1.66% | 1.02x | ✅ |
| `apply_formatter_at_index[at-index-1]` | 7.896696700320472e-06 | 7.683406666184138e-06 | 2.70% | 2.78% | 1.03x | ✅ |
| `apply_formatter_at_index[at-index-2]` | 7.951422628160569e-06 | 7.670043349283843e-06 | 3.54% | 3.67% | 1.04x | ✅ |
| `apply_formatter_if[condition-false]` | 9.22566154467768e-07 | 9.624865994368942e-07 | -4.33% | -4.15% | 0.96x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1883976403510876e-06 | 1.445578506879993e-06 | -21.64% | -17.79% | 0.82x | ❌ |
| `apply_formatter_to_array[empty]` | 5.16795380538207e-06 | 4.557584163937865e-06 | 11.81% | 13.39% | 1.13x | ✅ |
| `apply_formatter_to_array[multi-item]` | 6.367069228327273e-06 | 5.905235654470233e-06 | 7.25% | 7.82% | 1.08x | ✅ |
| `apply_formatter_to_array[single-item]` | 5.628388254073604e-06 | 5.2342689629627155e-06 | 7.00% | 7.53% | 1.08x | ✅ |
| `apply_formatters_to_dict[all-keys-present]` | 1.081532691683846e-05 | 1.3298321332542442e-05 | -22.96% | -18.67% | 0.81x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.046076435107673e-05 | 1.2955023562987015e-05 | -23.84% | -19.25% | 0.81x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.816479975530976e-06 | 5.303747211345722e-06 | 39.84% | 66.23% | 1.66x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.383897973722208e-06 | 5.674947536000513e-06 | 39.52% | 65.36% | 1.65x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.889292522937767e-06 | 6.198859214171207e-06 | 37.32% | 59.53% | 1.60x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0398931633920145e-05 | 6.441534554912789e-06 | 38.06% | 61.44% | 1.61x | ✅ |
| `apply_key_map[empty]` | 1.4608740000312537e-05 | 1.23799688607359e-05 | 15.26% | 18.00% | 1.18x | ✅ |
| `apply_key_map[single-key]` | 1.7177288036775392e-05 | 1.4830826418677539e-05 | 13.66% | 15.82% | 1.16x | ✅ |
| `apply_key_map[two-keys]` | 1.9334687250897618e-05 | 1.665661572157568e-05 | 13.85% | 16.08% | 1.16x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8570074172479533e-05 | 1.5956810187772334e-05 | 14.07% | 16.38% | 1.16x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6776995034994062e-06 | 1.570738849256401e-06 | 6.38% | 6.81% | 1.07x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2261729621115114e-06 | 1.964220794876433e-06 | 11.77% | 13.34% | 1.13x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003361291824745356 | 0.0013944102598555843 | -314.84% | -75.89% | 0.24x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.000622370791432215 | 0.0014941680068012548 | -140.08% | -58.35% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005024621695228359 | 0.001381445822319155 | -174.94% | -63.63% | 0.36x | ❌ |
