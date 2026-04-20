cmake_minimum_required(VERSION 3.22)
project(QApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt
find_package(Qt6 REQUIRED COMPONENTS Core Widgets Test)

enable_testing()

add_subdirectory(libcore)
add_subdirectory(App)
add_subdirectory(cli)
add_subdirectory(tests)
add_subdirectory(bench)