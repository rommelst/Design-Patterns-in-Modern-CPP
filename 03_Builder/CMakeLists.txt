project(Builder LANGUAGES CXX)
add_executable(Builder
    builder.cpp
    groovy_style.cpp
    BuilderCodingExercise.cpp
)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Builder ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)


