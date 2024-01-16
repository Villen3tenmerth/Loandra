cmake_minimum_required(VERSION 3.21)

add_library(maxpre2 SHARED
        src/preprocessor.cpp
        src/inputreader.cpp
        src/outputreader.cpp
        src/preprocessedinstance.cpp
        src/trace.cpp
        src/utility.cpp
        src/probleminstance.cpp
        src/timer.cpp
        src/clause.cpp
        src/log.cpp
        src/AMSLEX.cpp
        src/touchedlist.cpp
        src/preprocessorinterface.cpp
        src/cardinalityconstraint.cpp
        src/satlikeinterface.cpp
        src/cpreprocessorinterface.cpp

        src/satsolver/glucose3.cpp
        src/satsolver/solvers/glucose3/core/Solver.cc
        src/satsolver/solvers/glucose3/utils/System.cc
        )
