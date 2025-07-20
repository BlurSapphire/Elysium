#pragma once

#include<iostream>
#include<GLFW/glfw3.h>

class Window{
public:
    void init();
    void update();
    void cleanUp();
private:
    GLFWwindow* window;
};

