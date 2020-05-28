project(Prototype LANGUAGES CXX)
add_executable(Prototype
    Prototype.cpp
    PrototypeCodingExercise.cpp
)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Prototype ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
