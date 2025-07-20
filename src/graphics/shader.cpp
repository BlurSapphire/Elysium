#include"shader.h"

string Shader::loadShader(const string& path){
    ifstream file(path);
    if(!file.is_open()){
        cerr<<"Error openning the file"<<std::endl;
    }
    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

Gluint Shader::compileShader(GLenum type, const string& source){
    GLuint shader = glCreateShader(type);
    
}

void Shader::linkShader(GLuint vertexShader GLuint fragmentShader){
    
}