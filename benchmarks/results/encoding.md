#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4296536245077388e-06 | 2.2987194947471185e-06 | 5.39% | 5.70% | 1.06x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8366045796897276e-06 | 1.6521139213592949e-06 | 10.05% | 11.17% | 1.11x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.037190234272934e-06 | 1.7747092750411088e-06 | 12.88% | 14.79% | 1.15x | ✅ |
| `big_endian_to_int[one-byte]` | 2.043865551577481e-06 | 1.7459733352621531e-06 | 14.57% | 17.06% | 1.17x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.1396343991352565e-06 | 1.744904984016542e-06 | 18.45% | 22.62% | 1.23x | ✅ |
| `int_to_big_endian[255]` | 1.6000513666760542e-06 | 1.6811826612695974e-06 | -5.07% | -4.83% | 0.95x | ❌ |
| `int_to_big_endian[256]` | 1.567518773224997e-06 | 1.763960865051309e-06 | -12.53% | -11.14% | 0.89x | ❌ |
| `int_to_big_endian[max]` | 2.0877317703749643e-06 | 2.0762822662585515e-06 | 0.55% | 0.55% | 1.01x | ✅ |
| `int_to_big_endian[one]` | 1.5697566305941589e-06 | 1.6655316578210544e-06 | -6.10% | -5.75% | 0.94x | ❌ |
| `int_to_big_endian[zero]` | 1.6917221469343338e-06 | 1.7198930835371583e-06 | -1.67% | -1.64% | 0.98x | ❌ |
