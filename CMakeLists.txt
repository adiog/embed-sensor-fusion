cmake_minimum_required(VERSION 3.0)
project(embed-sensor-fusion CXX)
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../glm)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/variant/imu-kalman)

file(GLOB_RECURSE api_headers ${CMAKE_CURRENT_SOURCE_DIR}/include/**.h)
file(GLOB_RECURSE variant_sources ${CMAKE_CURRENT_SOURCE_DIR}/variant/**.cpp)
file(GLOB_RECURSE variant_headers ${CMAKE_CURRENT_SOURCE_DIR}/variant/**.h)

add_library(sensorFusion ${api_headers} ${variant_sources} ${variant_headers})
