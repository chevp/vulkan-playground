# common/CMakeLists.txt

project(common)

# Gather all source files
file(GLOB_RECURSE COMMON_SRC
    src/*.cpp
    src/*.hpp
)

# Create static library
add_library(common STATIC ${COMMON_SRC})

# Include directories for consumers
target_include_directories(common PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/include
)

# Link dependencies
target_link_libraries(common PUBLIC
    glfw             # From extern/
    glm              # From extern/
    Vulkan::Vulkan   # Vulkan SDK
)

# Organize in IDEs
set_target_properties(common PROPERTIES FOLDER "common")
