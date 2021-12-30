#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <cstdlib>
#include <exception>
#include <iostream>
#include <memory>
#include <functional>

class TriangleApp {
 public:
  static const uint32_t WIDTH = 800;
  static const uint32_t HEIGHT = 600;
  void run() {
    initVulkan();
    mainLoop();
    cleanup();
  }

 private:
  std::function<void(GLFWwindow *)> winDeleter_ = [](GLFWwindow *  ptr){ glfwDestroyWindow(ptr);};
  using pWin = std::unique_ptr<GLFWwindow, decltype(winDeleter_)>;
  pWin window_;
  auto initVulkan()  -> void;
  auto mainLoop() -> void;
  auto cleanup() -> void;
};