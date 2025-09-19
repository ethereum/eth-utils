#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4151586278544696e-06 | 2.2306932886000202e-06 | 7.64% | 8.27% | 1.08x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8169803192665467e-06 | 1.6726439306364425e-06 | 7.94% | 8.63% | 1.09x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.01821145313268e-06 | 1.751806394633347e-06 | 13.20% | 15.21% | 1.15x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0244193199318963e-06 | 1.7350777125237867e-06 | 14.29% | 16.68% | 1.17x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.057553349221559e-06 | 1.769824900044586e-06 | 13.98% | 16.26% | 1.16x | ✅ |
| `int_to_big_endian[255]` | 1.5399027823618872e-06 | 1.5985831986805498e-06 | -3.81% | -3.67% | 0.96x | ❌ |
| `int_to_big_endian[256]` | 1.510225555466006e-06 | 1.5988807371925841e-06 | -5.87% | -5.54% | 0.94x | ❌ |
| `int_to_big_endian[max]` | 2.06250208351326e-06 | 1.941329348050414e-06 | 5.88% | 6.24% | 1.06x | ✅ |
| `int_to_big_endian[one]` | 1.5077397201752154e-06 | 1.600203674741457e-06 | -6.13% | -5.78% | 0.94x | ❌ |
| `int_to_big_endian[zero]` | 1.620958461478056e-06 | 1.66739636109565e-06 | -2.86% | -2.79% | 0.97x | ❌ |
