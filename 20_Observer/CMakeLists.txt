cmake_minimum_required(VERSION 3.6)
project(Observer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# see https://cmake.org/cmake/help/v3.5/module/FindBoost.html
find_package(Boost REQUIRED)

link_directories("c:/boost/stage/lib32")
include_directories(${Boost_INCLUDE_DIR})


set(SOURCE_FILES main.cpp headers.hpp Observer.cpp Observer.hpp Observable.cpp Observable.hpp SaferObservable.cpp SaferObservable.hpp)
add_executable(Observer ${SOURCE_FILES})


set(CMAKE_CXX_STANDARD 17)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Observer ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)


project(ObserverTest LANGUAGES CXX)
add_executable(ObserverTest ObserverCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(ObserverTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
