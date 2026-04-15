cmake_minimum_required(VERSION 3.10)

# Project Name & Roll Number Identification
project(OptiGuardChain VERSION 1.0)

# Setting C++20 for modern features (essential for AI logic later)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell CMake where to find your .h files
include_directories(include)

# Create the executable (this assumes you have main.cpp in the same folder)
add_executable(OptiGuard_Node main.cpp src/Block.cpp)