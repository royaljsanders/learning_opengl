cmake_minimum_required( VERSION 3.11 )

project( LearnOpenGL )

find_package(OpenGL REQUIRED)
#find_package(glfw3 3.3 REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS} )

#GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory( glfw )
#add_subdirectory(include/glfw-3.3.6)
include_directories( include )

set( LEARNOPENGL-SRC
     main.cpp
     glad.c
     )


#add_executable( LearnOpenGL WIN32 ${LEARNOPENGL-SRC} )
add_executable( LearnOpenGL ${LEARNOPENGL-SRC} )


#target_link_libraries( LearnOpenGL ${OPENGL_LIBRARIES} external/glfw-3.3.6 )
target_link_libraries( LearnOpenGL ${OPENGL_LIBRARIES} glfw )

