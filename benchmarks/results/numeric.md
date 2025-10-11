#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.26816148463494e-07 | 8.356956856714835e-07 | -1.07% | -1.06% | 0.99x | ❌ |
| `clamp[at-lower]` | 8.263022342830588e-07 | 8.157824850067333e-07 | 1.27% | 1.29% | 1.01x | ✅ |
| `clamp[at-upper]` | 8.235121434064629e-07 | 7.999869024873813e-07 | 2.86% | 2.94% | 1.03x | ✅ |
| `clamp[below-lower]` | 7.326309966327166e-07 | 8.542141970047065e-07 | -16.60% | -14.23% | 0.86x | ❌ |
| `clamp[within-bounds]` | 8.205276404666917e-07 | 8.401647666729582e-07 | -2.39% | -2.34% | 0.98x | ❌ |
