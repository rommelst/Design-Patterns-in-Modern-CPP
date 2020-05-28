project(Decorator LANGUAGES CXX)
add_executable(Decorator Decorator.cpp)


project(DecoratorTest LANGUAGES CXX)
add_executable(DecoratorTest DecoratorCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(DecoratorTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
