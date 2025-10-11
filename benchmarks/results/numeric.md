#### [faster_eth_utils.numeric](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/numeric.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_numeric_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `clamp[above-upper]` | 8.178955670836853e-07 | 8.372803571089431e-07 | -2.37% | -2.32% | 0.98x | ❌ |
| `clamp[at-lower]` | 7.949388116164515e-07 | 8.439654676899903e-07 | -6.17% | -5.81% | 0.94x | ❌ |
| `clamp[at-upper]` | 8.196339435258522e-07 | 8.112989646633577e-07 | 1.02% | 1.03% | 1.01x | ✅ |
| `clamp[below-lower]` | 7.171824054635504e-07 | 8.56177404650906e-07 | -19.38% | -16.23% | 0.84x | ❌ |
| `clamp[within-bounds]` | 8.210906570229605e-07 | 8.415725311888318e-07 | -2.49% | -2.43% | 0.98x | ❌ |
