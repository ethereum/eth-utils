#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2526895823829604e-05 | 2.1942156537101723e-05 | -75.16% | -42.91% | 0.57x | ❌ |
| `replace_exceptions[no-exception]` | 1.572951318368917e-06 | 1.443914218911658e-06 | 8.20% | 8.94% | 1.09x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.760394730974731e-06 | 1.3642931908226466e-05 | -55.73% | -35.79% | 0.64x | ❌ |
| `return_arg_type[float-pos0]` | 2.5637636378935076e-06 | 2.2620963877509528e-06 | 11.77% | 13.34% | 1.13x | ✅ |
| `return_arg_type[int-pos0]` | 2.90516973279539e-06 | 2.686804785053386e-06 | 7.52% | 8.13% | 1.08x | ✅ |
| `return_arg_type[int-pos1]` | 2.874429311484151e-06 | 2.633927787769869e-06 | 8.37% | 9.13% | 1.09x | ✅ |
| `return_arg_type[str-pos0]` | 3.0132811485002554e-06 | 3.210070211275367e-06 | -6.53% | -6.13% | 0.94x | ❌ |
| `return_arg_type[str-pos1]` | 2.9455728383154966e-06 | 3.1995506071462194e-06 | -8.62% | -7.94% | 0.92x | ❌ |
