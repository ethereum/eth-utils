#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.364698242764177e-07 | 8.768607388982376e-07 | -4.83% | -4.61% | 0.95x | ❌ |
| `clamp[at-lower]` | 8.360327388841097e-07 | 8.488894992265437e-07 | -1.54% | -1.51% | 0.98x | ❌ |
| `clamp[at-upper]` | 8.33944981153304e-07 | 8.429212880111196e-07 | -1.08% | -1.06% | 0.99x | ❌ |
| `clamp[below-lower]` | 7.581742428493741e-07 | 8.733132985151507e-07 | -15.19% | -13.18% | 0.87x | ❌ |
| `clamp[within-bounds]` | 8.36043818379044e-07 | 8.396593184114334e-07 | -0.43% | -0.43% | 1.00x | ❌ |
