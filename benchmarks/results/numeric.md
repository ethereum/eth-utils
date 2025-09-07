#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.345183178270137e-07 | 8.192167881258219e-07 | 1.83% | 1.87% | 1.02x | ✅ |
| `clamp[at-lower]` | 8.312445111021158e-07 | 8.192924629562162e-07 | 1.44% | 1.46% | 1.01x | ✅ |
| `clamp[at-upper]` | 8.352211903791568e-07 | 8.463325249262955e-07 | -1.33% | -1.31% | 0.99x | ❌ |
| `clamp[below-lower]` | 7.464158101340258e-07 | 9.953582663480262e-07 | -33.35% | -25.01% | 0.75x | ❌ |
| `clamp[within-bounds]` | 8.367768045132091e-07 | 8.318910226309549e-07 | 0.58% | 0.59% | 1.01x | ✅ |
