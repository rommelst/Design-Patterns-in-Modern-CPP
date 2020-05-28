project(ChainOfResponsability LANGUAGES CXX)
add_executable(ChainOfResponsability
    ChainOfResponsability.cpp
    cor_broker.cpp
    main.cpp
)


project(ChainOfResponsabilityTest LANGUAGES CXX)
add_executable(ChainOfResponsabilityTest CoRCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(ChainOfResponsabilityTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
