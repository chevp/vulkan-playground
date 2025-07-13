#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>
#include <iostream>

int main() {
    // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW\n";
        return -1;
    }

    // Tell GLFW not to create an OpenGL context
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    // Create a window
    GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan Playground - Proj1", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }

    // Main loop
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        // Vulkan rendering would go here
    }

    // Cleanup
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}