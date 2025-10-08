#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4467207883732716e-06 | 2.37095763064859e-06 | 3.10% | 3.20% | 1.03x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.842639922775001e-06 | 1.7292762221098422e-06 | 6.15% | 6.56% | 1.07x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0443262430340787e-06 | 1.8213404853914574e-06 | 10.91% | 12.24% | 1.12x | ✅ |
| `big_endian_to_int[one-byte]` | 2.035097547711893e-06 | 1.926674783393697e-06 | 5.33% | 5.63% | 1.06x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0835876518413397e-06 | 1.8616725395888386e-06 | 10.65% | 11.92% | 1.12x | ✅ |
| `int_to_big_endian[255]` | 1.5243693364545686e-06 | 1.6370409540355043e-06 | -7.39% | -6.88% | 0.93x | ❌ |
| `int_to_big_endian[256]` | 1.5136620848107815e-06 | 1.658628556020804e-06 | -9.58% | -8.74% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 1.9855697952746232e-06 | 2.068725156054764e-06 | -4.19% | -4.02% | 0.96x | ❌ |
| `int_to_big_endian[one]` | 1.5133037567177233e-06 | 1.7489142292859934e-06 | -15.57% | -13.47% | 0.87x | ❌ |
| `int_to_big_endian[zero]` | 1.6299440360932083e-06 | 1.681918967456573e-06 | -3.19% | -3.09% | 0.97x | ❌ |
