#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024331802200319702 | 0.00024091855260294405 | 0.99% | 1.00% | 1.01x | ✅ |
| `get_logger` | 5.4404802183133805e-05 | 5.42184150645608e-05 | 0.34% | 0.34% | 1.00x | ✅ |
| `setup_DEBUG2_logging` | 1.1807228884002576e-06 | 1.056491572285397e-06 | 10.52% | 11.76% | 1.12x | ✅ |
