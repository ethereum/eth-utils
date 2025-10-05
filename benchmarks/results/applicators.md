#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.955006324238316e-06 | 8.86413991785269e-06 | -11.43% | -10.26% | 0.90x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.990434895155197e-06 | 8.811350732305867e-06 | -10.27% | -9.32% | 0.91x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.981001888580084e-06 | 8.833925953162742e-06 | -10.69% | -9.66% | 0.90x | ❌ |
| `apply_formatter_if[condition-false]` | 9.285267403144716e-07 | 1.0154161310604869e-06 | -9.36% | -8.56% | 0.91x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1758520003959853e-06 | 1.4343058756000436e-06 | -21.98% | -18.02% | 0.82x | ❌ |
| `apply_formatter_to_array[empty]` | 5.1398207215895e-06 | 4.580171466997152e-06 | 10.89% | 12.22% | 1.12x | ✅ |
| `apply_formatter_to_array[multi-item]` | 6.395407116971102e-06 | 5.870972800467471e-06 | 8.20% | 8.93% | 1.09x | ✅ |
| `apply_formatter_to_array[single-item]` | 5.676507618006698e-06 | 5.211563963649846e-06 | 8.19% | 8.92% | 1.09x | ✅ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0696166708239431e-05 | 1.3205214826537405e-05 | -23.46% | -19.00% | 0.81x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0315148654335596e-05 | 1.2484358366370736e-05 | -21.03% | -17.38% | 0.83x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.878955323029358e-06 | 5.927166425377022e-06 | 33.24% | 49.80% | 1.50x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.345555779765749e-06 | 6.251601845764765e-06 | 33.11% | 49.49% | 1.49x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.70568459901363e-06 | 6.707791823212408e-06 | 30.89% | 44.69% | 1.45x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0477099124301755e-05 | 7.030971488504372e-06 | 32.89% | 49.01% | 1.49x | ✅ |
| `apply_key_map[empty]` | 1.4834600435113434e-05 | 1.20766599195288e-05 | 18.59% | 22.84% | 1.23x | ✅ |
| `apply_key_map[single-key]` | 1.7480260229360096e-05 | 1.4633278344162786e-05 | 16.29% | 19.46% | 1.19x | ✅ |
| `apply_key_map[two-keys]` | 1.987212456917585e-05 | 1.690883931439552e-05 | 14.91% | 17.53% | 1.18x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8767825823868594e-05 | 1.5907598781462444e-05 | 15.24% | 17.98% | 1.18x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6662917910010857e-06 | 1.532656969962716e-06 | 8.02% | 8.72% | 1.09x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.179665351976501e-06 | 1.909984917277285e-06 | 12.37% | 14.12% | 1.14x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003367210970730472 | 0.0014067653930159801 | -317.78% | -76.06% | 0.24x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.000621472635356464 | 0.0015190183078240057 | -144.42% | -59.09% | 0.41x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005141382004632775 | 0.0013993760290565047 | -172.18% | -63.26% | 0.37x | ❌ |
