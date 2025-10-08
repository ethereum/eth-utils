#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4298255150500193e-06 | 2.3325125876827667e-06 | 4.00% | 4.17% | 1.04x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8417952276167402e-06 | 1.7375647623385758e-06 | 5.66% | 6.00% | 1.06x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.068851929980493e-06 | 1.8323176207626132e-06 | 11.43% | 12.91% | 1.13x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0286171549093925e-06 | 1.7962445359507878e-06 | 11.45% | 12.94% | 1.13x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.073181365064806e-06 | 1.8145176704055618e-06 | 12.48% | 14.26% | 1.14x | ✅ |
| `int_to_big_endian[255]` | 1.547005293346738e-06 | 1.6953730431562844e-06 | -9.59% | -8.75% | 0.91x | ❌ |
| `int_to_big_endian[256]` | 1.5194990145304815e-06 | 1.6756205275579744e-06 | -10.27% | -9.32% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 2.0222749071529515e-06 | 2.0383853198200063e-06 | -0.80% | -0.79% | 0.99x | ❌ |
| `int_to_big_endian[one]` | 1.5155387887508363e-06 | 1.6581047792262327e-06 | -9.41% | -8.60% | 0.91x | ❌ |
| `int_to_big_endian[zero]` | 1.6291989942728335e-06 | 1.7188127017183557e-06 | -5.50% | -5.21% | 0.95x | ❌ |
