project(TemplateMethod LANGUAGES CXX)
add_executable(TemplateMethod template_method.cpp)


project(TemplateMethodTest LANGUAGES CXX)
add_executable(TemplateMethodTest TemplateCodingExercise.cpp)
enable_testing()
include_directories(${GTEST_HOME}/include)
link_directories(${GTEST_HOME}/lib)
target_link_libraries(TemplateMethodTest ${GTEST_HOME}/lib/libgtest.a ${GTEST_HOME}/lib/libgtest_main.a -lpthread)
