#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.96916435383974e-06 | 8.930050177220354e-06 | -12.06% | -10.76% | 0.89x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 7.896505295395364e-06 | 8.967442725324187e-06 | -13.56% | -11.94% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.858894694552282e-06 | 8.895525188503284e-06 | -13.19% | -11.65% | 0.88x | ❌ |
| `apply_formatter_if[condition-false]` | 9.327460962166199e-07 | 1.0520002194263037e-06 | -12.79% | -11.34% | 0.89x | ❌ |
| `apply_formatter_if[condition-true]` | 1.1649216106576149e-06 | 1.5089489128272804e-06 | -29.53% | -22.80% | 0.77x | ❌ |
| `apply_formatter_to_array[empty]` | 5.047726359145476e-06 | 5.2544584786115576e-06 | -4.10% | -3.93% | 0.96x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.209829617552409e-06 | 6.692652024966425e-06 | -7.78% | -7.21% | 0.93x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.4276285810422955e-06 | 5.819546646795254e-06 | -7.22% | -6.73% | 0.93x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0413756957195333e-05 | 1.2933223439282021e-05 | -24.19% | -19.48% | 0.81x | ❌ |
| `apply_formatters_to_dict[key-not-present]` | 1.0055340101416754e-05 | 1.2318063397455498e-05 | -22.50% | -18.37% | 0.82x | ❌ |
| `apply_formatters_to_sequence[1-item]` | 8.831703447925799e-06 | 5.856426777463718e-06 | 33.69% | 50.80% | 1.51x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.17961419576158e-06 | 6.2083792672875075e-06 | 32.37% | 47.86% | 1.48x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 9.718461255393171e-06 | 6.72602326927582e-06 | 30.79% | 44.49% | 1.44x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.0278433582377527e-05 | 7.176496847473069e-06 | 30.18% | 43.22% | 1.43x | ✅ |
| `apply_key_map[empty]` | 1.4640164936070429e-05 | 1.1885472381253695e-05 | 18.82% | 23.18% | 1.23x | ✅ |
| `apply_key_map[single-key]` | 1.7529084574164554e-05 | 1.4609864906649124e-05 | 16.65% | 19.98% | 1.20x | ✅ |
| `apply_key_map[two-keys]` | 1.9913239313062935e-05 | 1.651442296828284e-05 | 17.07% | 20.58% | 1.21x | ✅ |
| `apply_key_map[unrelated-key]` | 1.868313526121629e-05 | 1.5801117901088974e-05 | 15.43% | 18.24% | 1.18x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.685660112933409e-06 | 1.5314370075247773e-06 | 9.15% | 10.07% | 1.10x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.1745722264667212e-06 | 1.8611734765694715e-06 | 14.41% | 16.84% | 1.17x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003480516842686484 | 0.0014096990581223667 | -305.03% | -75.31% | 0.25x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006378837515718985 | 0.0015123109140143221 | -137.08% | -57.82% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.0005065781535782184 | 0.0013960529458561849 | -175.58% | -63.71% | 0.36x | ❌ |
