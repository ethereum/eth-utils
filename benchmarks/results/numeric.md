#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.280410316277202e-07 | 8.340123217022647e-07 | -0.72% | -0.72% | 0.99x | ❌ |
| `clamp[at-lower]` | 8.268337779180474e-07 | 8.603615544971317e-07 | -4.05% | -3.90% | 0.96x | ❌ |
| `clamp[at-upper]` | 8.306582121121218e-07 | 8.689475619368545e-07 | -4.61% | -4.41% | 0.96x | ❌ |
| `clamp[below-lower]` | 7.430159611723339e-07 | 8.931450852211253e-07 | -20.21% | -16.81% | 0.83x | ❌ |
| `clamp[within-bounds]` | 8.349179051923614e-07 | 8.44672164527774e-07 | -1.17% | -1.15% | 0.99x | ❌ |
