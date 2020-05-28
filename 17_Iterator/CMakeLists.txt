project(Iterator LANGUAGES CXX)
add_executable(Iterator
    facade.cpp
    iterator.cpp
    IteratorCodingExercise.cpp
)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Iterator ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
