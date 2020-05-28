project(Command LANGUAGES CXX)
add_executable(Command
    Command.cpp
    command_composite.cpp
    command_undo.cpp
    main.cpp
)


project(CommandTest LANGUAGES CXX)
add_executable(CommandTest CommandCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(CommandTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
