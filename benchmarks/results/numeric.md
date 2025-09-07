#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 7.957000764938688e-07 | 8.111308467761915e-07 | -1.94% | -1.90% | 0.98x | ❌ |
| `clamp[at-lower]` | 8.19497145952035e-07 | 8.405107604187738e-07 | -2.56% | -2.50% | 0.97x | ❌ |
| `clamp[at-upper]` | 8.131456692555117e-07 | 8.305493222202548e-07 | -2.14% | -2.10% | 0.98x | ❌ |
| `clamp[below-lower]` | 7.225087637571749e-07 | 8.562552112706469e-07 | -18.51% | -15.62% | 0.84x | ❌ |
| `clamp[within-bounds]` | 8.110669384484079e-07 | 8.277223549652395e-07 | -2.05% | -2.01% | 0.98x | ❌ |
