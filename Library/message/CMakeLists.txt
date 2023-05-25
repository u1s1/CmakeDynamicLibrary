# set minimum cmake version
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# project name and language
project(recipe-03 LANGUAGES CXX)

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_definitions(-DCROSS_PLATFORM_LIBRARY_EXPORTS)

#配置编译后的输出路径
 # 设定动态链接库的存储路径
 SET(LIBRARY_OUTPUT_PATH  ${CMAKE_CURRENT_LIST_DIR}/../bin)

include_directories(./include)
# generate a library from sources
add_library(message
  SHARED
    Message.cpp
  )

target_include_directories(message PUBLIC ./include)

