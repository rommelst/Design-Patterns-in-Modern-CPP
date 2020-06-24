project(Builder LANGUAGES CXX)
add_executable(Builder
    builder.cpp
)

project(BuilderGroovy LANGUAGES CXX)
add_executable(BuilderGroovy
    groovy_style.cpp
)



enable_testing()
project(BuilderTest LANGUAGES CXX)
add_executable(BuilderTest
    BuilderCodingExercise.cpp
)
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(BuilderTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)


project(BuilderFacets LANGUAGES CXX)
add_executable(BuilderFacets
    BuilderFacets/Facets.cpp
    BuilderFacets/PersonAddressBuilder.h
    BuilderFacets/PersonBuilder.cpp
    BuilderFacets/PersonBuilder.h
    BuilderFacets/Person.cpp
    BuilderFacets/Person.h
    BuilderFacets/PersonJobBuilder.h
)
