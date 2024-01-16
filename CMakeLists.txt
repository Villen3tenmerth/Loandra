cmake_minimum_required(VERSION 3.21)
project(Loandra)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(maxpre2)
add_subdirectory(solvers/glucose4.1)

file(GLOB SOURCES algorithms/*.cc encodings/*.cc ./*.cc windows/*.c zlib/*.c)

add_compile_options(-Wall -Wno-parentheses)
add_compile_definitions(NSPACE=Glucose SOLVERNAME="Glucose4.1" VERSION=core)

add_link_options(-pthread)

add_executable(loandra ${SOURCES})
target_link_libraries(loandra maxpre2)
target_link_libraries(loandra glucose4_1)
#target_link_libraries(loandra ${CMAKE_CURRENT_SOURCE_DIR}/windows/libz.a)

target_include_directories(loandra PUBLIC solvers/glucose4.1)

#SET(ZLIB_USE_STATIC_LIBS ON)
#set(CMAKE_FIND_LIBRARY_SUFFIXES ".so" ".a")
#find_package(ZLIB REQUIRED)
#target_link_libraries(loandra ZLIB::ZLIB)