#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4322352216846275e-06 | 2.247519532505226e-06 | 7.59% | 8.22% | 1.08x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8258753051033734e-06 | 1.635150300619197e-06 | 10.45% | 11.66% | 1.12x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.04418184464419e-06 | 1.7302066891409005e-06 | 15.36% | 18.15% | 1.18x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0410295870751846e-06 | 1.7334897761570808e-06 | 15.07% | 17.74% | 1.18x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.062990986531968e-06 | 1.723403254781786e-06 | 16.46% | 19.70% | 1.20x | ✅ |
| `int_to_big_endian[255]` | 1.5414372258453175e-06 | 1.6693802343147517e-06 | -8.30% | -7.66% | 0.92x | ❌ |
| `int_to_big_endian[256]` | 1.5321311371457753e-06 | 1.6592839778600393e-06 | -8.30% | -7.66% | 0.92x | ❌ |
| `int_to_big_endian[max]` | 1.9834794911829095e-06 | 2.0947022017363523e-06 | -5.61% | -5.31% | 0.95x | ❌ |
| `int_to_big_endian[one]` | 1.511382617709229e-06 | 1.6733567239021426e-06 | -10.72% | -9.68% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.6483941263437197e-06 | 1.7036200797961487e-06 | -3.35% | -3.24% | 0.97x | ❌ |
