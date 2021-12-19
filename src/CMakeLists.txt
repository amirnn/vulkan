# SRC

find_package(Vulkan REQUIRED)
include_directories(Vulkan::Headers)

add_executable(main main.cc)
target_link_libraries(main Vulkan::Vulkan ${CONAN_LIBS})