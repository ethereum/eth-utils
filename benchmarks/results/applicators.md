#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.901480046562047e-06 | 9.1082979467877e-06 | -15.27% | -13.25% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.973194548528249e-06 | 8.948467592209216e-06 | -12.23% | -10.90% | 0.89x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.838895595191477e-06 | 9.047686551626178e-06 | -15.42% | -13.36% | 0.87x | ❌ |
| `apply_formatter_if[condition-false]` | 9.348196073036936e-07 | 1.1192120428076403e-06 | -19.72% | -16.48% | 0.84x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1768303540065811e-06 | 1.5343011951943306e-06 | -30.38% | -23.30% | 0.77x | ❌ |
| `apply_formatter_to_array[empty]` | 5.270043064816041e-06 | 5.167093357454785e-06 | 1.95% | 1.99% | 1.02x | ✅ |
| `apply_formatter_to_array[multi-item]` | 6.3328728085060814e-06 | 6.6480579281740515e-06 | -4.98% | -4.74% | 0.95x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.577470911564735e-06 | 5.842799944278624e-06 | -4.76% | -4.54% | 0.95x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0426815061199715e-05 | 1.3147735812386574e-05 | -26.10% | -20.69% | 0.79x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.010282661994114e-05 | 1.253144129822956e-05 | -24.04% | -19.38% | 0.81x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.914020324129473e-06 | 5.970190291880658e-06 | 33.02% | 49.31% | 1.49x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.325793509104412e-06 | 6.35583361367492e-06 | 31.85% | 46.73% | 1.47x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 1.0074428917716962e-05 | 6.840662571397135e-06 | 32.10% | 47.27% | 1.47x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0578832774008211e-05 | 7.20612135066486e-06 | 31.88% | 46.80% | 1.47x | ✅ |
| `apply_key_map[empty]` | 1.4761883615936605e-05 | 1.2284339082987425e-05 | 16.78% | 20.17% | 1.20x | ✅ |
| `apply_key_map[single-key]` | 1.700782970589279e-05 | 1.4683982468539196e-05 | 13.66% | 15.83% | 1.16x | ✅ |
| `apply_key_map[two-keys]` | 1.9456242962282615e-05 | 1.6794639163864727e-05 | 13.68% | 15.85% | 1.16x | ✅ |
| `apply_key_map[unrelated-key]` | 1.856691750774677e-05 | 1.603260057989581e-05 | 13.65% | 15.81% | 1.16x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.6681995306778908e-06 | 1.5827095688403495e-06 | 5.12% | 5.40% | 1.05x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2097491767333e-06 | 1.9054704529493594e-06 | 13.77% | 15.97% | 1.16x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.00034613967381141663 | 0.0012633477871667365 | -264.98% | -72.60% | 0.27x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006392647541562245 | 0.0015408181078761921 | -141.03% | -58.51% | 0.41x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005119289652777706 | 0.0014097033312087503 | -175.37% | -63.69% | 0.36x | ❌ |
