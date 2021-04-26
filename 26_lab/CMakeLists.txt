cmake_minimum_required(VERSION 3.17)

set(project_name 26_lab)
get_filename_component(rootdir ../ ABSOLUTE)

project(${project_name})
set(CMAKE_CXX_STANDARD 20)

# Library target
add_library(${project_name} STATIC src/shape.h src/square.h src/circle.h src/rectangle.h src/line.h)
target_sources(${project_name} PRIVATE src/shape.cpp src/square.cpp src/circle.cpp src/rectangle.cpp src/line.cpp)
target_include_directories(${project_name} PUBLIC src)

# Test target
add_subdirectory(${rootdir}/googletest ${CMAKE_BINARY_DIR}/googletest)
add_executable(test_${project_name} tests/test_draw.cpp)
target_link_libraries(test_${project_name} PRIVATE ${project_name} gtest_main)