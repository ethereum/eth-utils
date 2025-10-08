#### [faster_eth_utils.humanize](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/humanize.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_humanize_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `humanize_bytes[32-bytes]` | 4.076458013088773e-06 | 2.5688596454055917e-06 | 36.98% | 58.69% | 1.59x | ✅ |
| `humanize_bytes[empty]` | 1.109460597349093e-06 | 8.615996589186893e-07 | 22.34% | 28.77% | 1.29x | ✅ |
| `humanize_bytes[long]` | 3.857989975949454e-06 | 2.3934002118113206e-06 | 37.96% | 61.19% | 1.61x | ✅ |
| `humanize_bytes[short]` | 1.52081283368323e-06 | 1.1677004891939625e-06 | 23.22% | 30.24% | 1.30x | ✅ |
| `humanize_hash[32-bytes]` | 4.46919943541045e-06 | 2.5565517815289997e-06 | 42.80% | 74.81% | 1.75x | ✅ |
| `humanize_hash[empty]` | 1.4032780346292533e-06 | 8.636149925728834e-07 | 38.46% | 62.49% | 1.62x | ✅ |
| `humanize_hash[long]` | 4.252185344086137e-06 | 2.3702714122272946e-06 | 44.26% | 79.40% | 1.79x | ✅ |
| `humanize_hash[short]` | 1.7624244925532846e-06 | 1.1993738005973318e-06 | 31.95% | 46.95% | 1.47x | ✅ |
| `humanize_hexstr[empty]` | 2.135875603502381e-06 | 6.949063352833142e-07 | 67.47% | 207.36% | 3.07x | ✅ |
| `humanize_hexstr[short-0x]` | 4.9102231216315456e-06 | 2.2160349610551365e-06 | 54.87% | 121.58% | 2.22x | ✅ |
| `humanize_hexstr[short-no-0x]` | 4.1427490626056316e-06 | 1.7929724432995095e-06 | 56.72% | 131.05% | 2.31x | ✅ |
| `humanize_hexstr[very-long-0x]` | 5.0128553194239325e-06 | 2.2713073038539143e-06 | 54.69% | 120.70% | 2.21x | ✅ |
| `humanize_hexstr[very-long-no-0x]` | 4.117374847101649e-06 | 1.8189277171348522e-06 | 55.82% | 126.36% | 2.26x | ✅ |
| `humanize_integer_sequence[consecutive]` | 3.1078448640552385e-05 | 2.516259756778673e-05 | 19.04% | 23.51% | 1.24x | ✅ |
| `humanize_integer_sequence[disjoint]` | 3.717192348449146e-05 | 3.0418964635657515e-05 | 18.17% | 22.20% | 1.22x | ✅ |
| `humanize_integer_sequence[empty]` | 8.564937457669358e-07 | 6.71173797810123e-07 | 21.64% | 27.61% | 1.28x | ✅ |
| `humanize_integer_sequence[mixed]` | 4.6063121007517865e-05 | 3.822772987712466e-05 | 17.01% | 20.50% | 1.20x | ✅ |
| `humanize_integer_sequence[single]` | 2.7707494755233345e-05 | 2.098269354702714e-05 | 24.27% | 32.05% | 1.32x | ✅ |
| `humanize_integer_sequence[two-consecutive-ranges]` | 4.09610495733654e-05 | 3.344171298820967e-05 | 18.36% | 22.48% | 1.22x | ✅ |
| `humanize_ipfs_uri[valid-cidv0]` | 3.6404477729134815e-05 | 3.360941162333888e-05 | 7.68% | 8.32% | 1.08x | ✅ |
| `humanize_seconds[fifty-nine-seconds]` | 2.0451526717167614e-05 | 1.839567700516431e-05 | 10.05% | 11.18% | 1.11x | ✅ |
| `humanize_seconds[negative]` | 2.725489458628605e-05 | 1.8322985402815747e-05 | 32.77% | 48.75% | 1.49x | ✅ |
| `humanize_seconds[one-hour-one-minute-one-second]` | 3.23776525442343e-05 | 2.0404655261793603e-05 | 36.98% | 58.68% | 1.59x | ✅ |
| `humanize_seconds[one-hour]` | 1.9669320501037115e-05 | 1.7486335575509117e-05 | 11.10% | 12.48% | 1.12x | ✅ |
| `humanize_seconds[one-minute]` | 1.977386011530819e-05 | 1.8446654759263568e-05 | 6.71% | 7.19% | 1.07x | ✅ |
| `humanize_seconds[one-second]` | 2.0479562418224814e-05 | 1.8390333429031393e-05 | 10.20% | 11.36% | 1.11x | ✅ |
| `humanize_seconds[zero]` | 1.3676002568655537e-06 | 1.1149968327786796e-06 | 18.47% | 22.66% | 1.23x | ✅ |
| `humanize_wei[ether]` | 2.7282468909070776e-05 | 2.618751721221804e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `humanize_wei[gwei]` | 2.688246616497382e-05 | 2.5592481193464725e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `humanize_wei[wei]` | 2.7583612245766583e-05 | 2.4985563304510342e-05 | 9.42% | 10.40% | 1.10x | ✅ |
| `humanize_wei[zero]` | 4.699687276531696e-06 | 4.1221857571479944e-06 | 12.29% | 14.01% | 1.14x | ✅ |
| `is_ipfs_uri[empty]` | 1.4459796829052556e-05 | 1.4259668806236943e-05 | 1.38% | 1.40% | 1.01x | ✅ |
| `is_ipfs_uri[invalid-cid]` | 1.779594013314088e-05 | 1.655908641242507e-05 | 6.95% | 7.47% | 1.07x | ✅ |
| `is_ipfs_uri[not-ipfs]` | 1.4662909807943487e-05 | 1.4846623605974112e-05 | -1.25% | -1.24% | 0.99x | ❌ |
| `is_ipfs_uri[valid-cidv0]` | 1.8302310557186777e-05 | 1.6757898097759568e-05 | 8.44% | 9.22% | 1.09x | ✅ |
