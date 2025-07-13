cmake_minimum_required(VERSION 3.15)
project(vulkan-playground LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Enable folders in IDEs
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Add external dependencies
add_subdirectory(extern)

# Add shared/common code
add_subdirectory(common)

# Add all project subdirectories
file(GLOB PROJECT_DIRS RELATIVE ${CMAKE_SOURCE_DIR}/projects ${CMAKE_SOURCE_DIR}/projects/*)
foreach(proj ${PROJECT_DIRS})
    if(IS_DIRECTORY "${CMAKE_SOURCE_DIR}/projects/${proj}")
        add_subdirectory(projects/${proj})
    endif()
endforeach()
