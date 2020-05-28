project(Memento LANGUAGES CXX)
add_executable(Memento Memento.cpp)


project(MementoTest LANGUAGES CXX)
add_executable(MementoTest MementoCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(MementoTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
