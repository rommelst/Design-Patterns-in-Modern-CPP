project(Bridge LANGUAGES CXX)
add_executable(Bridge
    Bridge.cpp
    Foo.cpp
    Foo.h
    Person.cpp
    Person.h
    pimpl.cpp
    pimpl.h
    BridgeCodingExercise.cpp
)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Bridge ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
