#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.40096345272335e-06 | 2.3563313881023247e-06 | 1.86% | 1.89% | 1.02x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8277706305289813e-06 | 1.800946964020659e-06 | 1.47% | 1.49% | 1.01x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.030275986318438e-06 | 1.800326471196892e-06 | 11.33% | 12.77% | 1.13x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0333570892123905e-06 | 1.8108494789138755e-06 | 10.94% | 12.29% | 1.12x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0571174982690866e-06 | 1.8238212580931762e-06 | 11.34% | 12.79% | 1.13x | ✅ |
| `int_to_big_endian[255]` | 1.4920756954940372e-06 | 1.677159789236593e-06 | -12.40% | -11.04% | 0.89x | ❌ |
| `int_to_big_endian[256]` | 1.4820523713349256e-06 | 1.6606727528499926e-06 | -12.05% | -10.76% | 0.89x | ❌ |
| `int_to_big_endian[max]` | 1.966063680027809e-06 | 2.007983948575307e-06 | -2.13% | -2.09% | 0.98x | ❌ |
| `int_to_big_endian[one]` | 1.488206463902711e-06 | 1.6567189568953705e-06 | -11.32% | -10.17% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.625193257188882e-06 | 1.72155995932193e-06 | -5.93% | -5.60% | 0.94x | ❌ |
