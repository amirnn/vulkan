# TOP
cmake_minimum_required(VERSION 3.0.0)
project(vulkan LANGUAGES CXX VERSION 0.1.0)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# conan setup 
include(${CMAKE_SOURCE_DIR}/conan/conanbuildinfo.cmake)
conan_basic_setup()

# add_subdirectory(USD)

include_directories(include)
add_subdirectory(src)



# include(CTest)
enable_testing()
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
