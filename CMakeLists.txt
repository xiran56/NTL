cmake_minimum_required(VERSION 3.5)

project(ntl)

option(TESTING_ENABLED ON)

add_library(${PROJECT_NAME} INTERFACE)

add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} INTERFACE "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>")

if(TESTING_ENABLED)
    enable_testing()
    
    add_subdirectory(./tests)
endif(TESTING_ENABLED)

