#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.4134606469850875e-06 | 2.3184423963466124e-06 | 3.94% | 4.10% | 1.04x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8398182894717272e-06 | 1.7584567912305126e-06 | 4.42% | 4.63% | 1.05x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.025624738364661e-06 | 1.8254169205801768e-06 | 9.88% | 10.97% | 1.11x | ✅ |
| `big_endian_to_int[one-byte]` | 2.04204835462016e-06 | 1.845276131288579e-06 | 9.64% | 10.66% | 1.11x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.0635741315493787e-06 | 1.8515530828494428e-06 | 10.27% | 11.45% | 1.11x | ✅ |
| `int_to_big_endian[255]` | 1.5254274323604064e-06 | 1.7027415425186037e-06 | -11.62% | -10.41% | 0.90x | ❌ |
| `int_to_big_endian[256]` | 1.4909702875967621e-06 | 1.687617889513806e-06 | -13.19% | -11.65% | 0.88x | ❌ |
| `int_to_big_endian[max]` | 2.0000768112709595e-06 | 2.03858968164851e-06 | -1.93% | -1.89% | 0.98x | ❌ |
| `int_to_big_endian[one]` | 1.509954106184856e-06 | 1.6858273733945965e-06 | -11.65% | -10.43% | 0.90x | ❌ |
| `int_to_big_endian[zero]` | 1.6178557234862526e-06 | 1.7303671025748142e-06 | -6.95% | -6.50% | 0.93x | ❌ |
