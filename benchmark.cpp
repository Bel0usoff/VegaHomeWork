#include<benchmark/benchmark.h>
#include "Rect.hpp"


static void BM_Perimetr(benchmark::State& state) {
    int width = state.range(0);
    int length = state.range(1);
    for (auto _ : state) {
        benchmark::DoNotOptimize(Perimetr(width, length));
    }
}


static void BM_Area(benchmark::State& state) {
    int width = state.range(0);
    int length = state.range(1);
    for (auto _ : state) {
        benchmark::DoNotOptimize(Area(width, length));
    }
}


BENCHMARK(BM_Perimetr)->Args({5, 10});
BENCHMARK(BM_Area)->Args({5, 10});


BENCHMARK_MAIN();