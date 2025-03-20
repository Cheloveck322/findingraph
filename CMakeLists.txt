cmake_minimum_required(VERSION 3.13)
project(findingraph)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/main.cpp
    src/Graph.cpp
    src/Node.cpp
)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/graph.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

include_directories(include)

add_executable(findingraph ${SOURCES})

target_include_directories(findingraph PRIVATE ${PROJECT_SOURCE_DIR}/include)