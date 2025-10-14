#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4187428502621254e-06 | 2.295940923003085e-06 | 5.08% | 5.35% | 1.05x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8457577077893616e-06 | 1.6787280751296905e-06 | 9.05% | 9.95% | 1.10x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0374873971980735e-06 | 1.7983483601808226e-06 | 11.74% | 13.30% | 1.13x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0444240844142093e-06 | 1.8024599766020888e-06 | 11.84% | 13.42% | 1.13x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0411476137855935e-06 | 1.885679655350764e-06 | 7.62% | 8.24% | 1.08x | ✅ |
| `int_to_big_endian[255]` | 1.5070381891070623e-06 | 1.6808098114502228e-06 | -11.53% | -10.34% | 0.90x | ❌ |
| `int_to_big_endian[256]` | 1.5032590645543676e-06 | 1.6764710223878256e-06 | -11.52% | -10.33% | 0.90x | ❌ |
| `int_to_big_endian[max]` | 1.9956870160159993e-06 | 2.141839623405803e-06 | -7.32% | -6.82% | 0.93x | ❌ |
| `int_to_big_endian[one]` | 1.500173052557178e-06 | 1.6628244874499263e-06 | -10.84% | -9.78% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.6380723424026095e-06 | 1.654141157145858e-06 | -0.98% | -0.97% | 0.99x | ❌ |
