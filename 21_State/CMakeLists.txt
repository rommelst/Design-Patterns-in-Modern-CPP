project(State LANGUAGES CXX)
add_executable(State
    Classic.cpp
    Handmade.cpp
    Msm.cpp
    main.cpp
)


project(StateTest LANGUAGES CXX)
add_executable(StateTest StateCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(StateTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
