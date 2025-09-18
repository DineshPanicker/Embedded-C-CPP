#Specify a minimum CMAKE version
cmake_minimum_required(VERSION 3.20.0)

#name the project
project(
    hello_world
    VERSION 1.0
    DESCRIPTION "The Classic"
    LANGUAGES C
)

#create a static library
add_library(
    my_lib
    STATIC
    src/my_lib.c
)

#Including the header files

target_include_directories(
    my_lib
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

#Create an executable target
add_executable(
    ${PROJECT_NAME}
    src/main.c
)

#Setup the linking of libraries to the executable
target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    my_lib
)