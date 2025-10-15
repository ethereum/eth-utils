#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2588596191049775e-05 | 2.2187561415745693e-05 | -76.25% | -43.26% | 0.57x | ❌ |
| `replace_exceptions[no-exception]` | 1.5547313572072114e-06 | 1.465226823430006e-06 | 5.76% | 6.11% | 1.06x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.88365540869648e-06 | 1.366734315639707e-05 | -53.85% | -35.00% | 0.65x | ❌ |
| `return_arg_type[float-pos0]` | 2.6285368295736907e-06 | 2.326612634491473e-06 | 11.49% | 12.98% | 1.13x | ✅ |
| `return_arg_type[int-pos0]` | 2.909014442991152e-06 | 2.7325769401415033e-06 | 6.07% | 6.46% | 1.06x | ✅ |
| `return_arg_type[int-pos1]` | 2.859863406951018e-06 | 2.679687438872907e-06 | 6.30% | 6.72% | 1.07x | ✅ |
| `return_arg_type[str-pos0]` | 3.025008784614913e-06 | 3.421381853740574e-06 | -13.10% | -11.59% | 0.88x | ❌ |
| `return_arg_type[str-pos1]` | 2.8971349474998426e-06 | 3.4097851426988742e-06 | -17.70% | -15.03% | 0.85x | ❌ |
