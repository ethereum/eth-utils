#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.420959925876607e-06 | 2.251267343918965e-06 | 7.01% | 7.54% | 1.08x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8418734481587369e-06 | 1.6574842503899245e-06 | 10.01% | 11.12% | 1.11x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0523347705867875e-06 | 1.7522488165850789e-06 | 14.62% | 17.13% | 1.17x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0472983238128707e-06 | 1.7433322327500355e-06 | 14.85% | 17.44% | 1.17x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0824135250291405e-06 | 1.7222009365818418e-06 | 17.30% | 20.92% | 1.21x | ✅ |
| `int_to_big_endian[255]` | 1.467576100179295e-06 | 1.6047244925693912e-06 | -9.35% | -8.55% | 0.91x | ❌ |
| `int_to_big_endian[256]` | 1.4915517120832076e-06 | 1.6106246195476133e-06 | -7.98% | -7.39% | 0.93x | ❌ |
| `int_to_big_endian[max]` | 1.9952611957985426e-06 | 2.0535641054032553e-06 | -2.92% | -2.84% | 0.97x | ❌ |
| `int_to_big_endian[one]` | 1.5056964663154522e-06 | 1.6029390802013573e-06 | -6.46% | -6.07% | 0.94x | ❌ |
| `int_to_big_endian[zero]` | 1.6408775993032738e-06 | 1.67701618263224e-06 | -2.20% | -2.15% | 0.98x | ❌ |
