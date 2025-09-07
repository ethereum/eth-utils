#### [faster_eth_utils.abi](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/abi.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_abi_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `abi_to_signature` | 0.00019107503862944293 | 0.00010509696604126524 | 45.00% | 81.81% | 1.82x | ✅ |
| `collapse_if_tuple` | 2.2860631433977914e-05 | 9.451691997614182e-06 | 58.66% | 141.87% | 2.42x | ✅ |
| `event_abi_to_log_topic` | 0.001094093482677782 | 0.0007555843416995868 | 30.94% | 44.80% | 1.45x | ✅ |
| `event_signature_to_log_topic` | 0.0008153468769359551 | 0.000607727478232489 | 25.46% | 34.16% | 1.34x | ✅ |
| `filter_abi_by_name` | 2.586747913348035e-05 | 2.2006093868778963e-05 | 14.93% | 17.55% | 1.18x | ✅ |
| `filter_abi_by_type` | 9.476681585011371e-05 | 9.942483470826555e-05 | -4.92% | -4.68% | 0.95x | ❌ |
| `function_abi_to_4byte_selector` | 0.0010752699757788054 | 0.000768115314921702 | 28.57% | 39.99% | 1.40x | ✅ |
| `function_signature_to_4byte_selector` | 0.0008335711923144537 | 0.0006147328337809725 | 26.25% | 35.60% | 1.36x | ✅ |
| `get_abi_input_names` | 6.204942447781659e-05 | 2.2160106442915627e-05 | 64.29% | 180.01% | 2.80x | ✅ |
| `get_abi_input_types` | 0.00010874761610264219 | 3.314988788271649e-05 | 69.52% | 228.05% | 3.28x | ✅ |
| `get_abi_output_names` | 5.7106239464117025e-05 | 1.9339010227054103e-05 | 66.14% | 195.29% | 2.95x | ✅ |
| `get_abi_output_types` | 8.226275412216012e-05 | 2.493959670385656e-05 | 69.68% | 229.85% | 3.30x | ✅ |
| `get_aligned_abi_inputs` | 0.00040907464450561207 | 0.00024082975500720156 | 41.13% | 69.86% | 1.70x | ✅ |
| `get_all_event_abis` | 0.000383481331818012 | 0.0004030868366985802 | -5.11% | -4.86% | 0.95x | ❌ |
| `get_all_function_abis` | 9.829096451102341e-05 | 9.887779191681389e-05 | -0.60% | -0.59% | 0.99x | ❌ |
| `get_normalized_abi_inputs` | 9.760400922814427e-05 | 2.4688062624703086e-05 | 74.71% | 295.35% | 3.95x | ✅ |
