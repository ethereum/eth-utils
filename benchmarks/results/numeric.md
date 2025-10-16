#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.269308979908161e-07 | 8.626863463200028e-07 | -4.32% | -4.14% | 0.96x | ❌ |
| `clamp[at-lower]` | 8.291905822299552e-07 | 8.413291826819646e-07 | -1.46% | -1.44% | 0.99x | ❌ |
| `clamp[at-upper]` | 8.175691545525075e-07 | 8.400035364487477e-07 | -2.74% | -2.67% | 0.97x | ❌ |
| `clamp[below-lower]` | 7.429373766511331e-07 | 8.66127824489666e-07 | -16.58% | -14.22% | 0.86x | ❌ |
| `clamp[within-bounds]` | 8.130044962918078e-07 | 8.662721919074307e-07 | -6.55% | -6.15% | 0.94x | ❌ |
