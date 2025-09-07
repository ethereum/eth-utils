#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.2864923652642e-07 | 9.58208663171824e-07 | -15.64% | -13.52% | 0.86x | ❌ |
| `clamp[at-lower]` | 8.466883790834184e-07 | 8.548212113164039e-07 | -0.96% | -0.95% | 0.99x | ❌ |
| `clamp[at-upper]` | 8.098393813512536e-07 | 8.396459524711761e-07 | -3.68% | -3.55% | 0.96x | ❌ |
| `clamp[below-lower]` | 7.383467959945065e-07 | 8.592939536483941e-07 | -16.38% | -14.08% | 0.86x | ❌ |
| `clamp[within-bounds]` | 8.344369100976118e-07 | 8.601785449868665e-07 | -3.08% | -2.99% | 0.97x | ❌ |
