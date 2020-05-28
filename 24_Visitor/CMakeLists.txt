project(Visitor LANGUAGES CXX)
add_executable(Visitor
    visitor_acyclic.cpp
    visitor_double.cpp
    visitor_intrusive.cpp
    visitor_multimethods.cpp
    visitor_reflective.cpp
    main.cpp
)



project(VisitorTest LANGUAGES CXX)
add_executable(VisitorTest VisitorCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(VisitorTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
