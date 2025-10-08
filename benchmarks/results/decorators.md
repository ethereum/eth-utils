#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2524360013196388e-05 | 2.247385322652655e-05 | -79.44% | -44.27% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5627004912872073e-06 | 1.4087220741388446e-06 | 9.85% | 10.93% | 1.11x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.810288642620458e-06 | 1.374063050315215e-05 | -55.96% | -35.88% | 0.64x | ❌ |
| `return_arg_type[float-pos0]` | 2.579697144205748e-06 | 2.44778713058678e-06 | 5.11% | 5.39% | 1.05x | ✅ |
| `return_arg_type[int-pos0]` | 2.92602804722837e-06 | 2.7091774800127583e-06 | 7.41% | 8.00% | 1.08x | ✅ |
| `return_arg_type[int-pos1]` | 2.901581715195326e-06 | 2.624247012163069e-06 | 9.56% | 10.57% | 1.11x | ✅ |
| `return_arg_type[str-pos0]` | 3.04665378153051e-06 | 3.269824996301361e-06 | -7.33% | -6.83% | 0.93x | ❌ |
| `return_arg_type[str-pos1]` | 3.01565790282166e-06 | 3.2573863928324616e-06 | -8.02% | -7.42% | 0.93x | ❌ |
