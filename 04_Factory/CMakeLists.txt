project(Factory LANGUAGES CXX)
project(FactoryTest LANGUAGES CXX)
include_directories(${GTEST_INCLUDE_DIR})
link_directories(${GTEST_LIBRARY}/lib)

add_executable(Factory
    Factory.cpp
    AbstractFactory.cpp
    CoffeeFactory.h
    DrinkFactory.h
    FactoryMethod.cpp
    HotDrink.h
    HotDrinkFactory.h
    InnerFactory.cpp
    TeaFactory.h
)

add_executable(FactoryTest
    FactoryCodingExcercise.cpp
)

target_link_libraries(FactoryTest /opt/google/googletest-1.8.0/lib/libgtest.a)
target_link_libraries(FactoryTest /opt/google/googletest-1.8.0/lib/libgtest_main.a)
target_link_libraries(FactoryTest -lpthread)
