#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 8.149296286111466e-06 | 7.630997120943405e-06 | 6.36% | 6.79% | 1.07x | ✅ |
| `apply_formatter_at_index[at-index-1]` | 8.02908271851392e-06 | 7.640139685411478e-06 | 4.84% | 5.09% | 1.05x | ✅ |
| `apply_formatter_at_index[at-index-2]` | 9.231999990788609e-06 | 7.497000957231927e-06 | 18.79% | 23.14% | 1.23x | ✅ |
| `apply_formatter_if[condition-false]` | 9.64807958031498e-07 | 9.722215663428826e-07 | -0.77% | -0.76% | 0.99x | ❌ |
| `apply_formatter_if[condition-true]` | 1.2057994069711384e-06 | 1.477225819959787e-06 | -22.51% | -18.37% | 0.82x | ❌ |
| `apply_formatter_to_array[empty]` | 5.198022352180569e-06 | 4.543963231269278e-06 | 12.58% | 14.39% | 1.14x | ✅ |
| `apply_formatter_to_array[multi-item]` | 6.389453809458059e-06 | 5.868947895752959e-06 | 8.15% | 8.87% | 1.09x | ✅ |
| `apply_formatter_to_array[single-item]` | 5.618993717041279e-06 | 5.294819441683742e-06 | 5.77% | 6.12% | 1.06x | ✅ |
| `apply_formatters_to_dict[all-keys-present]` | 1.092326247388869e-05 | 1.3882096898370513e-05 | -27.09% | -21.31% | 0.79x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0587425294923248e-05 | 1.323675036639908e-05 | -25.02% | -20.01% | 0.80x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.8846879639911e-06 | 5.289604351913999e-06 | 40.46% | 67.97% | 1.68x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.220027351414388e-06 | 5.582467830834032e-06 | 39.45% | 65.16% | 1.65x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.817713879534145e-06 | 6.062452305130297e-06 | 38.25% | 61.94% | 1.62x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0529792731978014e-05 | 6.551279251983387e-06 | 37.78% | 60.73% | 1.61x | ✅ |
| `apply_key_map[empty]` | 1.539187029010667e-05 | 1.2434157054404795e-05 | 19.22% | 23.79% | 1.24x | ✅ |
| `apply_key_map[single-key]` | 1.8071709601487044e-05 | 1.4990613007645688e-05 | 17.05% | 20.55% | 1.21x | ✅ |
| `apply_key_map[two-keys]` | 2.0446845289115898e-05 | 1.6927925187168765e-05 | 17.21% | 20.79% | 1.21x | ✅ |
| `apply_key_map[unrelated-key]` | 1.9378003127013246e-05 | 1.609013258438999e-05 | 16.97% | 20.43% | 1.20x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.7103010995901831e-06 | 1.6482907197512344e-06 | 3.63% | 3.76% | 1.04x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.241672610802542e-06 | 1.977748570363219e-06 | 11.77% | 13.34% | 1.13x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.000335089637579707 | 0.001440875389323305 | -330.00% | -76.74% | 0.23x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006374363499653417 | 0.001535005093595046 | -140.81% | -58.47% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005047141642222892 | 0.0014136102227129846 | -180.08% | -64.30% | 0.36x | ❌ |
