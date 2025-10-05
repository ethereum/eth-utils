#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4428845912461394e-06 | 2.321556118555306e-06 | 4.97% | 5.23% | 1.05x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8216411795101506e-06 | 1.7171909332182362e-06 | 5.73% | 6.08% | 1.06x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0311782654761257e-06 | 1.7865179711688738e-06 | 12.05% | 13.69% | 1.14x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0347655518412393e-06 | 1.8197202851154973e-06 | 10.57% | 11.82% | 1.12x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.073023071791085e-06 | 1.8031487361808995e-06 | 13.02% | 14.97% | 1.15x | ✅ |
| `int_to_big_endian[255]` | 1.5023883257522558e-06 | 1.6497180814006325e-06 | -9.81% | -8.93% | 0.91x | ❌ |
| `int_to_big_endian[256]` | 1.48634687949431e-06 | 1.6373031624682752e-06 | -10.16% | -9.22% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 1.9922801368357732e-06 | 2.0339579148664676e-06 | -2.09% | -2.05% | 0.98x | ❌ |
| `int_to_big_endian[one]` | 1.4947842438942595e-06 | 1.6166238833614146e-06 | -8.15% | -7.54% | 0.92x | ❌ |
| `int_to_big_endian[zero]` | 1.630862227313909e-06 | 1.687081535763241e-06 | -3.45% | -3.33% | 0.97x | ❌ |
