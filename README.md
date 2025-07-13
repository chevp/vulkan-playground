# Vulkan Playground

A collection of C++ projects exploring Vulkan API - from basic rendering to advanced graphics techniques.

## Features

- Multiple self-contained Vulkan demos
- Modular structure with reusable components
- CMake-based build system
- GLSL shaders and real-time rendering
- Easily extendable for experiments

## Folder Structure

```
vulkan-playground/
├── projects/ # Individual Vulkan demo projects
├── common/ # Shared Vulkan utility code
├── include/ # Shared headers
├── extern/ # External dependencies
├── scripts/ # Build and shader compile scripts
└── CMakeLists.txt
```

## Requirements

- C++17 compiler
- CMake 3.15+
- Vulkan SDK
- GLFW, glm, stb (provided in `extern/` or fetched by CMake)

## Getting Started

```bash
git clone https://github.com/chevp/vulkan-playground.git
cd vulkan-playground
mkdir build && cd build
cmake ..
cmake --build .
```

## License

MIT License
