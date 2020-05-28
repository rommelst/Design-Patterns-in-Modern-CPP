project(Strategy LANGUAGES CXX)
add_executable(Strategy
    strategy_dynamic.cpp
    strategy_static.cpp
    main.cpp
)


project(StrategyTest LANGUAGES CXX)
add_executable(StrategyTest StrategyCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(StrategyTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
