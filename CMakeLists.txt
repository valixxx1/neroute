cmake_minimum_required(VERSION 3.30)
project(neroute)

include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB_RECURSE SRCS "${CMAKE_SOURCE_DIR}/source/*.c")
add_executable(neroute ${SRCS})
