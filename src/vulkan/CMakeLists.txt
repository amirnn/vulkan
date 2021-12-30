# Vulkan
find_package(Vulkan REQUIRED)
include_directories(Vulkan::Headers)

set(LibTriangle TriangleApp)
add_library(${LibTriangle} TriangleApp.cc)
target_link_libraries(${LibTriangle} Vulkan::Vulkan ${CONAN_LIBS})

add_executable(main main.cc)
target_link_libraries(main Vulkan::Vulkan ${CONAN_LIBS} ${LibTriangle})
