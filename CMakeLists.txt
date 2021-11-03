cmake_minimum_required (VERSION 3.1)
set (CMAKE_C_STANDARD 11)
set (CMAKE_CXX_STANDARD 11)

project(Engine)

include_directories("${PROJECT_SOURCE_DIR}/engine/include")
include_directories("${PROJECT_SOURCE_DIR}/engine/src")

add_subdirectory (engine)
add_subdirectory (test)