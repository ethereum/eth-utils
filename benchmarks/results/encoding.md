#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.422081728321126e-06 | 2.1766186147882675e-06 | 10.13% | 11.28% | 1.11x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.835721145591256e-06 | 1.6589664362184266e-06 | 9.63% | 10.65% | 1.11x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0422183597984674e-06 | 1.7542154914104794e-06 | 14.10% | 16.42% | 1.16x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0375189257568654e-06 | 1.7527286692172384e-06 | 13.98% | 16.25% | 1.16x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0859703230212724e-06 | 1.7521936869552248e-06 | 16.00% | 19.05% | 1.19x | ✅ |
| `int_to_big_endian[255]` | 1.5126445719461004e-06 | 1.6504512983955937e-06 | -9.11% | -8.35% | 0.92x | ❌ |
| `int_to_big_endian[256]` | 1.5324052795563862e-06 | 1.62690178701276e-06 | -6.17% | -5.81% | 0.94x | ❌ |
| `int_to_big_endian[max]` | 2.0629020074131695e-06 | 2.033940445534661e-06 | 1.40% | 1.42% | 1.01x | ✅ |
| `int_to_big_endian[one]` | 1.5116852609348872e-06 | 1.6543655240192752e-06 | -9.44% | -8.62% | 0.91x | ❌ |
| `int_to_big_endian[zero]` | 1.6476581268045147e-06 | 1.6869749573469248e-06 | -2.39% | -2.33% | 0.98x | ❌ |
