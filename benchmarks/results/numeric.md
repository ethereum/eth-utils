#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.1825647971946e-07 | 8.647313459212868e-07 | -5.68% | -5.37% | 0.95x | ❌ |
| `clamp[at-lower]` | 8.334617518475367e-07 | 8.678881286685172e-07 | -4.13% | -3.97% | 0.96x | ❌ |
| `clamp[at-upper]` | 8.340191022910438e-07 | 8.428840412600069e-07 | -1.06% | -1.05% | 0.99x | ❌ |
| `clamp[below-lower]` | 7.37979828263448e-07 | 8.658498109131267e-07 | -17.33% | -14.77% | 0.85x | ❌ |
| `clamp[within-bounds]` | 8.129585638363592e-07 | 8.669831644485924e-07 | -6.65% | -6.23% | 0.94x | ❌ |
