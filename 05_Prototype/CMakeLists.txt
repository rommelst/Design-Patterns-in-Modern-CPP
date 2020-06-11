project(Prototype LANGUAGES CXX)
add_executable(Prototype
    Prototype.cpp
)
target_link_libraries(Prototype
    -lboost_serialization)



project(PrototypeTest LANGUAGES CXX)
add_executable(PrototypeTest
    PrototypeCodingExercise.cpp
)
enable_testing()
target_link_libraries(PrototypeTest
    ${GTEST_HOME}/lib/libgtest.a
    ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
link_directories(${GTEST_LIBRARY}/lib)

