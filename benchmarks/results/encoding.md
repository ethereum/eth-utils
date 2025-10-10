#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4548728547092368e-06 | 2.3569479309053273e-06 | 3.99% | 4.15% | 1.04x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8658362226546833e-06 | 1.7826576896844262e-06 | 4.46% | 4.67% | 1.05x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0746837783527033e-06 | 1.9246207260145395e-06 | 7.23% | 7.80% | 1.08x | ✅ |
| `big_endian_to_int[one-byte]` | 2.062886234316291e-06 | 1.9169244071995147e-06 | 7.08% | 7.61% | 1.08x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.092045249403803e-06 | 1.8481129329620889e-06 | 11.66% | 13.20% | 1.13x | ✅ |
| `int_to_big_endian[255]` | 1.5508089613590673e-06 | 1.673557215735284e-06 | -7.92% | -7.33% | 0.93x | ❌ |
| `int_to_big_endian[256]` | 1.5028238104199325e-06 | 1.6764028869488682e-06 | -11.55% | -10.35% | 0.90x | ❌ |
| `int_to_big_endian[max]` | 2.0026928872170857e-06 | 2.090137791021319e-06 | -4.37% | -4.18% | 0.96x | ❌ |
| `int_to_big_endian[one]` | 1.5105658996464255e-06 | 1.6839563929359478e-06 | -11.48% | -10.30% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.6407570501191293e-06 | 1.7247804637397716e-06 | -5.12% | -4.87% | 0.95x | ❌ |
