#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.035618871403431e-06 | 8.903856507779817e-06 | -10.80% | -9.75% | 0.90x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.873300693683454e-06 | 9.06863724038246e-06 | -15.18% | -13.18% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.991518661174514e-06 | 8.966316168029324e-06 | -12.20% | -10.87% | 0.89x | ❌ |
| `apply_formatter_if[condition-false]` | 9.196281328447232e-07 | 1.0752200566753932e-06 | -16.92% | -14.47% | 0.86x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1407198665406173e-06 | 1.5345165117239897e-06 | -34.52% | -25.66% | 0.74x | ❌ |
| `apply_formatter_to_array[empty]` | 5.132053653371678e-06 | 5.26319744329943e-06 | -2.56% | -2.49% | 0.98x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.275120194385057e-06 | 6.685053312859708e-06 | -6.53% | -6.13% | 0.94x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.552797713182382e-06 | 5.880760000650719e-06 | -5.91% | -5.58% | 0.94x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.050196173043775e-05 | 7.818937536210396e-06 | 25.55% | 34.31% | 1.34x | ✅ |
| `apply_formatters_to_dict[key-not-present]` | 9.847535712693496e-06 | 7.091448983538432e-06 | 27.99% | 38.86% | 1.39x | ✅ |
| `apply_formatters_to_sequence[1-item]` | 8.916129581098092e-06 | 6.0710660548750495e-06 | 31.91% | 46.86% | 1.47x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.291372866946694e-06 | 6.426807131888349e-06 | 30.83% | 44.57% | 1.45x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.845261079015972e-06 | 6.888090344537258e-06 | 30.04% | 42.93% | 1.43x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0529416597147333e-05 | 7.273375124082935e-06 | 30.92% | 44.77% | 1.45x | ✅ |
| `apply_key_map[empty]` | 1.4471393409145148e-05 | 7.541819486509132e-06 | 47.88% | 91.88% | 1.92x | ✅ |
| `apply_key_map[single-key]` | 1.7051138615004396e-05 | 9.481524549267547e-06 | 44.39% | 79.84% | 1.80x | ✅ |
| `apply_key_map[two-keys]` | 1.9157089632407297e-05 | 1.117065746081357e-05 | 41.69% | 71.49% | 1.71x | ✅ |
| `apply_key_map[unrelated-key]` | 1.812835308515272e-05 | 1.0103183967718536e-05 | 44.27% | 79.43% | 1.79x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6626688888584863e-06 | 1.5458291177692933e-06 | 7.03% | 7.56% | 1.08x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.1515274250595082e-06 | 1.9361797923077747e-06 | 10.01% | 11.12% | 1.11x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003523456060130473 | 0.0013958917011323737 | -296.17% | -74.76% | 0.25x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.000633382135880616 | 0.0015125240368318307 | -138.80% | -58.12% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005102719408533401 | 0.001397054214284953 | -173.79% | -63.48% | 0.37x | ❌ |
