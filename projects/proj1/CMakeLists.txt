# projects/proj1/CMakeLists.txt

project(proj1)

# Create executable
add_executable(proj1
    src/main.cpp
    src/renderer.cpp
    src/renderer.hpp
    shaders/shader.vert.spv
    shaders/shader.frag.spv
)

# Include directories
target_include_directories(proj1 PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/common/src
)

# Link libraries
target_link_libraries(proj1 PRIVATE
    common           # Your shared Vulkan utilities
    glfw             # From extern/
    glm              # From extern/ (if available as a CMake target)
    Vulkan::Vulkan   # Vulkan SDK
)

# Set output folder
set_target_properties(proj1 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/proj1
)

# Organize in IDEs
set_target_properties(proj1 PROPERTIES FOLDER "projects/proj1")
