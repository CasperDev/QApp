cmake_minimum_required(VERSION 3.22)

project(libcore LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)

add_library(libcore STATIC
  libcore.cpp
  libcore.h
)
target_include_directories(libcore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(libcore PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(libcore PRIVATE LIBCORE_LIBRARY)
