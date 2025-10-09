#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024138995993105202 | 0.00024384370435865646 | -1.02% | -1.01% | 0.99x | ❌ |
| `get_logger` | 5.373952786755936e-05 | 5.3907579184678066e-05 | -0.31% | -0.31% | 1.00x | ❌ |
| `setup_DEBUG2_logging` | 1.1192865042809176e-06 | 1.0417256952585024e-06 | 6.93% | 7.45% | 1.07x | ✅ |
