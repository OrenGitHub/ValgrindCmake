project(main)

cmake_minimum_required(VERSION 3.8)

include_directories(inc)
include_directories(src)

# source files
file(GLOB SOURCES "src/*.cpp")

# compilation flags
set_source_files_properties(${SOURCES} PROPERTIES COMPILE_OPTIONS "-g;-O0")

# testing is cool 😎 
include(CTest)

# enable valgrind checks
set(CTEST_MEMORYCHECK_TYPE "valgrind")

# single executable file
add_executable(main ${SOURCES})

# actual test
add_test(NAME test COMMAND main)

# expected test outputs
set(expected "OK PERSON")

# expected results
set_property(TEST test PROPERTY PASS_REGULAR_EXPRESSION "${expected}")

