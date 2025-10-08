#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4120243640067443e-06 | 2.3165670537954514e-06 | 3.96% | 4.12% | 1.04x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.813193277317851e-06 | 1.6838560946007889e-06 | 7.13% | 7.68% | 1.08x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.023437006581078e-06 | 1.915328251475935e-06 | 5.34% | 5.64% | 1.06x | ✅ |
| `big_endian_to_int[one-byte]` | 2.035447241212492e-06 | 1.7989494180744018e-06 | 11.62% | 13.15% | 1.13x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0546432788048336e-06 | 1.822331926003913e-06 | 11.31% | 12.75% | 1.13x | ✅ |
| `int_to_big_endian[255]` | 1.5274186652837395e-06 | 1.674129865361297e-06 | -9.61% | -8.76% | 0.91x | ❌ |
| `int_to_big_endian[256]` | 1.5032499624972452e-06 | 1.6652837111647691e-06 | -10.78% | -9.73% | 0.90x | ❌ |
| `int_to_big_endian[max]` | 1.9831210756637926e-06 | 2.0379904910040015e-06 | -2.77% | -2.69% | 0.97x | ❌ |
| `int_to_big_endian[one]` | 1.5014003867091413e-06 | 1.6379019965238228e-06 | -9.09% | -8.33% | 0.92x | ❌ |
| `int_to_big_endian[zero]` | 1.63623447769862e-06 | 1.7776022822546829e-06 | -8.64% | -7.95% | 0.92x | ❌ |
