#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.337066368210525e-07 | 8.375383528601264e-07 | -0.46% | -0.46% | 1.00x | ❌ |
| `clamp[at-lower]` | 8.372041386006645e-07 | 8.417512290961655e-07 | -0.54% | -0.54% | 0.99x | ❌ |
| `clamp[at-upper]` | 8.365708567848253e-07 | 8.357696876024174e-07 | 0.10% | 0.10% | 1.00x | ✅ |
| `clamp[below-lower]` | 7.40862739411033e-07 | 8.688744951340654e-07 | -17.28% | -14.73% | 0.85x | ❌ |
| `clamp[within-bounds]` | 8.087321894943818e-07 | 8.400343522168448e-07 | -3.87% | -3.73% | 0.96x | ❌ |
