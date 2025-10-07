#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 7.15440873392229e-07 | 7.492590116549814e-07 | -4.73% | -4.51% | 0.95x | ❌ |
| `clamp[at-lower]` | 7.157588222745163e-07 | 7.494084336998119e-07 | -4.70% | -4.49% | 0.96x | ❌ |
| `clamp[at-upper]` | 7.145680407743865e-07 | 7.474911165093902e-07 | -4.61% | -4.40% | 0.96x | ❌ |
| `clamp[below-lower]` | 6.425672678134726e-07 | 7.977622580263819e-07 | -24.15% | -19.45% | 0.81x | ❌ |
| `clamp[within-bounds]` | 7.144899874247044e-07 | 7.846402943620272e-07 | -9.82% | -8.94% | 0.91x | ❌ |
