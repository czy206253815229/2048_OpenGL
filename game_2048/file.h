#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include <GL/glew.h>
#include <GLUT/glut.h>


// ����power_of_two�����ж�һ�������ǲ���2����������
int power_of_two(int n);

//��ȡ��ͼ
GLuint load_texture(const char* file_name);