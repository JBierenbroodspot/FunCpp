cmake_minimum_required(VERSION 3.21)
project(MasterMind)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
)

file(GLOB ALL_SOURCES
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/main.cpp"
        )

add_executable(MasterMind ${ALL_SOURCES})