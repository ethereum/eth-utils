#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.114542046416507e-07 | 8.372819925893278e-07 | -3.18% | -3.08% | 0.97x | ❌ |
| `clamp[at-lower]` | 7.97508848943297e-07 | 8.70930256713088e-07 | -9.21% | -8.43% | 0.92x | ❌ |
| `clamp[at-upper]` | 8.157648078704901e-07 | 8.22450073514658e-07 | -0.82% | -0.81% | 0.99x | ❌ |
| `clamp[below-lower]` | 7.271966296175208e-07 | 8.744994527002811e-07 | -20.26% | -16.84% | 0.83x | ❌ |
| `clamp[within-bounds]` | 7.904654634495457e-07 | 8.465839073761251e-07 | -7.10% | -6.63% | 0.93x | ❌ |
