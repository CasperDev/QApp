cmake_minimum_required(VERSION 3.22)

project(Libcore_add_test LANGUAGES CXX)

enable_testing()

find_package(Qt6 REQUIRED COMPONENTS Test)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Libcore_add_test tst_libcore_add_test.cpp)
add_test(NAME Libcore_add_test COMMAND Libcore_add_test)

target_link_libraries(Libcore_add_test PRIVATE
    Qt6::Test
    libcore
)

