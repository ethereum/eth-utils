#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.2741289138286122e-06 | 2.090650280294488e-06 | 8.07% | 8.78% | 1.09x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.6641635055366904e-06 | 1.654936395802935e-06 | 0.55% | 0.56% | 1.01x | ✅ |
| `big_endian_to_int[ff-byte]` | 1.927229129175557e-06 | 1.7691703833503334e-06 | 8.20% | 8.93% | 1.09x | ✅ |
| `big_endian_to_int[one-byte]` | 1.9227131121105263e-06 | 1.7692965301122925e-06 | 7.98% | 8.67% | 1.09x | ✅ |
| `big_endian_to_int[two-bytes]` | 1.9334845939345146e-06 | 1.7690118226060112e-06 | 8.51% | 9.30% | 1.09x | ✅ |
| `int_to_big_endian[255]` | 1.4358806058214243e-06 | 1.7834466068277198e-06 | -24.21% | -19.49% | 0.81x | ❌ |
| `int_to_big_endian[256]` | 1.4929725182660395e-06 | 1.780880566056242e-06 | -19.28% | -16.17% | 0.84x | ❌ |
| `int_to_big_endian[max]` | 2.0133910534399774e-06 | 2.1761699821458745e-06 | -8.08% | -7.48% | 0.93x | ❌ |
| `int_to_big_endian[one]` | 1.4227589472144427e-06 | 1.7872553599104609e-06 | -25.62% | -20.39% | 0.80x | ❌ |
| `int_to_big_endian[zero]` | 1.577839972135157e-06 | 1.8683924286707773e-06 | -18.41% | -15.55% | 0.84x | ❌ |
