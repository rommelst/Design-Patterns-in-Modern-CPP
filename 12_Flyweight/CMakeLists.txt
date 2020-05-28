project(Flyweight LANGUAGES CXX)
add_executable(Flyweight
    Capitalize.cpp
    Flyweight.cpp
    main.cpp
)


project(FlyweightTest LANGUAGES CXX)
set( CMAKE_CXX_FLAGS " -pthread " )
add_executable(FlyweightTest FlyweightCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(FlyweightTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
