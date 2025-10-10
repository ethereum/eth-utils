#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2541118084961647e-05 | 2.231643085696352e-05 | -77.95% | -43.80% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5802283211829041e-06 | 1.403303500197206e-06 | 11.20% | 12.61% | 1.13x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.909617346636187e-06 | 1.365289449347541e-05 | -53.24% | -34.74% | 0.65x | ❌ |
| `return_arg_type[float-pos0]` | 2.616832500945978e-06 | 2.3395185832414035e-06 | 10.60% | 11.85% | 1.12x | ✅ |
| `return_arg_type[int-pos0]` | 2.9500155901156142e-06 | 2.708324341492333e-06 | 8.19% | 8.92% | 1.09x | ✅ |
| `return_arg_type[int-pos1]` | 2.90768018496723e-06 | 2.638459576886299e-06 | 9.26% | 10.20% | 1.10x | ✅ |
| `return_arg_type[str-pos0]` | 2.9752104398959057e-06 | 3.2717140437921983e-06 | -9.97% | -9.06% | 0.91x | ❌ |
| `return_arg_type[str-pos1]` | 2.92766765331511e-06 | 3.2049716012458797e-06 | -9.47% | -8.65% | 0.91x | ❌ |
