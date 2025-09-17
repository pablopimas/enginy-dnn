cmake_minimum_required(VERSION 3.15)
project(EnginyDNN LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_PREFIX_PATH
        "/opt/homebrew/opt/xtensor"
        "/opt/homebrew/opt/xtl"
)

find_package(xtensor REQUIRED)

add_library(enginydnn INTERFACE)
target_include_directories(enginydnn INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        "/opt/homebrew/opt/xtensor/include"
        "/opt/homebrew/opt/xtl/include"
)
target_link_libraries(enginydnn INTERFACE xtensor)

# Main demo executable
add_executable(EnginyDNN main.cpp)
target_link_libraries(EnginyDNN PRIVATE enginydnn)

# Test executables
add_executable(test_sigmoid tests/test_sigmoid.cpp)
target_link_libraries(test_sigmoid PRIVATE enginydnn)