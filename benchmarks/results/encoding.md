#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.420835928363434e-06 | 2.314282746701868e-06 | 4.40% | 4.60% | 1.05x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8546715630306546e-06 | 1.7726455456327375e-06 | 4.42% | 4.63% | 1.05x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.059939511981796e-06 | 1.8385081934177397e-06 | 10.75% | 12.04% | 1.12x | ✅ |
| `big_endian_to_int[one-byte]` | 2.029577402088145e-06 | 1.8380779666736872e-06 | 9.44% | 10.42% | 1.10x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0414574221392994e-06 | 1.8437826533629573e-06 | 9.68% | 10.72% | 1.11x | ✅ |
| `int_to_big_endian[255]` | 1.5173681468932036e-06 | 1.6417337854748811e-06 | -8.20% | -7.58% | 0.92x | ❌ |
| `int_to_big_endian[256]` | 1.4907205475190348e-06 | 1.6325565420710914e-06 | -9.51% | -8.69% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 1.985849747669666e-06 | 2.023214145627781e-06 | -1.88% | -1.85% | 0.98x | ❌ |
| `int_to_big_endian[one]` | 1.492260951158121e-06 | 1.630819506773207e-06 | -9.29% | -8.50% | 0.92x | ❌ |
| `int_to_big_endian[zero]` | 1.6363633863816405e-06 | 1.6961349519889728e-06 | -3.65% | -3.52% | 0.96x | ❌ |
