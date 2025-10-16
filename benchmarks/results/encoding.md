#### [faster_eth_utils.encoding](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/faster_eth_utils/encoding.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/benchmarks/test_encoding_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `big_endian_to_int[32-ff-bytes]` | 2.425607830695903e-06 | 2.2842596051010648e-06 | 5.83% | 6.19% | 1.06x | ✅ |
| `big_endian_to_int[empty-bytes]` | 1.81886025002015e-06 | 1.6505979018408594e-06 | 9.25% | 10.19% | 1.10x | ✅ |
| `big_endian_to_int[ff-byte]` | 2.030583850634292e-06 | 1.7814966505652218e-06 | 12.27% | 13.98% | 1.14x | ✅ |
| `big_endian_to_int[one-byte]` | 2.019004544187453e-06 | 1.7797164692774615e-06 | 11.85% | 13.45% | 1.13x | ✅ |
| `big_endian_to_int[two-bytes]` | 2.05801756546302e-06 | 1.752904264721504e-06 | 14.83% | 17.41% | 1.17x | ✅ |
| `int_to_big_endian[255]` | 1.5144641510803605e-06 | 1.6387236737326031e-06 | -8.20% | -7.58% | 0.92x | ❌ |
| `int_to_big_endian[256]` | 1.5021038680807507e-06 | 1.6446340385047301e-06 | -9.49% | -8.67% | 0.91x | ❌ |
| `int_to_big_endian[max]` | 1.9984198172260633e-06 | 2.016499641093915e-06 | -0.90% | -0.90% | 0.99x | ❌ |
| `int_to_big_endian[one]` | 1.5120315341508563e-06 | 1.6461266381847356e-06 | -8.87% | -8.15% | 0.92x | ❌ |
| `int_to_big_endian[zero]` | 1.6319402852333954e-06 | 1.6675422952601547e-06 | -2.18% | -2.13% | 0.98x | ❌ |
