#include <TriangleApp.h>




void TriangleApp::initVulkan() {
  glfwInit();

  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

  window_ = std::unique_ptr<GLFWwindow, decltype(winDeleter_)>(glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr), winDeleter_);
}

void TriangleApp::mainLoop() {}

void TriangleApp::cleanup() {
  // glfwDestroyWindow(window);

  glfwTerminate();
}