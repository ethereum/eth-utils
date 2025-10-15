#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.3113905267707e-07 | 8.521896730063341e-07 | -2.53% | -2.47% | 0.98x | ❌ |
| `clamp[at-lower]` | 8.302729752994078e-07 | 8.333534134337858e-07 | -0.37% | -0.37% | 1.00x | ❌ |
| `clamp[at-upper]` | 8.40763441925285e-07 | 8.401039764874697e-07 | 0.08% | 0.08% | 1.00x | ✅ |
| `clamp[below-lower]` | 7.405607659391571e-07 | 8.809575992639876e-07 | -18.96% | -15.94% | 0.84x | ❌ |
| `clamp[within-bounds]` | 8.310692741034117e-07 | 8.665556660636467e-07 | -4.27% | -4.10% | 0.96x | ❌ |
