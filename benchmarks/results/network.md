#### [faster_eth_utils.network](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/faster_eth_utils/network.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/master/benchmarks/test_network_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `initialize_network_objects` | 0.06711022039994533 | 0.06660306460003085 | 0.76% | 0.76% | 1.01x | ✅ |
| `name_from_chain_id` | 6.192013300350171e-06 | 5.893000908263676e-06 | 4.83% | 5.07% | 1.05x | ✅ |
| `network_from_chain_id` | 6.229320202278656e-06 | 5.7713847306960246e-06 | 7.35% | 7.93% | 1.08x | ✅ |
| `short_name_from_chain_id` | 6.253506792523844e-06 | 5.973480059906286e-06 | 4.48% | 4.69% | 1.05x | ✅ |
