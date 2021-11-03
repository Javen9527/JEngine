cmake_minimum_required (VERSION 3.1)
set (CMAKE_C_STANDARD 11)
set (CMAKE_CXX_STANDARD 11)

project(Engine)


include_directories("${PROJECT_SOURCE_DIR}/engine/include"
                    "${PROJECT_SOURCE_DIR}/engine/src")

## Osx include path
include_directories("/opt/X11/include")

# Osx lib 
link_directories("/usr/local/Cellar/libxcb/1.14_1/lib")

add_subdirectory (engine)
add_subdirectory (test)