#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.145921060929767e-07 | 8.371477761300237e-07 | -2.77% | -2.69% | 0.97x | ❌ |
| `clamp[at-lower]` | 8.135947454506445e-07 | 8.390600694572169e-07 | -3.13% | -3.03% | 0.97x | ❌ |
| `clamp[at-upper]` | 8.275764213373933e-07 | 8.095190253283765e-07 | 2.18% | 2.23% | 1.02x | ✅ |
| `clamp[below-lower]` | 7.323473661871919e-07 | 8.468713189625456e-07 | -15.64% | -13.52% | 0.86x | ❌ |
| `clamp[within-bounds]` | 8.22167912153966e-07 | 8.310940626861064e-07 | -1.09% | -1.07% | 0.99x | ❌ |
