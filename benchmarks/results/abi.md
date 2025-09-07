#### [faster_eth_utils.abi](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/faster_eth_utils/abi.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/benchmarks/test_abi_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `abi_to_signature` | 0.00019374740243081876 | 0.0001034394659784911 | 46.61% | 87.31% | 1.87x | ✅ |
| `collapse_if_tuple` | 2.2853424528776532e-05 | 8.90031410528679e-06 | 61.05% | 156.77% | 2.57x | ✅ |
| `event_abi_to_log_topic` | 0.0010794066600939003 | 0.0007503765669352538 | 30.48% | 43.85% | 1.44x | ✅ |
| `event_signature_to_log_topic` | 0.0007902260067542148 | 0.0006027902076285 | 23.72% | 31.09% | 1.31x | ✅ |
| `filter_abi_by_name` | 2.5473868108256865e-05 | 2.1637594398531883e-05 | 15.06% | 17.73% | 1.18x | ✅ |
| `filter_abi_by_type` | 9.206838525005961e-05 | 9.91227872364438e-05 | -7.66% | -7.12% | 0.93x | ❌ |
| `function_abi_to_4byte_selector` | 0.0010610348495965058 | 0.0007401391250010753 | 30.24% | 43.36% | 1.43x | ✅ |
| `function_signature_to_4byte_selector` | 0.000837662541665433 | 0.0006035340293932122 | 27.95% | 38.79% | 1.39x | ✅ |
| `get_abi_input_names` | 6.252126363831e-05 | 2.156445836992112e-05 | 65.51% | 189.93% | 2.90x | ✅ |
| `get_abi_input_types` | 0.00010747639516923544 | 3.249337951322179e-05 | 69.77% | 230.76% | 3.31x | ✅ |
| `get_abi_output_names` | 5.551595418901621e-05 | 1.8842370461684197e-05 | 66.06% | 194.63% | 2.95x | ✅ |
| `get_abi_output_types` | 8.188030631707779e-05 | 2.4122165818571778e-05 | 70.54% | 239.44% | 3.39x | ✅ |
| `get_aligned_abi_inputs` | 0.00040594847676644343 | 0.0002334605901815131 | 42.49% | 73.88% | 1.74x | ✅ |
| `get_all_event_abis` | 0.0003798321305920908 | 0.0004078330403996594 | -7.37% | -6.87% | 0.93x | ❌ |
| `get_all_function_abis` | 9.607419444555122e-05 | 9.93914619401028e-05 | -3.45% | -3.34% | 0.97x | ❌ |
| `get_normalized_abi_inputs` | 9.720643165548031e-05 | 2.4627981029850383e-05 | 74.66% | 294.70% | 3.95x | ✅ |
