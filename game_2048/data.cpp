#include "data.h"


int data[4][4] = { 0 };

//贴图编号数组
GLuint BMP[12];



//数组清零
void initData()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			data[i][j] = 0;
		}
	}
}