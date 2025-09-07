#### [faster_eth_utils.crypto](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/crypto.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_crypto_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `keccak[bool]` | 7.686915338806264e-05 | 5.99012815619623e-05 | 22.07% | 28.33% | 1.28x | ✅ |
| `keccak[bytes]` | 7.846465699937122e-05 | 6.166225415266644e-05 | 21.41% | 27.25% | 1.27x | ✅ |
| `keccak[hexstr]` | 8.986147797245941e-05 | 6.713050457507817e-05 | 25.30% | 33.86% | 1.34x | ✅ |
| `keccak[int]` | 0.00014613903727576845 | 7.714062876436377e-05 | 47.21% | 89.44% | 1.89x | ✅ |
| `keccak[text]` | 8.134892357822835e-05 | 6.28236588539551e-05 | 22.77% | 29.49% | 1.29x | ✅ |
