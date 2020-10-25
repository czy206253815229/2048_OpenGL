#include "process.h"
#include <iostream>
using std::cout;


//自动生成下一个数字
void nextStep()
{
	bool hasNextStep = true;
	int nullPos = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (data[i][j] == 0)
			{
				nullPos++;
			}
		}
	}
	if (nullPos == 16)
	{
		int randPos_1 = randNum(0, 15);

		int x_1, y_1;
		x_1 = randPos_1 / 4;
		y_1 = randPos_1 % 4;

		int randPos_2 = randNum(0, 15);
		int x_2, y_2;
		x_2 = randPos_2 / 4;
		y_2 = randPos_2 % 4;

		while (randPos_1 == randPos_2)
		{
			randPos_2 = randNum(0, 15);
			x_2 = randPos_2 / 4;
			y_2 = randPos_2 % 4;
		}

		data[x_1][y_1] = randNum(1, 2) * 2;
		data[x_2][y_2] = randNum(1, 2) * 2;
	}
	else if (nullPos == 0)
	{
		return;
	}
	else
	{
		int randPos = randNum(1, nullPos);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (data[i][j] == 0)randPos--;

				if (randPos == 0)
				{
					allotRand(i, j);

					return;
				}
			}
		}
	}
	return;
}

//判断是否已经生成2048
bool isWin()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (data[i][j] == 2048)return true;
		}
	}
	return false;
}

//判断是否无法移动
bool isGameOver()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (data[i][j] == data[i + 1][j] || data[i][j] == data[i][j + 1])return false;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (data[i][3] == data[i + 1][3])return false;
	}
	for (int j = 0; j < 3; j++)
	{
		if (data[3][j] == data[3][j + 1])return false;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (data[i][j] == 0)return false;
		}
	}
	return true;
}