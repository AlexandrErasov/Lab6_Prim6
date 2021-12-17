cmake_minimum_required(VERSION 3.15)



set(PROJECT_NAME lab6_Prim6)
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable("${PROJECT_NAME}" laba6_Prim6.cpp
                    inc/SomeFunctions.hpp

                    src/SomeFunctions.cpp
)