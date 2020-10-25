#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include <GL/glew.h>
#include <GLUT/glut.h>


// 函数power_of_two用于判断一个整数是不是2的整数次幂
int power_of_two(int n);

//读取贴图
GLuint load_texture(const char* file_name);