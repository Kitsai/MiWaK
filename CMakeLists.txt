cmake_minimum_required(VERSION 3.16..3.28)
project(
  MiWaK
  VERSION 0.0.1
  DESCRIPTION "MiddleWare for games"
  LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE
      Release
      CACHE STRING "" FORCE)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

add_library(cxx_setup INTERFACE)
target_compile_options(cxx_setup INTERFACE -Wall -Wpedantic -Wextra)
target_compile_features(cxx_setup INTERFACE cxx_std_17)

add_subdirectory(libs)
add_subdirectory(core)
add_subdirectory(engine)
add_subdirectory(visual)
