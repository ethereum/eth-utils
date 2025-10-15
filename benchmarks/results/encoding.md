#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4079470556972855e-06 | 2.202077132285431e-06 | 8.55% | 9.35% | 1.09x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8563930309495367e-06 | 1.5685251255121416e-06 | 15.51% | 18.35% | 1.18x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.039615230928732e-06 | 1.7700635696197622e-06 | 13.22% | 15.23% | 1.15x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0491701482595016e-06 | 1.777296746480631e-06 | 13.27% | 15.30% | 1.15x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0729703474460175e-06 | 1.7602288621845801e-06 | 15.09% | 17.77% | 1.18x | ✅ |
| `int_to_big_endian[255]` | 1.5183450431416965e-06 | 1.6399708306527162e-06 | -8.01% | -7.42% | 0.93x | ❌ |
| `int_to_big_endian[256]` | 1.5037355156209557e-06 | 1.6391639534028848e-06 | -9.01% | -8.26% | 0.92x | ❌ |
| `int_to_big_endian[max]` | 1.9734360619057453e-06 | 2.029438009943166e-06 | -2.84% | -2.76% | 0.97x | ❌ |
| `int_to_big_endian[one]` | 1.4915570306187985e-06 | 1.6605215313937571e-06 | -11.33% | -10.18% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.6256262249919914e-06 | 1.706814125381127e-06 | -4.99% | -4.76% | 0.95x | ❌ |
