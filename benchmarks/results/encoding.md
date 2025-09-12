#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/fix-bench/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.410951412445381e-06 | 2.246811911541032e-06 | 6.81% | 7.31% | 1.07x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8370746678047205e-06 | 1.6833535505225627e-06 | 8.37% | 9.13% | 1.09x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0309803720031853e-06 | 1.773717494683371e-06 | 12.67% | 14.50% | 1.15x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0400858102374726e-06 | 1.7871018212538415e-06 | 12.40% | 14.16% | 1.14x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0606790375083283e-06 | 1.7618844702688517e-06 | 14.50% | 16.96% | 1.17x | ✅ |
| `int_to_big_endian[255]` | 1.534493520139551e-06 | 1.6667091556292442e-06 | -8.62% | -7.93% | 0.92x | ❌ |
| `int_to_big_endian[256]` | 1.496981084782371e-06 | 1.661939588275642e-06 | -11.02% | -9.93% | 0.90x | ❌ |
| `int_to_big_endian[max]` | 2.0282272157157382e-06 | 2.0590154685633577e-06 | -1.52% | -1.50% | 0.99x | ❌ |
| `int_to_big_endian[one]` | 1.5074054473259193e-06 | 1.6485659640498042e-06 | -9.36% | -8.56% | 0.91x | ❌ |
| `int_to_big_endian[zero]` | 1.643503277888914e-06 | 1.7065791647741535e-06 | -3.84% | -3.70% | 0.96x | ❌ |
