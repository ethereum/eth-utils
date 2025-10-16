#### [faster_eth_utils.debug](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/faster_eth_utils/debug.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/benchmarks/test_debug_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `get_environment_summary` | 0.292640222600005 | 0.2912914849999993 | 0.46% | 0.46% | 1.00x | ✅ |
| `pip_freeze` | 0.29072801520002256 | 0.29111672780001074 | -0.13% | -0.13% | 1.00x | ❌ |
| `platform_info` | 2.532555556064211e-06 | 3.0192110278683575e-06 | -19.22% | -16.12% | 0.84x | ❌ |
| `python_version` | 9.992667142521192e-07 | 1.3393699723390816e-06 | -34.04% | -25.39% | 0.75x | ❌ |
