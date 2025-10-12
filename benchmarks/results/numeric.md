#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.150975574659657e-07 | 8.711738732938165e-07 | -6.88% | -6.44% | 0.94x | ❌ |
| `clamp[at-lower]` | 7.806618665674902e-07 | 8.79948558990556e-07 | -12.72% | -11.28% | 0.89x | ❌ |
| `clamp[at-upper]` | 8.170791315671203e-07 | 9.173264788923034e-07 | -12.27% | -10.93% | 0.89x | ❌ |
| `clamp[below-lower]` | 7.365938891467129e-07 | 8.657176153023681e-07 | -17.53% | -14.92% | 0.85x | ❌ |
| `clamp[within-bounds]` | 8.201188057271371e-07 | 9.202375604678225e-07 | -12.21% | -10.88% | 0.89x | ❌ |
