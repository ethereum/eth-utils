#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.224094276369236e-07 | 8.173286781948871e-07 | 0.62% | 0.62% | 1.01x | ✅ |
| `clamp[at-lower]` | 8.097283925046452e-07 | 8.298326862807485e-07 | -2.48% | -2.42% | 0.98x | ❌ |
| `clamp[at-upper]` | 7.824067935833224e-07 | 8.278365506291082e-07 | -5.81% | -5.49% | 0.95x | ❌ |
| `clamp[below-lower]` | 7.404293272090526e-07 | 8.494656256440755e-07 | -14.73% | -12.84% | 0.87x | ❌ |
| `clamp[within-bounds]` | 7.944492003620207e-07 | 8.11023377979098e-07 | -2.09% | -2.04% | 0.98x | ❌ |
