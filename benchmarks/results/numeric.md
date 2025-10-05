#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.225081937696702e-07 | 8.466350206466003e-07 | -2.93% | -2.85% | 0.97x | ❌ |
| `clamp[at-lower]` | 8.051603296439752e-07 | 8.440347858616941e-07 | -4.83% | -4.61% | 0.95x | ❌ |
| `clamp[at-upper]` | 8.299483051521816e-07 | 8.306221365455628e-07 | -0.08% | -0.08% | 1.00x | ❌ |
| `clamp[below-lower]` | 7.435570545562785e-07 | 8.707691691702668e-07 | -17.11% | -14.61% | 0.85x | ❌ |
| `clamp[within-bounds]` | 8.286139332616395e-07 | 8.697048089499918e-07 | -4.96% | -4.72% | 0.95x | ❌ |
