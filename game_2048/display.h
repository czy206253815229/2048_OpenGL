#include <cstdlib>
#include <cstring>
#include "file.h"
#include "process.h"
#include <cmath>
#include <Windows.h>
#include <GL/glew.h>
#include <GLUT/glut.h>
#include "data.h"


//刷新屏幕 绘制所有贴图
void display();

//贴图绘制（画1个贴图到数组x，y位置）
void paint(int x, int y, int BMPindex);

//glut初始化
void Init();

//重绘函数
void reprint();