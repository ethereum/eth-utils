#### [faster_eth_utils.abi](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/abi.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_abi_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `abi_to_signature` | 0.00018923258591345697 | 0.00010437370546948018 | 44.84% | 81.30% | 1.81x | ✅ |
| `collapse_if_tuple` | 2.349326347911042e-05 | 9.650757136219586e-06 | 58.92% | 143.43% | 2.43x | ✅ |
| `event_abi_to_log_topic` | 0.0010783377900794886 | 0.0007458129080193219 | 30.84% | 44.59% | 1.45x | ✅ |
| `event_signature_to_log_topic` | 0.0007940531105445011 | 0.000601515979844324 | 24.25% | 32.01% | 1.32x | ✅ |
| `filter_abi_by_name` | 2.5883170419442463e-05 | 2.177492517711721e-05 | 15.87% | 18.87% | 1.19x | ✅ |
| `filter_abi_by_type` | 9.577241987280123e-05 | 9.852231710049096e-05 | -2.87% | -2.79% | 0.97x | ❌ |
| `function_abi_to_4byte_selector` | 0.001058930160322395 | 0.0007440677638555369 | 29.73% | 42.32% | 1.42x | ✅ |
| `function_signature_to_4byte_selector` | 0.0008254443461601988 | 0.0006082144286651661 | 26.32% | 35.72% | 1.36x | ✅ |
| `get_abi_input_names` | 6.151997042694395e-05 | 2.2397570227914416e-05 | 63.59% | 174.67% | 2.75x | ✅ |
| `get_abi_input_types` | 0.000107761112268935 | 3.312849548706397e-05 | 69.26% | 225.28% | 3.25x | ✅ |
| `get_abi_output_names` | 5.5881138685598225e-05 | 1.9136163231292064e-05 | 65.76% | 192.02% | 2.92x | ✅ |
| `get_abi_output_types` | 8.068547049371071e-05 | 2.4758777417677297e-05 | 69.31% | 225.89% | 3.26x | ✅ |
| `get_aligned_abi_inputs` | 0.0004063915951085167 | 0.00023152964742223503 | 43.03% | 75.52% | 1.76x | ✅ |
| `get_all_event_abis` | 0.0003851368739358776 | 0.0004023028758560039 | -4.46% | -4.27% | 0.96x | ❌ |
| `get_all_function_abis` | 9.880792002913028e-05 | 9.87767947975063e-05 | 0.03% | 0.03% | 1.00x | ✅ |
| `get_normalized_abi_inputs` | 9.801779252504385e-05 | 2.4587602206751436e-05 | 74.92% | 298.65% | 3.99x | ✅ |
