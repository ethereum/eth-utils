#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024195290932905057 | 0.00024075207971424917 | 0.50% | 0.50% | 1.00x | ✅ |
| `get_logger` | 5.373712736435237e-05 | 5.2260867710468843e-05 | 2.75% | 2.82% | 1.03x | ✅ |
| `setup_DEBUG2_logging` | 1.1564824958513678e-06 | 1.0503615242754794e-06 | 9.18% | 10.10% | 1.10x | ✅ |
