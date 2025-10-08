#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.251837479450115e-07 | 8.426176412186793e-07 | -2.11% | -2.07% | 0.98x | ❌ |
| `clamp[at-lower]` | 8.029310390011654e-07 | 8.253209239382375e-07 | -2.79% | -2.71% | 0.97x | ❌ |
| `clamp[at-upper]` | 8.284310943464545e-07 | 8.509057335704204e-07 | -2.71% | -2.64% | 0.97x | ❌ |
| `clamp[below-lower]` | 7.362035894894845e-07 | 8.49201167857642e-07 | -15.35% | -13.31% | 0.87x | ❌ |
| `clamp[within-bounds]` | 8.04700539594902e-07 | 8.389950034560486e-07 | -4.26% | -4.09% | 0.96x | ❌ |
