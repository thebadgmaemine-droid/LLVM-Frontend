cmake_minimum_required(VERSION 3.16)

project(DDE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_MAP_IMPORTED_CONFIG_DEBUG Release)
find_package(LLVM REQUIRED CONFIG
    HINTS
        "/usr/lib/llvm-21/lib/cmake/llvm"
        "\\\\wsl.localhost\\Ubuntu\\usr\\lib\\llvm-21"
)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")

include_directories(
    ${LLVM_INCLUDE_DIRS}
    "/usr/include/llvm-21"
    "/usr/include/llvm-21"
    "\\\\wsl.localhost\\Ubuntu\\usr\\include\\llvm-21"
    "\\\\wsl.localhost\\Ubuntu\\usr\\include\\llvm-21"
)

add_executable(DDE main.cpp
    ExprAST.h)

target_link_libraries(DDE PRIVATE LLVM)


