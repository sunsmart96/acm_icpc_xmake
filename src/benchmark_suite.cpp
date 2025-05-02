#include <benchmark/benchmark.h>

// 示例基准测试
static void BM_FunctionToTest(benchmark::State& state) {
    for (auto _ : state) {
        // 调用你想基准测试的函数
    }
}

BENCHMARK(BM_FunctionToTest);
BENCHMARK_MAIN();