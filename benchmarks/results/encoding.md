#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.426553966668736e-06 | 2.2342292285282545e-06 | 7.93% | 8.61% | 1.09x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8472096379282725e-06 | 1.7073360526989098e-06 | 7.57% | 8.19% | 1.08x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0671511443593716e-06 | 1.8064986486501636e-06 | 12.61% | 14.43% | 1.14x | ✅ |
| `big_endian_to_int[one-byte]` | 2.054811130951338e-06 | 1.8084167883262068e-06 | 11.99% | 13.62% | 1.14x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0800615537055623e-06 | 1.784107165152992e-06 | 14.23% | 16.59% | 1.17x | ✅ |
| `int_to_big_endian[255]` | 1.5267155126956642e-06 | 1.6937737023194361e-06 | -10.94% | -9.86% | 0.90x | ❌ |
| `int_to_big_endian[256]` | 1.5116799097922578e-06 | 1.7539367933154825e-06 | -16.03% | -13.81% | 0.86x | ❌ |
| `int_to_big_endian[max]` | 1.988317641855862e-06 | 2.0226922835795554e-06 | -1.73% | -1.70% | 0.98x | ❌ |
| `int_to_big_endian[one]` | 1.4987839319190507e-06 | 1.6507753011426454e-06 | -10.14% | -9.21% | 0.91x | ❌ |
| `int_to_big_endian[zero]` | 1.6526102594776132e-06 | 1.6715894086238672e-06 | -1.15% | -1.14% | 0.99x | ❌ |
