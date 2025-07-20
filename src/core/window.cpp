#include "window.h"

void Window::init(){
    glfwInit();
    glfwInitHint(GLFW_WAYLAND_LIBDECOR, GLFW_FALSE);
    glfwDefaultWindowHints();

    window = glfwCreateWindow(800, 600, "Elysium Engine", nullptr, nullptr);
    
    glfwMakeContextCurrent(window);




}

void Window::update(){
    while(!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
         glfwSwapBuffers(window);
         glfwPollEvents();

    }
}

void Window::cleanUp(){
    glfwTerminate();
}