#cmake_minimum_required(VERSION 3.6)
#project(Mediator LANGUAGES CXX)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++latest /await")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

# see https://cmake.org/cmake/help/v3.5/module/FindBoost.html
#find_package(Boost REQUIRED)

#link_directories("c:/boost/stage/lib32")
#include_directories(${Boost_INCLUDE_DIR})
#include_directories("c:/gtest/include")

#set(SOURCE_FILES main.cpp headers.hpp Person.cpp Person.hpp ChatRoom.cpp ChatRoom.hpp)
#add_executable(Mediator ${SOURCE_FILES})
#target_link_libraries(Mediator "c:/gtest/lib32/gtestd.lib")


#file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/capitals.txt
#        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

project(Mediator LANGUAGES CXX)
set(SOURCE_FILES main.cpp Person.cpp Person.hpp ChatRoom.cpp ChatRoom.hpp Soccer.cpp)
add_executable(Mediator ${SOURCE_FILES})
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(Mediator ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
