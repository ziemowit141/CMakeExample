cmake_minimum_required (VERSION 3.10)

project (add)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/addition/)

add_executable (bin main.cpp)

target_link_libraries(bin addition_lib) 
