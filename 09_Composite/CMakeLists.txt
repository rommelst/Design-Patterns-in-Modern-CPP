project(Composite LANGUAGES CXX)
include_directories(../20_Observer)
add_executable(Composite
    ArrayBackedProps.cpp
    Graphics.h
    Neurons.cpp
    main.cpp
)


project(CompositeTest LANGUAGES CXX)
add_executable(CompositeTest CompositeCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(CompositeTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
