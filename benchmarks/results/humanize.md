#### [faster_eth_utils.humanize](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/faster_eth_utils/humanize.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/strict-dunder-typing/benchmarks/test_humanize_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `humanize_bytes[32-bytes]` | 4.04843667361733e-06 | 2.5888814997069005e-06 | 36.05% | 56.38% | 1.56x | ✅ |
| `humanize_bytes[empty]` | 1.100264533942295e-06 | 8.444143249087822e-07 | 23.25% | 30.30% | 1.30x | ✅ |
| `humanize_bytes[long]` | 3.858372321532009e-06 | 2.391856797131944e-06 | 38.01% | 61.31% | 1.61x | ✅ |
| `humanize_bytes[short]` | 1.507286636006029e-06 | 1.1071726235408535e-06 | 26.55% | 36.14% | 1.36x | ✅ |
| `humanize_hash[32-bytes]` | 4.472568045492335e-06 | 2.629919637077851e-06 | 41.20% | 70.06% | 1.70x | ✅ |
| `humanize_hash[empty]` | 1.3767138311129707e-06 | 8.650637673114051e-07 | 37.16% | 59.15% | 1.59x | ✅ |
| `humanize_hash[long]` | 4.248721256967207e-06 | 2.4079731945699422e-06 | 43.32% | 76.44% | 1.76x | ✅ |
| `humanize_hash[short]` | 1.761777520401404e-06 | 1.1589791385490173e-06 | 34.22% | 52.01% | 1.52x | ✅ |
| `humanize_hexstr[empty]` | 2.142885411243945e-06 | 6.761477372639573e-07 | 68.45% | 216.93% | 3.17x | ✅ |
| `humanize_hexstr[short-0x]` | 4.988931979279825e-06 | 2.2039613161789957e-06 | 55.82% | 126.36% | 2.26x | ✅ |
| `humanize_hexstr[short-no-0x]` | 4.206350004472899e-06 | 1.8506969416211243e-06 | 56.00% | 127.28% | 2.27x | ✅ |
| `humanize_hexstr[very-long-0x]` | 4.819521195808269e-06 | 2.222456738687177e-06 | 53.89% | 116.86% | 2.17x | ✅ |
| `humanize_hexstr[very-long-no-0x]` | 4.180752453812277e-06 | 1.8571346540769666e-06 | 55.58% | 125.12% | 2.25x | ✅ |
| `humanize_integer_sequence[consecutive]` | 3.088469243807873e-05 | 2.4927204790761152e-05 | 19.29% | 23.90% | 1.24x | ✅ |
| `humanize_integer_sequence[disjoint]` | 3.6621615741724956e-05 | 3.0268627825972768e-05 | 17.35% | 20.99% | 1.21x | ✅ |
| `humanize_integer_sequence[empty]` | 8.239568909666587e-07 | 7.439793368335501e-07 | 9.71% | 10.75% | 1.11x | ✅ |
| `humanize_integer_sequence[mixed]` | 4.536616276079107e-05 | 3.7759570548684356e-05 | 16.77% | 20.14% | 1.20x | ✅ |
| `humanize_integer_sequence[single]` | 3.468094413473323e-05 | 2.0935188339119042e-05 | 39.63% | 65.66% | 1.66x | ✅ |
| `humanize_integer_sequence[two-consecutive-ranges]` | 4.051790294357409e-05 | 3.331520167111073e-05 | 17.78% | 21.62% | 1.22x | ✅ |
| `humanize_ipfs_uri[valid-cidv0]` | 3.646801403173889e-05 | 3.327142059672347e-05 | 8.77% | 9.61% | 1.10x | ✅ |
| `humanize_seconds[fifty-nine-seconds]` | 2.078658650586102e-05 | 1.863517025030983e-05 | 10.35% | 11.54% | 1.12x | ✅ |
| `humanize_seconds[negative]` | 2.8080103070226706e-05 | 1.812058647727474e-05 | 35.47% | 54.96% | 1.55x | ✅ |
| `humanize_seconds[one-hour-one-minute-one-second]` | 3.262756930897343e-05 | 2.0198387684140523e-05 | 38.09% | 61.54% | 1.62x | ✅ |
| `humanize_seconds[one-hour]` | 1.9806335312014255e-05 | 1.7643349356048004e-05 | 10.92% | 12.26% | 1.12x | ✅ |
| `humanize_seconds[one-minute]` | 2.001968417513143e-05 | 1.817852289534234e-05 | 9.20% | 10.13% | 1.10x | ✅ |
| `humanize_seconds[one-second]` | 2.073870080330003e-05 | 1.8567684231234416e-05 | 10.47% | 11.69% | 1.12x | ✅ |
| `humanize_seconds[zero]` | 1.36740691169637e-06 | 1.0034957590750714e-06 | 26.61% | 36.26% | 1.36x | ✅ |
| `humanize_wei[ether]` | 2.6536862294528002e-05 | 2.6169800122430804e-05 | 1.38% | 1.40% | 1.01x | ✅ |
| `humanize_wei[gwei]` | 2.6362320907026283e-05 | 2.5609132782238474e-05 | 2.86% | 2.94% | 1.03x | ✅ |
| `humanize_wei[wei]` | 2.6263774929060912e-05 | 2.4927457948264413e-05 | 5.09% | 5.36% | 1.05x | ✅ |
| `humanize_wei[zero]` | 4.778827084257726e-06 | 4.228991049660079e-06 | 11.51% | 13.00% | 1.13x | ✅ |
| `is_ipfs_uri[empty]` | 1.3901025577795324e-05 | 1.3984949994550108e-05 | -0.60% | -0.60% | 0.99x | ❌ |
| `is_ipfs_uri[invalid-cid]` | 1.780339466522894e-05 | 1.6459448634984295e-05 | 7.55% | 8.17% | 1.08x | ✅ |
| `is_ipfs_uri[not-ipfs]` | 1.4700362739817402e-05 | 1.480140425475825e-05 | -0.69% | -0.68% | 0.99x | ❌ |
| `is_ipfs_uri[valid-cidv0]` | 1.7975339220762194e-05 | 1.6661979444648692e-05 | 7.31% | 7.88% | 1.08x | ✅ |
