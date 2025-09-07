#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4137952324029888e-06 | 2.3973373746962316e-06 | 0.68% | 0.69% | 1.01x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.855612374392376e-06 | 1.6718620285622106e-06 | 9.90% | 10.99% | 1.11x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0610031646605822e-06 | 1.8126936655725195e-06 | 12.05% | 13.70% | 1.14x | ✅ |
| `big_endian_to_int[one-byte]` | 2.06233492499235e-06 | 1.8022143955460723e-06 | 12.61% | 14.43% | 1.14x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0571481034140025e-06 | 1.8242843141106457e-06 | 11.32% | 12.76% | 1.13x | ✅ |
| `int_to_big_endian[255]` | 1.5219954333037168e-06 | 1.6918400733299276e-06 | -11.16% | -10.04% | 0.90x | ❌ |
| `int_to_big_endian[256]` | 1.5050839473614225e-06 | 1.656123305644981e-06 | -10.04% | -9.12% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 2.0271802811200976e-06 | 2.0919923551504965e-06 | -3.20% | -3.10% | 0.97x | ❌ |
| `int_to_big_endian[one]` | 1.5103798597004898e-06 | 1.6775451327523678e-06 | -11.07% | -9.96% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.6572442056464836e-06 | 1.6904377600514273e-06 | -2.00% | -1.96% | 0.98x | ❌ |
