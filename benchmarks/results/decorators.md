#### [faster_eth_utils.decorators](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/decorators.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_decorators_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `replace_exceptions[mapped-exception]` | 1.2589229457362622e-05 | 2.2322271946521506e-05 | -77.31% | -43.60% | 0.56x | ❌ |
| `replace_exceptions[no-exception]` | 1.5386396670161753e-06 | 1.3995362599609612e-06 | 9.04% | 9.94% | 1.10x | ✅ |
| `replace_exceptions[unmapped-exception]` | 8.846381484618613e-06 | 1.3645013189817708e-05 | -54.24% | -35.17% | 0.65x | ❌ |
| `return_arg_type[float-pos0]` | 2.5519461006354767e-06 | 2.4153847498532182e-06 | 5.35% | 5.65% | 1.06x | ✅ |
| `return_arg_type[int-pos0]` | 2.913296505447996e-06 | 2.7062292564260053e-06 | 7.11% | 7.65% | 1.08x | ✅ |
| `return_arg_type[int-pos1]` | 2.8835792187161397e-06 | 2.6240138764199324e-06 | 9.00% | 9.89% | 1.10x | ✅ |
| `return_arg_type[str-pos0]` | 3.064398625436754e-06 | 3.235140147005316e-06 | -5.57% | -5.28% | 0.95x | ❌ |
| `return_arg_type[str-pos1]` | 2.9786517748184538e-06 | 3.1836043648269054e-06 | -6.88% | -6.44% | 0.94x | ❌ |
