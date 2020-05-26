cmake_minimum_required(VERSION 3.5)

project(DesignPatterns LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Builder LANGUAGES CXX)
add_executable(Builder
    03_Builder/builder.cpp
    03_Builder/BuilderCodingExercise.cpp
    03_Builder/groovy_style.cpp
    03_Builder/BuilderFacets/Facets.cpp
    03_Builder/BuilderFacets/Person.cpp
    03_Builder/BuilderFacets/PersonBuilder.cpp
)



project(Factory LANGUAGES CXX)
add_executable(Factory 04_Factories/AbstractFactory.cpp)


