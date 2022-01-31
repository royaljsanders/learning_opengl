cmake_minimum_required( VERSION 3.11 )

project( LearnOpenGL )

find_package(OpenGL REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS} )

#GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw-3.3.6)

set( LEARNOPENGL-SRC
     main.cpp
     )


add_executable( LearnOpenGL WIN32 ${LEARNOPENGL-SRC} )
target_link_libraries( LearnOpenGL ${OPENGL_LIBRARIES} external/glfw-3.3.6 )
