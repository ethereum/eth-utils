#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.143701707202694e-07 | 8.332797872952696e-07 | -2.32% | -2.27% | 0.98x | ❌ |
| `clamp[at-lower]` | 8.265114327739555e-07 | 8.13265464563061e-07 | 1.60% | 1.63% | 1.02x | ✅ |
| `clamp[at-upper]` | 8.010691059296027e-07 | 8.408958992071407e-07 | -4.97% | -4.74% | 0.95x | ❌ |
| `clamp[below-lower]` | 7.346219164002733e-07 | 8.431636146104422e-07 | -14.78% | -12.87% | 0.87x | ❌ |
| `clamp[within-bounds]` | 8.224798273416474e-07 | 8.345947878605824e-07 | -1.47% | -1.45% | 0.99x | ❌ |
