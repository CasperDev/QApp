cmake_minimum_required(VERSION 3.22)

project(Libcore_benchmark LANGUAGES CXX)

enable_testing()

find_package(Qt6 REQUIRED COMPONENTS Test)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Libcore_benchmark tst_libcore_benchmark.cpp)
add_test(NAME Libcore_benchmark COMMAND Libcore_benchmark)

target_link_libraries(Libcore_benchmark PRIVATE
    Qt6::Test
    libcore
)

