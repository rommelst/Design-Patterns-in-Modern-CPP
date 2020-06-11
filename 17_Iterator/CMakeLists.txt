project(Iterator LANGUAGES CXX)
add_compile_options(-std=c++20)
add_compile_options(-fcoroutines)
add_executable(Iterator
#    facade.cpp
    iterator.cpp
#    IteratorCodingExercise.cpp
    binary_tree_iterator.cpp
)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Iterator ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
