#### [faster_eth_utils.humanize](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/faster_eth_utils/humanize.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/renovate/actions-github-script-8.x/benchmarks/test_humanize_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `humanize_bytes[32-bytes]` | 4.068061807254594e-06 | 2.5906876810831445e-06 | 36.32% | 57.03% | 1.57x | ✅ |
| `humanize_bytes[empty]` | 1.1223394143829697e-06 | 8.557425476580454e-07 | 23.75% | 31.15% | 1.31x | ✅ |
| `humanize_bytes[long]` | 3.84551963944612e-06 | 2.365538745116164e-06 | 38.49% | 62.56% | 1.63x | ✅ |
| `humanize_bytes[short]` | 1.5194362158937222e-06 | 1.1292922728862635e-06 | 25.68% | 34.55% | 1.35x | ✅ |
| `humanize_hash[32-bytes]` | 4.491560135140463e-06 | 2.6112564101670315e-06 | 41.86% | 72.01% | 1.72x | ✅ |
| `humanize_hash[empty]` | 1.3815364401451603e-06 | 8.655838590723824e-07 | 37.35% | 59.61% | 1.60x | ✅ |
| `humanize_hash[long]` | 4.27049283874032e-06 | 2.386410516462633e-06 | 44.12% | 78.95% | 1.79x | ✅ |
| `humanize_hash[short]` | 1.7236927263342165e-06 | 1.158199590450248e-06 | 32.81% | 48.83% | 1.49x | ✅ |
| `humanize_hexstr[empty]` | 2.176039769976134e-06 | 6.679106293083886e-07 | 69.31% | 225.80% | 3.26x | ✅ |
| `humanize_hexstr[short-0x]` | 4.843047560546021e-06 | 2.2420618138854107e-06 | 53.71% | 116.01% | 2.16x | ✅ |
| `humanize_hexstr[short-no-0x]` | 4.117983716274418e-06 | 1.8305903375065501e-06 | 55.55% | 124.95% | 2.25x | ✅ |
| `humanize_hexstr[very-long-0x]` | 4.853204409462588e-06 | 2.224481707379948e-06 | 54.16% | 118.17% | 2.18x | ✅ |
| `humanize_hexstr[very-long-no-0x]` | 4.134367903500407e-06 | 1.8360553534280214e-06 | 55.59% | 125.18% | 2.25x | ✅ |
| `humanize_integer_sequence[consecutive]` | 3.0535825079717715e-05 | 2.49698724696344e-05 | 18.23% | 22.29% | 1.22x | ✅ |
| `humanize_integer_sequence[disjoint]` | 3.649603807705223e-05 | 2.970138048368987e-05 | 18.62% | 22.88% | 1.23x | ✅ |
| `humanize_integer_sequence[empty]` | 9.281342805839449e-07 | 6.445058755847731e-07 | 30.56% | 44.01% | 1.44x | ✅ |
| `humanize_integer_sequence[mixed]` | 4.488516169320991e-05 | 3.7092998080269945e-05 | 17.36% | 21.01% | 1.21x | ✅ |
| `humanize_integer_sequence[single]` | 2.737714362183203e-05 | 2.096906287264971e-05 | 23.41% | 30.56% | 1.31x | ✅ |
| `humanize_integer_sequence[two-consecutive-ranges]` | 3.9990392123650365e-05 | 3.303800571292204e-05 | 17.39% | 21.04% | 1.21x | ✅ |
| `humanize_ipfs_uri[valid-cidv0]` | 3.657201830010573e-05 | 3.299822471886434e-05 | 9.77% | 10.83% | 1.11x | ✅ |
| `humanize_seconds[fifty-nine-seconds]` | 2.044244838361895e-05 | 1.8598927215201622e-05 | 9.02% | 9.91% | 1.10x | ✅ |
| `humanize_seconds[negative]` | 2.7425737430640304e-05 | 1.803389542287195e-05 | 34.24% | 52.08% | 1.52x | ✅ |
| `humanize_seconds[one-hour-one-minute-one-second]` | 3.186913127541542e-05 | 2.0160234610007894e-05 | 36.74% | 58.08% | 1.58x | ✅ |
| `humanize_seconds[one-hour]` | 1.9330236619702354e-05 | 1.7509342364699346e-05 | 9.42% | 10.40% | 1.10x | ✅ |
| `humanize_seconds[one-minute]` | 1.9705785497661563e-05 | 1.7923451922790993e-05 | 9.04% | 9.94% | 1.10x | ✅ |
| `humanize_seconds[one-second]` | 2.047673674099647e-05 | 1.836408196637497e-05 | 10.32% | 11.50% | 1.12x | ✅ |
| `humanize_seconds[zero]` | 1.2617969104120692e-06 | 1.0166052120760432e-06 | 19.43% | 24.12% | 1.24x | ✅ |
| `humanize_wei[ether]` | 2.7232840604057823e-05 | 2.5928001477482954e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `humanize_wei[gwei]` | 2.672093068060303e-05 | 2.5497925614892106e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `humanize_wei[wei]` | 2.6405386015906724e-05 | 2.506300497782946e-05 | 5.08% | 5.36% | 1.05x | ✅ |
| `humanize_wei[zero]` | 4.651973300000126e-06 | 3.981579249167486e-06 | 14.41% | 16.84% | 1.17x | ✅ |
| `is_ipfs_uri[empty]` | 1.3932119545374452e-05 | 1.3961903548122256e-05 | -0.21% | -0.21% | 1.00x | ❌ |
| `is_ipfs_uri[invalid-cid]` | 1.7377177042852346e-05 | 1.630841391887814e-05 | 6.15% | 6.55% | 1.07x | ✅ |
| `is_ipfs_uri[not-ipfs]` | 1.4536978350175258e-05 | 1.46851351769156e-05 | -1.02% | -1.01% | 0.99x | ❌ |
| `is_ipfs_uri[valid-cidv0]` | 1.814384877256194e-05 | 1.645247524740732e-05 | 9.32% | 10.28% | 1.10x | ✅ |
