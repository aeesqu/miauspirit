cmake_minimum_required(VERSION 3.10)

project(miauspirit LANGUAGES CXX)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

include_directories(miauspirit PRIVATE
  include/
  thirdparty/)

add_executable(miauspirit
  src/main.cpp)

target_link_libraries(miauspirit PRIVATE
  ${CMAKE_SOURCE_DIR}/libs/SDL2main.lib
  ${CMAKE_SOURCE_DIR}/libs/SDL2.lib)
