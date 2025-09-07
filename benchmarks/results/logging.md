#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024110429465180986 | 0.0002415369405484666 | -0.18% | -0.18% | 1.00x | ❌ |
| `get_logger` | 5.348159729134395e-05 | 5.336484197708768e-05 | 0.22% | 0.22% | 1.00x | ✅ |
| `setup_DEBUG2_logging` | 1.252986560935478e-06 | 1.1422547762831287e-06 | 8.84% | 9.69% | 1.10x | ✅ |
