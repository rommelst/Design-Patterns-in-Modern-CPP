add_executable(Decorator Decorator.cpp)


add_executable(DecoratorTest DecoratorCodingExercise.cpp)
target_link_libraries(DecoratorTest GTest::gtest GTest::gtest_main GTest::gmock -lpthread)
