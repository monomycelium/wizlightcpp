cmake_minimum_required(VERSION 3.14)
project(ciz VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#SET(GCC_COVERAGE_COMPILE_FLAGS "-Werror -Wall -std=c++17")
#SET(CMAKE_CXX_FLAGS  "${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(${PROJECT_NAME} 
    ${CMAKE_SOURCE_DIR}/src/wizcontrol.cpp
    ${CMAKE_SOURCE_DIR}/src/log.cpp
    ${CMAKE_SOURCE_DIR}/src/udp.cpp
    ${CMAKE_SOURCE_DIR}/src/bulb.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

find_package(PkgConfig REQUIRED)
pkg_check_modules(JANSSON REQUIRED IMPORTED_TARGET jansson)
target_link_libraries(ciz PUBLIC PkgConfig::JANSSON)
