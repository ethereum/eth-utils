#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.867359314634525e-06 | 9.182230718118177e-06 | -16.71% | -14.32% | 0.86x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.889739780686857e-06 | 9.144889991106873e-06 | -15.91% | -13.73% | 0.86x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.891982773027388e-06 | 9.236547417399734e-06 | -17.04% | -14.56% | 0.85x | ❌ |
| `apply_formatter_if[condition-false]` | 9.270406182917017e-07 | 1.073579681387326e-06 | -15.81% | -13.65% | 0.86x | ❌ |
| `apply_formatter_if[condition-true]` | 1.156843661386274e-06 | 1.523976912985714e-06 | -31.74% | -24.09% | 0.76x | ❌ |
| `apply_formatter_to_array[empty]` | 5.119381055566009e-06 | 5.330296970572371e-06 | -4.12% | -3.96% | 0.96x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.2744187859604255e-06 | 6.6957518314029605e-06 | -6.72% | -6.29% | 0.94x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.617376506894978e-06 | 5.926415400030857e-06 | -5.50% | -5.21% | 0.95x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0394338547451922e-05 | 7.810746459127416e-06 | 24.86% | 33.08% | 1.33x | ✅ |
| `apply_formatters_to_dict[key-not-present]` | 9.957203364724616e-06 | 7.080891683850114e-06 | 28.89% | 40.62% | 1.41x | ✅ |
| `apply_formatters_to_sequence[1-item]` | 8.880082155983727e-06 | 6.131057093154958e-06 | 30.96% | 44.84% | 1.45x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.370230456462031e-06 | 6.516711935208811e-06 | 30.45% | 43.79% | 1.44x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.764804061783623e-06 | 6.957793413222911e-06 | 28.75% | 40.34% | 1.40x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0426340863295732e-05 | 7.125046550144381e-06 | 31.66% | 46.33% | 1.46x | ✅ |
| `apply_key_map[empty]` | 1.469931448614469e-05 | 7.345962802493012e-06 | 50.03% | 100.10% | 2.00x | ✅ |
| `apply_key_map[single-key]` | 1.7244207894490952e-05 | 9.443562656552374e-06 | 45.24% | 82.60% | 1.83x | ✅ |
| `apply_key_map[two-keys]` | 1.940918787841785e-05 | 1.0963504296455682e-05 | 43.51% | 77.03% | 1.77x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8690088906607854e-05 | 1.0112978771551171e-05 | 45.89% | 84.81% | 1.85x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6736792327541986e-06 | 1.5648407939016042e-06 | 6.50% | 6.96% | 1.07x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.1309467430624323e-06 | 1.9511550797199795e-06 | 8.44% | 9.21% | 1.09x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003551968808685926 | 0.0012494059037027438 | -251.75% | -71.57% | 0.28x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006435421650558326 | 0.0015140323066427472 | -135.27% | -57.49% | 0.43x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.000525353729293093 | 0.0013974259104224836 | -166.00% | -62.41% | 0.38x | ❌ |
