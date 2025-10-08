#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.409977437074911e-07 | 8.500308956840233e-07 | -1.07% | -1.06% | 0.99x | ❌ |
| `clamp[at-lower]` | 8.238185372756737e-07 | 8.441207609275819e-07 | -2.46% | -2.41% | 0.98x | ❌ |
| `clamp[at-upper]` | 8.388593630806781e-07 | 8.635802729490294e-07 | -2.95% | -2.86% | 0.97x | ❌ |
| `clamp[below-lower]` | 7.462054272931933e-07 | 8.51743879379932e-07 | -14.14% | -12.39% | 0.88x | ❌ |
| `clamp[within-bounds]` | 8.356488670681952e-07 | 8.542377364654614e-07 | -2.22% | -2.18% | 0.98x | ❌ |
