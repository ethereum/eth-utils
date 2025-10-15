#### [faster_eth_utils.applicators](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/applicators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_applicators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `apply_formatter_at_index[at-index-0]` | 7.98055456105445e-06 | 9.126867852441441e-06 | -14.36% | -12.56% | 0.87x | ❌ |
| `apply_formatter_at_index[at-index-1]` | 8.010175377275663e-06 | 9.153209870602463e-06 | -14.27% | -12.49% | 0.88x | ❌ |
| `apply_formatter_at_index[at-index-2]` | 7.937839257108622e-06 | 9.053897055663895e-06 | -14.06% | -12.33% | 0.88x | ❌ |
| `apply_formatter_if[condition-false]` | 9.190744867735526e-07 | 1.0843455142492844e-06 | -17.98% | -15.24% | 0.85x | ❌ |
| `apply_formatter_if[condition-true]` | 1.148937852335178e-06 | 1.5278583678374982e-06 | -32.98% | -24.80% | 0.75x | ❌ |
| `apply_formatter_to_array[empty]` | 5.213052539186588e-06 | 5.350087259207596e-06 | -2.63% | -2.56% | 0.97x | ❌ |
| `apply_formatter_to_array[multi-item]` | 6.301926908869252e-06 | 6.703848385488062e-06 | -6.38% | -6.00% | 0.94x | ❌ |
| `apply_formatter_to_array[single-item]` | 5.592489398822319e-06 | 5.939131855932141e-06 | -6.20% | -5.84% | 0.94x | ❌ |
| `apply_formatters_to_dict[all-keys-present]` | 1.0568206750575576e-05 | 8.276620893976185e-06 | 21.68% | 27.69% | 1.28x | ✅ |
| `apply_formatters_to_dict[key-not-present]` | 1.0012916456746719e-05 | 7.169800016517853e-06 | 28.39% | 39.65% | 1.40x | ✅ |
| `apply_formatters_to_sequence[1-item]` | 9.03242975697751e-06 | 6.069353589288651e-06 | 32.80% | 48.82% | 1.49x | ✅ |
| `apply_formatters_to_sequence[2-items]` | 9.38915220181541e-06 | 6.383245144656829e-06 | 32.01% | 47.09% | 1.47x | ✅ |
| `apply_formatters_to_sequence[3-items]` | 1.0082617447146369e-05 | 6.828878164159356e-06 | 32.27% | 47.65% | 1.48x | ✅ |
| `apply_formatters_to_sequence[4-items]` | 1.063892393052308e-05 | 7.252477894661564e-06 | 31.83% | 46.69% | 1.47x | ✅ |
| `apply_key_map[empty]` | 1.4801685286524444e-05 | 7.400413182930745e-06 | 50.00% | 100.01% | 2.00x | ✅ |
| `apply_key_map[single-key]` | 1.7218312752356643e-05 | 9.356428712209926e-06 | 45.66% | 84.03% | 1.84x | ✅ |
| `apply_key_map[two-keys]` | 1.9486952541056332e-05 | 1.1172264100780815e-05 | 42.67% | 74.42% | 1.74x | ✅ |
| `apply_key_map[unrelated-key]` | 1.8781864568070976e-05 | 1.0194764042475318e-05 | 45.72% | 84.23% | 1.84x | ✅ |
| `apply_one_of_formatters[first-matches]` | 1.7241143816929614e-06 | 1.603904644257187e-06 | 6.97% | 7.49% | 1.07x | ✅ |
| `apply_one_of_formatters[second-matches]` | 2.2767689178686083e-06 | 2.0690453608763973e-06 | 9.12% | 10.04% | 1.10x | ✅ |
| `combine_argument_formatters[one-formatter]` | 0.0003561456601344685 | 0.001287409128455297 | -261.48% | -72.34% | 0.28x | ❌ |
| `combine_argument_formatters[three-formatters]` | 0.0006525450838616875 | 0.0015663421124592393 | -140.04% | -58.34% | 0.42x | ❌ |
| `combine_argument_formatters[two-formatters]` | 0.000466821418649232 | 0.0014420513805606552 | -208.91% | -67.63% | 0.32x | ❌ |
