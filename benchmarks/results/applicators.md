#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.969660416051738e-06 | 9.013058487656257e-06 | -13.09% | -11.58% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.893196942166472e-06 | 8.96649218270029e-06 | -13.60% | -11.97% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.91901841879929e-06 | 9.122795874984658e-06 | -15.20% | -13.20% | 0.87x | ❌ |
| `apply_formatter_if[condition-false]` | 9.172770035797486e-07 | 1.0863073941435736e-06 | -18.43% | -15.56% | 0.84x | ❌ |
| `apply_formatter_if[condition-true]` | 1.17142209713748e-06 | 1.4891712654905106e-06 | -27.13% | -21.34% | 0.79x | ❌ |
| `apply_formatter_to_array[empty]` | 5.121729618292119e-06 | 5.206767400283887e-06 | -1.66% | -1.63% | 0.98x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.2507979440105325e-06 | 6.668595041012426e-06 | -6.68% | -6.27% | 0.94x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.413136672167747e-06 | 5.86275175758618e-06 | -8.31% | -7.67% | 0.92x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.029168773423176e-05 | 1.3154258669851433e-05 | -27.81% | -21.76% | 0.78x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 9.99872448786378e-06 | 1.2565845472601576e-05 | -25.67% | -20.43% | 0.80x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.856497201762058e-06 | 5.8494126156785e-06 | 33.95% | 51.41% | 1.51x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.25478312613119e-06 | 6.1791069962843085e-06 | 33.23% | 49.78% | 1.50x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.762679056031283e-06 | 6.569965805631944e-06 | 32.70% | 48.60% | 1.49x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0260853636320955e-05 | 6.9859322126188896e-06 | 31.92% | 46.88% | 1.47x | ✅ |
| `apply_key_map[empty]` | 1.4903727271137706e-05 | 1.2069260686235848e-05 | 19.02% | 23.49% | 1.23x | ✅ |
| `apply_key_map[single-key]` | 1.7103031173562475e-05 | 1.4519647840890201e-05 | 15.10% | 17.79% | 1.18x | ✅ |
| `apply_key_map[two-keys]` | 1.9336362327977286e-05 | 1.680184514409154e-05 | 13.11% | 15.08% | 1.15x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8721988269681472e-05 | 1.5920443649565873e-05 | 14.96% | 17.60% | 1.18x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.7031089139180462e-06 | 1.547129849968113e-06 | 9.16% | 10.08% | 1.10x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.205926636897466e-06 | 1.9131968392519557e-06 | 13.27% | 15.30% | 1.15x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.00034122918801289694 | 0.0014098926685867695 | -313.18% | -75.80% | 0.24x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.000630927032693956 | 0.001518214819935756 | -140.63% | -58.44% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.000506101382938838 | 0.0014049833802596565 | -177.61% | -63.98% | 0.36x | ❌ |
