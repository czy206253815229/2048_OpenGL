#include "display.h"
#include <iostream>
using std::cout;

const char* filedir = ".\\textures\\";

//刷新屏幕 绘制所有贴图
void display()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (data[i][j] != 0)
			{
				int a = (int)(log(data[i][j]) / log(2));
				paint(i, j, a);
			}
		}
	}
	if (isWin())
	{
		MessageBox(nullptr, TEXT("You win!"), TEXT("Message"), MB_OK);
		exit(0);
	}
	else if (isGameOver())
	{
		MessageBox(nullptr, TEXT("Game over!!!"), TEXT("Message"), MB_OK);
		exit(0);
	}
}

//贴图绘制（画1个贴图到数组x，y位置）
void paint(int x, int y, int BMPindex)
{
	glBindTexture(GL_TEXTURE_2D, BMP[BMPindex]);
	glBegin(GL_QUADS);

	glTexCoord2f(0, 0);
	glVertex3f(100 * y, 300 - 100 * x, 0.0f);
	glTexCoord2f(1, 0);
	glVertex3f(100 * y + 100, 300 - 100 * x, 0.0f);
	glTexCoord2f(1, 1);
	glVertex3f(100 * y + 100, 400 - 100 * x, 0.0f);
	glTexCoord2f(0, 1);
	glVertex3f(100 * y, 400 - 100 * x, 0.0f);

	glEnd();
	glFlush();
}

//glut初始化
void Init()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);

	glutDisplayFunc(&reprint);  //调用我们自己的绘图函数来绘制
	
	//读取纹理
	{
		for (int i = 1; i <= 11; i++)
		{
			char index[3];
			char dir[20] = {0};
			strcpy_s(dir, strlen(filedir) + 1, filedir);
			_itoa_s(i, index, 3, 10);
			strcat_s(dir, 20, index);
			strcat_s(dir, 20, ".bmp");
			BMP[i] = load_texture(dir);
		}
	}
}

//重绘函数
void reprint()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	system("cls");
	display();
	glFlush();
}