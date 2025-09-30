#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.084790540824787e-06 | 7.5643701221945006e-06 | 6.44% | 6.88% | 1.07x | ✅ |
| `apply_formatter_at_index[at-index-1]` | 7.965160756221996e-06 | 7.522925508026407e-06 | 5.55% | 5.88% | 1.06x | ✅ |
| `apply_formatter_at_index[at-index-2]` | 7.946440411712902e-06 | 7.44265185270661e-06 | 6.34% | 6.77% | 1.07x | ✅ |
| `apply_formatter_if[condition-false]` | 9.084403201728323e-07 | 9.393178384406335e-07 | -3.40% | -3.29% | 0.97x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1500914560784453e-06 | 1.4358502937834113e-06 | -24.85% | -19.90% | 0.80x | ❌ |
| `apply_formatter_to_array[empty]` | 5.165423549903963e-06 | 4.532487847282196e-06 | 12.25% | 13.96% | 1.14x | ✅ |
| `apply_formatter_to_array[multi-item]` | 6.243824377774381e-06 | 5.926288122172522e-06 | 5.09% | 5.36% | 1.05x | ✅ |
| `apply_formatter_to_array[single-item]` | 5.489684920892711e-06 | 5.201685325246044e-06 | 5.25% | 5.54% | 1.06x | ✅ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0838661455942453e-05 | 1.3403981679583975e-05 | -23.67% | -19.14% | 0.81x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0276803346235488e-05 | 1.2796723682220262e-05 | -24.52% | -19.69% | 0.80x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.901356213606589e-06 | 5.236035426701607e-06 | 41.18% | 70.00% | 1.70x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.343594826573876e-06 | 5.613344008662272e-06 | 39.92% | 66.45% | 1.66x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.833432600668909e-06 | 6.079594432866827e-06 | 38.17% | 61.74% | 1.62x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0419727848533282e-05 | 6.410143824583183e-06 | 38.48% | 62.55% | 1.63x | ✅ |
| `apply_key_map[empty]` | 1.466552070315192e-05 | 1.2021604457103677e-05 | 18.03% | 21.99% | 1.22x | ✅ |
| `apply_key_map[single-key]` | 1.711606471273566e-05 | 1.4416531763491297e-05 | 15.77% | 18.73% | 1.19x | ✅ |
| `apply_key_map[two-keys]` | 1.9207834445761496e-05 | 1.639218298877895e-05 | 14.66% | 17.18% | 1.17x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8492198762246904e-05 | 1.5659871139112032e-05 | 15.32% | 18.09% | 1.18x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6938277611742323e-06 | 1.5916170767067593e-06 | 6.03% | 6.42% | 1.06x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.1900204874524385e-06 | 1.9369287291405837e-06 | 11.56% | 13.07% | 1.13x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003490412725142696 | 0.0012484188218562682 | -257.67% | -72.04% | 0.28x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006346189250008852 | 0.0015185993281505471 | -139.29% | -58.21% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.00046383092332120545 | 0.0014021824506371132 | -202.30% | -66.92% | 0.33x | ❌ |
