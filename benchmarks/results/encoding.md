#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4421070228387665e-06 | 2.293653935297929e-06 | 6.08% | 6.47% | 1.06x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8508087929932097e-06 | 1.7263282878024419e-06 | 6.73% | 7.21% | 1.07x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0551880218094983e-06 | 1.8125787140682028e-06 | 11.80% | 13.38% | 1.13x | ✅ |
| `big_endian_to_int[one-byte]` | 2.049492382588422e-06 | 1.8979024647360891e-06 | 7.40% | 7.99% | 1.08x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.079882847037765e-06 | 1.8395194965124777e-06 | 11.56% | 13.07% | 1.13x | ✅ |
| `int_to_big_endian[255]` | 1.5127983487738655e-06 | 1.6133604878202108e-06 | -6.65% | -6.23% | 0.94x | ❌ |
| `int_to_big_endian[256]` | 1.4940433644469452e-06 | 1.6340390065282785e-06 | -9.37% | -8.57% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 2.0025039638256724e-06 | 1.9923804955506034e-06 | 0.51% | 0.51% | 1.01x | ✅ |
| `int_to_big_endian[one]` | 1.4997604488530788e-06 | 1.6127295063989287e-06 | -7.53% | -7.00% | 0.93x | ❌ |
| `int_to_big_endian[zero]` | 1.6555213945418825e-06 | 1.6803631615525955e-06 | -1.50% | -1.48% | 0.99x | ❌ |
