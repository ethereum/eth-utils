#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.0002392968924284183 | 0.00023940785949326166 | -0.05% | -0.05% | 1.00x | ❌ |
| `get_logger` | 5.301735593181095e-05 | 5.241616807189123e-05 | 1.13% | 1.15% | 1.01x | ✅ |
| `setup_DEBUG2_logging` | 1.1613477666389314e-06 | 1.083064516629683e-06 | 6.74% | 7.23% | 1.07x | ✅ |
