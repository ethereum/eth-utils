#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.195214487113147e-07 | 8.447710556024117e-07 | -3.08% | -2.99% | 0.97x | ❌ |
| `clamp[at-lower]` | 8.106288424404764e-07 | 8.143633436228698e-07 | -0.46% | -0.46% | 1.00x | ❌ |
| `clamp[at-upper]` | 8.214006054083541e-07 | 8.015505663071212e-07 | 2.42% | 2.48% | 1.02x | ✅ |
| `clamp[below-lower]` | 7.40237288219061e-07 | 8.448359652711277e-07 | -14.13% | -12.38% | 0.88x | ❌ |
| `clamp[within-bounds]` | 8.381320932882993e-07 | 8.221106436254055e-07 | 1.91% | 1.95% | 1.02x | ✅ |
