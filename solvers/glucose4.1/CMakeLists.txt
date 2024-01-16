cmake_minimum_required(VERSION 3.21)

add_library(glucose4_1 SHARED core/solver.cc
                              simp/SimpSolver.cc
                              utils/Options.cc
                              utils/System.cc)
target_include_directories(glucose4_1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
