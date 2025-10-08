#### [faster_eth_utils.logging](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/logging.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_logging_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_extended_debug_logger` | 0.00024168820005644417 | 0.0002422387018253151 | -0.23% | -0.23% | 1.00x | ❌ |
| `get_logger` | 5.3936444093380986e-05 | 5.43038734253254e-05 | -0.68% | -0.68% | 0.99x | ❌ |
| `setup_DEBUG2_logging` | 1.145871996912202e-06 | 1.0297933461508668e-06 | 10.13% | 11.27% | 1.11x | ✅ |
