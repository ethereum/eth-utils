#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.38332667901366e-06 | 2.317003240578442e-06 | 2.78% | 2.86% | 1.03x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8284387699837526e-06 | 1.7478554828368748e-06 | 4.41% | 4.61% | 1.05x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.033818183289945e-06 | 1.8206152396568418e-06 | 10.48% | 11.71% | 1.12x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0434737163370797e-06 | 1.94186277246285e-06 | 4.97% | 5.23% | 1.05x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0533266893136356e-06 | 1.8589689576679935e-06 | 9.47% | 10.46% | 1.10x | ✅ |
| `int_to_big_endian[255]` | 1.5333946185033239e-06 | 1.6590762887670896e-06 | -8.20% | -7.58% | 0.92x | ❌ |
| `int_to_big_endian[256]` | 1.5054597564494759e-06 | 1.6621062895613323e-06 | -10.41% | -9.42% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 2.003666318582047e-06 | 2.002513421770888e-06 | 0.06% | 0.06% | 1.00x | ✅ |
| `int_to_big_endian[one]` | 1.5007768851775347e-06 | 1.6548237369909328e-06 | -10.26% | -9.31% | 0.91x | ❌ |
| `int_to_big_endian[zero]` | 1.6262828447579162e-06 | 1.7207599547230437e-06 | -5.81% | -5.49% | 0.95x | ❌ |
