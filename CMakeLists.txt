# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.9)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp glad.c tempshade.h img_implementation.cpp texture/texture.cpp transformation/CusTransformation.h transformation/CusTransformation.cpp coordinate/CusCoordinate.h coordinate/CusCoordinate.cpp)
target_link_libraries( untitled glew32s glfw3 gdi32 opengl32)