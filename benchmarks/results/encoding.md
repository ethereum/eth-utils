#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.3918907618515796e-06 | 2.4037779246934444e-06 | -0.50% | -0.49% | 1.00x | ❌ |
| `big_endian_to_int[empty-bytes]` | 1.8408047712726403e-06 | 1.660700347350717e-06 | 9.78% | 10.85% | 1.11x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.064177676204525e-06 | 1.8397927622270785e-06 | 10.87% | 12.20% | 1.12x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0568774990909057e-06 | 1.8243660303993056e-06 | 11.30% | 12.74% | 1.13x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0851293427994298e-06 | 1.8405466222194024e-06 | 11.73% | 13.29% | 1.13x | ✅ |
| `int_to_big_endian[255]` | 1.5206238648000358e-06 | 1.6895684721304033e-06 | -11.11% | -10.00% | 0.90x | ❌ |
| `int_to_big_endian[256]` | 1.5131415409226735e-06 | 1.6717016628066584e-06 | -10.48% | -9.48% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 2.0065951106191724e-06 | 2.108439579008578e-06 | -5.08% | -4.83% | 0.95x | ❌ |
| `int_to_big_endian[one]` | 1.513646099625951e-06 | 1.6767635494096497e-06 | -10.78% | -9.73% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.6302834374072857e-06 | 1.7104727182342327e-06 | -4.92% | -4.69% | 0.95x | ❌ |
