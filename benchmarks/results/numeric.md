#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.061189569999723e-07 | 8.241021425107907e-07 | -2.23% | -2.18% | 0.98x | ❌ |
| `clamp[at-lower]` | 8.122816673219092e-07 | 8.111588094255814e-07 | 0.14% | 0.14% | 1.00x | ✅ |
| `clamp[at-upper]` | 8.002791644672808e-07 | 8.014416869887515e-07 | -0.15% | -0.15% | 1.00x | ❌ |
| `clamp[below-lower]` | 7.367550907863785e-07 | 8.64986627328704e-07 | -17.40% | -14.82% | 0.85x | ❌ |
| `clamp[within-bounds]` | 8.289552429488111e-07 | 8.449963961880114e-07 | -1.94% | -1.90% | 0.98x | ❌ |
