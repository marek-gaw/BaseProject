#https://stackoverflow.com/questions/31363090/c-testing-classes-with-catch

cmake_minimum_required(VERSION 3.7)
project(BaseProject)

#C++ flags
set(CMAKE_CXX_STANDARD 11) # adds -std=c++11
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#libraries
set(LIB_DIR "lib")
include_directories(${LIB_DIR}/catch)

#Library: Catch
add_library(Catch_LIB SHARED src/TestClass.hpp src/TestClass.cpp)

#Main sources
set(SRC_DIR src)
set(SOURCE_FILES ${SRC_DIR}/main.cpp src/TestClass.hpp src/TestClass.cpp)
add_executable(BaseProject ${SOURCE_FILES})

#UT binary
set(TEST_DIR test)
set(TEST_FILES ${TEST_DIR}/test.cpp)
add_executable(BaseProject_TEST ${TEST_FILES})
target_link_libraries(BaseProject_TEST Catch_LIB)




