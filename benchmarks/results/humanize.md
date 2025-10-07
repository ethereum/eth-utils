#### [faster_eth_utils.humanize](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/faster_eth_utils/humanize.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-eth-utils/blob/BobTheBuidler-patch-2/benchmarks/test_humanize_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `humanize_bytes[32-bytes]` | 3.862763861689874e-06 | 2.595388965642769e-06 | 32.81% | 48.83% | 1.49x | ✅ |
| `humanize_bytes[empty]` | 1.0745443178847689e-06 | 1.1112765220608066e-06 | -3.42% | -3.31% | 0.97x | ❌ |
| `humanize_bytes[long]` | 3.6611951347329377e-06 | 2.415837720112062e-06 | 34.02% | 51.55% | 1.52x | ✅ |
| `humanize_bytes[short]` | 1.4048383678911414e-06 | 1.2813351485338043e-06 | 8.79% | 9.64% | 1.10x | ✅ |
| `humanize_hash[32-bytes]` | 4.1942998002594165e-06 | 2.5968304965944854e-06 | 38.09% | 61.52% | 1.62x | ✅ |
| `humanize_hash[empty]` | 1.3377271256624231e-06 | 1.2018597191690563e-06 | 10.16% | 11.30% | 1.11x | ✅ |
| `humanize_hash[long]` | 3.9814387328880725e-06 | 2.438384001599537e-06 | 38.76% | 63.28% | 1.63x | ✅ |
| `humanize_hash[short]` | 1.6516149668263123e-06 | 1.3634853315619113e-06 | 17.45% | 21.13% | 1.21x | ✅ |
| `humanize_hexstr[empty]` | 1.9150641625941804e-06 | 6.057150365860235e-07 | 68.37% | 216.17% | 3.16x | ✅ |
| `humanize_hexstr[short-0x]` | 4.497955235246134e-06 | 2.0593891649216284e-06 | 54.21% | 118.41% | 2.18x | ✅ |
| `humanize_hexstr[short-no-0x]` | 3.7485970743223373e-06 | 1.6320148939462592e-06 | 56.46% | 129.69% | 2.30x | ✅ |
| `humanize_hexstr[very-long-0x]` | 4.516001881734483e-06 | 2.045050308461132e-06 | 54.72% | 120.83% | 2.21x | ✅ |
| `humanize_hexstr[very-long-no-0x]` | 3.742650196646264e-06 | 1.633409157008514e-06 | 56.36% | 129.13% | 2.29x | ✅ |
| `humanize_integer_sequence[consecutive]` | 2.9422022968266815e-05 | 2.3100373262019826e-05 | 21.49% | 27.37% | 1.27x | ✅ |
| `humanize_integer_sequence[disjoint]` | 3.492314818593229e-05 | 2.794366271454502e-05 | 19.99% | 24.98% | 1.25x | ✅ |
| `humanize_integer_sequence[empty]` | 7.696530734133824e-07 | 5.578414507601881e-07 | 27.52% | 37.97% | 1.38x | ✅ |
| `humanize_integer_sequence[mixed]` | 4.231218421218376e-05 | 3.545878621429822e-05 | 16.20% | 19.33% | 1.19x | ✅ |
| `humanize_integer_sequence[single]` | 2.614736356552208e-05 | 1.9831385429357074e-05 | 24.16% | 31.85% | 1.32x | ✅ |
| `humanize_integer_sequence[two-consecutive-ranges]` | 3.791836930145165e-05 | 3.185171325129519e-05 | 16.00% | 19.05% | 1.19x | ✅ |
| `humanize_ipfs_uri[valid-cidv0]` | 3.189255214122955e-05 | 2.9756044853624905e-05 | 6.70% | 7.18% | 1.07x | ✅ |
| `humanize_seconds[fifty-nine-seconds]` | 1.9179213933925483e-05 | 1.66084188283328e-05 | 13.40% | 15.48% | 1.15x | ✅ |
| `humanize_seconds[negative]` | 2.5616594776882798e-05 | 1.615829752118034e-05 | 36.92% | 58.54% | 1.59x | ✅ |
| `humanize_seconds[one-hour-one-minute-one-second]` | 3.026266841369617e-05 | 1.8749232921978254e-05 | 38.05% | 61.41% | 1.61x | ✅ |
| `humanize_seconds[one-hour]` | 1.829780332542049e-05 | 1.577818579240556e-05 | 13.77% | 15.97% | 1.16x | ✅ |
| `humanize_seconds[one-minute]` | 1.8476268544234404e-05 | 1.6013249138552417e-05 | 13.33% | 15.38% | 1.15x | ✅ |
| `humanize_seconds[one-second]` | 1.932628561682059e-05 | 1.7114233581809936e-05 | 11.45% | 12.93% | 1.13x | ✅ |
| `humanize_seconds[zero]` | 1.2498628687518841e-06 | 9.067128448701012e-07 | 27.46% | 37.85% | 1.38x | ✅ |
| `humanize_wei[ether]` | 2.6468320789235048e-05 | 2.496315982238443e-05 | 5.69% | 6.03% | 1.06x | ✅ |
| `humanize_wei[gwei]` | 2.524359477034801e-05 | 2.448077063674243e-05 | 3.02% | 3.12% | 1.03x | ✅ |
| `humanize_wei[wei]` | 2.5033153919934035e-05 | 2.3577061467035446e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `humanize_wei[zero]` | 4.586567232888999e-06 | 4.085745611956954e-06 | 10.92% | 12.26% | 1.12x | ✅ |
| `is_ipfs_uri[empty]` | 1.2505444221408098e-05 | 1.3210915244691364e-05 | -5.64% | -5.34% | 0.95x | ❌ |
| `is_ipfs_uri[invalid-cid]` | 1.5671332398587123e-05 | 1.5430751223949593e-05 | 1.54% | 1.56% | 1.02x | ✅ |
| `is_ipfs_uri[not-ipfs]` | 1.3100060203984228e-05 | 1.3811771734753458e-05 | -5.43% | -5.15% | 0.95x | ❌ |
| `is_ipfs_uri[valid-cidv0]` | 1.607295139306719e-05 | 1.5394499687252976e-05 | 4.22% | 4.41% | 1.04x | ✅ |
