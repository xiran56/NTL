cmake_minimum_required(VERSION 3.5)

aux_source_directory(./src SOURCES)

find_package(GTest REQUIRED)

add_executable(ntl-tests ${SOURCES})

target_link_libraries(ntl-tests
    ntl::ntl
    GTest::gtest_main
)

add_test(
    NAME ntl-tests
    COMMAND ntl-tests
)
