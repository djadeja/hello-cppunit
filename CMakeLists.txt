cmake_minimum_required(VERSION 3.0.0)
project(HelloCppUnit VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(HelloCppUnit ComplexNumber.h ComplexNumberTest.h main.cpp)

target_link_libraries(HelloCppUnit cppunit)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
