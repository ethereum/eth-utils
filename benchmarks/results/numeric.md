#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.209113874114527e-07 | 8.48194776902282e-07 | -3.32% | -3.22% | 0.97x | ❌ |
| `clamp[at-lower]` | 8.180418506179578e-07 | 8.320323883804212e-07 | -1.71% | -1.68% | 0.98x | ❌ |
| `clamp[at-upper]` | 8.166781794632994e-07 | 8.557333244773457e-07 | -4.78% | -4.56% | 0.95x | ❌ |
| `clamp[below-lower]` | 7.266749662525744e-07 | 8.575430088014545e-07 | -18.01% | -15.26% | 0.85x | ❌ |
| `clamp[within-bounds]` | 8.182260682215013e-07 | 8.449321329625705e-07 | -3.26% | -3.16% | 0.97x | ❌ |
