-- xmake.lua

-- 安装 Google Test 和 Google Benchmark
add_requires("gtest", "benchmark")

-- 定义项目
add_rules("mode.debug", "mode.release")

-- 目标：主程序
target("acm_icpc")
    set_kind("binary")
    add_files("src/main.cpp")
    
    -- 只在 target() 内部使用 add_packages
    add_packages("gtest", "benchmark")

-- 目标：测试
target("test_suite")
    set_kind("binary")
    add_files("test/test_suite.cpp")
    add_packages("gtest")

-- 目标：基准测试
target("benchmark_suite")
    set_kind("binary")
    add_files("benchmark/benchmark_suite.cpp")
    add_packages("benchmark")