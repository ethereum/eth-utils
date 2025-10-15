#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.46204629569758e-07 | 8.651900542562093e-07 | -2.24% | -2.19% | 0.98x | ❌ |
| `clamp[at-lower]` | 8.324432362285956e-07 | 8.67086797552146e-07 | -4.16% | -4.00% | 0.96x | ❌ |
| `clamp[at-upper]` | 8.423563210954268e-07 | 8.573971218445113e-07 | -1.79% | -1.75% | 0.98x | ❌ |
| `clamp[below-lower]` | 7.309526525343525e-07 | 8.624170239864039e-07 | -17.99% | -15.24% | 0.85x | ❌ |
| `clamp[within-bounds]` | 8.437661659309112e-07 | 8.703480705907983e-07 | -3.15% | -3.05% | 0.97x | ❌ |
