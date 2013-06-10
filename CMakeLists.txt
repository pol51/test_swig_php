cmake_minimum_required(VERSION 3.8)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

find_package(PHP)
add_definitions(${PHP_DEFINITIONS})
message(INFO "${PHP_DEFINITIONS}")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_SWIG_FLAGS "")

set_source_files_properties(test.i PROPERTIES CPLUSPLUS ON)
#set_source_files_properties(test.i PROPERTIES SWIG_FLAGS "-includeall")
swig_add_library(test LANGUAGE php7 SOURCES test.i test.cpp)
swig_link_libraries(test ${PHP_LIBRARIES})
