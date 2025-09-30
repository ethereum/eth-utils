#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.0002397666836238908 | 0.00024028547326595992 | -0.22% | -0.22% | 1.00x | ❌ |
| `get_logger` | 5.2698278127884014e-05 | 5.2700187188172576e-05 | -0.00% | -0.00% | 1.00x | ❌ |
| `setup_DEBUG2_logging` | 1.1499909007753575e-06 | 1.0299335352635137e-06 | 10.44% | 11.66% | 1.12x | ✅ |
