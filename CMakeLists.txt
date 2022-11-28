# set minimum cmake version
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# project name and language
project(recipe-03 LANGUAGES CXX)

# generate a library from sources
add_subdirectory(./message)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG  ${CMAKE_CURRENT_LIST_DIR}/Bin/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE  ${CMAKE_CURRENT_LIST_DIR}/Bin/Release)
set(CMAKE_ARCHIEVE_OUTPUT_DIRECTORY_DEBUG  ${CMAKE_CURRENT_LIST_DIR}/Bin/Debug)
set(CMAKE_ARCHIEVE_OUTPUT_DIRECTORY_RELEASE  ${CMAKE_CURRENT_LIST_DIR}/Bin/Release)
message("------------------>add_subdirectory() fininshed!") 
message("------------------>CMAKE_ARCHIVE_OUTPUT_DIRECTORY：${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}")
message("------------------>CMAKE_LIBRARY_OUTPUT_DIRECTORY：${CMAKE_LIBRARY_OUTPUT_DIRECTORY}")
message("------------------>CMAKE_RUNTIME_OUTPUT_DIRECTORY ：${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")



add_executable(hello-world hello-world.cpp)

target_link_libraries(hello-world message)



