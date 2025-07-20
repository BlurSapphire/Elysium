#pragma once

#include<iostream>
#include<GLFW/glfw3.h>
#include<sstream>
#include<fstream>

using std::string, std::ifstream, std::stringstream, std::cerr;

class Shader{
public:
    string loadShader(const string& path);
    GLuint compileShader(GLenum type, const string& source);
    void linkShader(GLuint vertexShader, GLuint fragmentShader);
private:
    GLuint shaderId;
};

