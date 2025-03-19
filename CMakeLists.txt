cmake_minimum_required(VERSION 3.13)
project(findingraph)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/main.cpp
    src/Graph.cpp
    src/Node.cpp
)

include_directories(include)

add_executable(findingraph ${SOURCES})

target_include_directories(findingraph PRIVATE ${PROJECT_SOURCE_DIR}/include)