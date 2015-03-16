cmake_minimum_required(VERSION 3.0.0)
project(meta-api)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

option(USE_LIBCXX "Use libc++ for the C++ standard library" ON)

include_directories(../../meta/include)

add_subdirectory(../../meta meta-libs EXCLUDE_FROM_ALL)

add_executable(stubserver stubserver.cpp)
target_link_libraries(forwardIndexServer cpptoml meta-util meta-index jsoncpp jsonrpccpp-common jsonrpccpp-server)
