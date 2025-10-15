#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4123782975262217e-06 | 2.222757307700478e-06 | 7.86% | 8.53% | 1.09x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8762380737350703e-06 | 1.6835183561487618e-06 | 10.27% | 11.45% | 1.11x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0298052676335893e-06 | 1.7842718612482394e-06 | 12.10% | 13.76% | 1.14x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0593523456939325e-06 | 1.7861910818178254e-06 | 13.26% | 15.29% | 1.15x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.078179053905145e-06 | 1.7862844255010163e-06 | 14.05% | 16.34% | 1.16x | ✅ |
| `int_to_big_endian[255]` | 1.5078354010988786e-06 | 1.6868132082539828e-06 | -11.87% | -10.61% | 0.89x | ❌ |
| `int_to_big_endian[256]` | 1.4945910612936283e-06 | 1.7918467046506648e-06 | -19.89% | -16.59% | 0.83x | ❌ |
| `int_to_big_endian[max]` | 2.0068190296035994e-06 | 1.9301944048144673e-06 | 3.82% | 3.97% | 1.04x | ✅ |
| `int_to_big_endian[one]` | 1.5047822380620821e-06 | 1.6734609861816876e-06 | -11.21% | -10.08% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.6493170887423062e-06 | 1.6988482419239403e-06 | -3.00% | -2.92% | 0.97x | ❌ |
