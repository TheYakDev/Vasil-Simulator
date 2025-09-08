
cmake_minimum_required(VERSION 3.10)
project(VasilDos LANGUAGES C CXX)

#file(GLOB_RECURSE source src/*.cpp)
file(GLOB_RECURSE source ${CMAKE_SOURCE_DIR}/src/*.cpp)


add_executable(${PROJECT_NAME} ${source} )

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/includes)