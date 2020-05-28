project(Interpreter LANGUAGES CXX)
add_executable(Interpreter Handmade.cpp)


project(Interpreter LANGUAGES CXX)
add_executable(InterpreterTest InterpreterCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(InterpreterTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
