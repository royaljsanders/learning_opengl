/* Royal's learnopengl tutorial project
 */

// include GLAD before other header files that require OpenGL (like GLFW)
#include "include/glad/glad.h"
#include "glfw/include/GLFW/glfw3.h"
#include <iostream>
// using namespace std;
/*
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);*/

int main()
{
    std::cout << "hello glad tutorial" << std::endl;

    /* This function initializes the GLFW library. Before most GLFW functions
     * can be used, GLFW must be initialized, and before an application terminates
     * GLFW should be terminated in order to free any resources allocated during
     * or after initialization. */
    glfwInit();

    // opengl 3.3 core, forward compat for mac?
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); //macOS

    GLFWwindow* window = glfwCreateWindow(1280, 1024, "LearnOpenGL", NULL, NULL);
    if (window == NULL){
        std::cout << "failed to create glfw window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    // glfwSetFramebufferSizeCallback(window, framebuffer_size_callback); // calling our function

    // GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // render loop
    while(!glfwWindowShouldClose(window))
    {
        // processInput(window);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

// https://www.glfw.org/docs/latest/group__keys.html
// void processInput(GLFWwindow* window)
// {
//     if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
//         glfwSetWindowShouldClose(window, true);
//     }
// }
/*
whenever the window size changes, resize viewport to match window dimensions
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    processed coordinates in OpenGL are between -1 and 1 so we effectively map from the range (-1 to 1) to (0, 800) and (0, 600)
    glViewport(0, 0, width, height);
}*/

