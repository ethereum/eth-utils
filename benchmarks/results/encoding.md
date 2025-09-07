#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/results/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.3978886389675768e-06 | 2.2555391873578822e-06 | 5.94% | 6.31% | 1.06x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.8410294386722656e-06 | 1.6876817098197564e-06 | 8.33% | 9.09% | 1.09x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.0614667170250666e-06 | 1.8225144748916488e-06 | 11.59% | 13.11% | 1.13x | ✅ |
| `big_endian_to_int[one-byte]` | 2.0578518164292114e-06 | 1.8113614055234223e-06 | 11.98% | 13.61% | 1.14x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.049795134385085e-06 | 1.7984947412286624e-06 | 12.26% | 13.97% | 1.14x | ✅ |
| `int_to_big_endian[255]` | 1.6084798623825082e-06 | 1.6541650914710082e-06 | -2.84% | -2.76% | 0.97x | ❌ |
| `int_to_big_endian[256]` | 1.6101261964987296e-06 | 1.6480244174820779e-06 | -2.35% | -2.30% | 0.98x | ❌ |
| `int_to_big_endian[max]` | 2.079702521468168e-06 | 2.0950777790148307e-06 | -0.74% | -0.73% | 0.99x | ❌ |
| `int_to_big_endian[one]` | 1.5883007731167703e-06 | 1.644646480502472e-06 | -3.55% | -3.43% | 0.97x | ❌ |
| `int_to_big_endian[zero]` | 1.6972881280095714e-06 | 1.684017366632217e-06 | 0.78% | 0.79% | 1.01x | ✅ |
