#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.220058720703767e-07 | 8.531349909955205e-07 | -3.79% | -3.65% | 0.96x | ❌ |
| `clamp[at-lower]` | 8.225318309652768e-07 | 8.362990474480115e-07 | -1.67% | -1.65% | 0.98x | ❌ |
| `clamp[at-upper]` | 8.208203033830523e-07 | 8.196076382840636e-07 | 0.15% | 0.15% | 1.00x | ✅ |
| `clamp[below-lower]` | 7.301727223829184e-07 | 8.660044118980953e-07 | -18.60% | -15.68% | 0.84x | ❌ |
| `clamp[within-bounds]` | 8.003067782045354e-07 | 8.574083140158287e-07 | -7.13% | -6.66% | 0.93x | ❌ |
