#include <glad/glad.h>
#include <glfw3.h>
#include <iostream>

#include <glad/glad.h>

#include <iostream>
#include "tempshade.h"
#include <stb_image.h>
#include "./texture/texture.cpp"
#include "./transformation/CusTransformation.h"
#include "coordinate/CusCoordinate.h"
#include "light/Light.h"

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
#endif

    // glfw window creation
    // --------------------
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
//    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

//    Texture texture;
//    texture.show(window);
//texture.practice_three(window);
//    texture.practice_fourth(window);

//    Transformation transformation;
//    transformation.show_practice_one(window);
//    transformation.show_practice_two(window);

//    Coordinate coordinate;
//    coordinate.show_practice_one(window);

    Light light;
    light.show_light(window);

    return 0;
}
