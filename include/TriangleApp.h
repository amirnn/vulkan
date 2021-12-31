#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <cstdlib>
#include <exception>
#include <functional>
#include <iostream>
#include <memory>

class TriangleApp {
 public:
#ifdef NDEBUG
  const bool enableValidationLayers = false;
#else
  const bool enableValidationLayers = true;
#endif
  static const uint32_t WIDTH = 800;
  static const uint32_t HEIGHT = 600;
  void run() {
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
  }

 private:
  std::function<void(GLFWwindow *)> winDeleter_ = [](GLFWwindow *ptr) {
    glfwDestroyWindow(ptr);
  };
  using pWin = std::unique_ptr<GLFWwindow, decltype(winDeleter_)>;
  pWin window_;
  VkInstance instance;
  auto createInstance() -> void;
  auto initWindow() -> void;
  auto initVulkan() -> void;
  auto mainLoop() -> void;
  auto cleanup() -> void;
};