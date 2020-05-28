project(Singleton LANGUAGES CXX)
add_executable(Singleton
    BoostDI.cpp
    di.h
    Multiton.cpp
    Singleton.h
    SingletonTest.cpp
    SingletonCodingExercise.cpp
)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Singleton ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
