project(Proxy LANGUAGES CXX)
add_executable(Proxy
    ProxyCodingExercise.cpp
)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Proxy ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
