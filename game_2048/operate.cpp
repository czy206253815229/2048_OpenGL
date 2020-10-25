#include "operate.h"


bool operate_UP()
{
	bool flag = false;
	for (int j = 0; j < 4; j++)
	{
		bool hasChanged[4] = { 0 };
		for (int k = 0; k < 3; k++)
		{
			for (int i = 0; i < 3; i++)
			{
				if (data[i][j] == data[i + 1][j] && data[i][j] != 0 && hasChanged[i] == false && hasChanged[i + 1] == false)
				{
					flag = true;
					data[i][j] *= 2;
					data[i + 1][j] = 0;
					hasChanged[i] = true;
				}
				else if (data[i][j] == 0 && data[i + 1][j] != 0)
				{
					flag = true;
					data[i][j] = data[i + 1][j];
					data[i + 1][j] = 0;
				}
			}
		}
	}
	return flag;
}

bool operate_DOWN()
//向下
{
	bool flag = false;
	for (int j = 0; j < 4; j++)
	{
		bool hasChanged[4] = { 0 };
		for (int k = 0; k < 3; k++)
		{
			for (int i = 3; i > 0; i--)
			{
				if (data[i][j] == data[i - 1][j] && data[i][j] != 0 && hasChanged[i] == false && hasChanged[i - 1] == false)
				{
					flag = true;
					data[i][j] *= 2;
					data[i - 1][j] = 0;
					hasChanged[i] = true;
				}
				else if (data[i][j] == 0 && data[i - 1][j] != 0)
				{
					flag = true;
					data[i][j] = data[i - 1][j];
					data[i - 1][j] = 0;
				}
			}
		}

	}
	return flag;
}

bool operate_LEFT()
//向左
{
	bool flag = false;
	for (int i = 0; i < 4; i++)
	{
		bool hasChanged[4] = { 0 };
		for (int k = 0; k < 3; k++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (data[i][j] == data[i][j + 1] && data[i][j] != 0 && hasChanged[j] == false && hasChanged[j + 1] == false)
				{
					flag = true;
					data[i][j] *= 2;
					data[i][j + 1] = 0;
					hasChanged[j] = true;
				}
				else if (data[i][j] == 0 && data[i][j + 1] != 0)
				{
					flag = true;
					data[i][j] = data[i][j + 1];
					data[i][j + 1] = 0;
				}
			}
		}

	}
	return flag;
}

bool operate_RIGHT()
//向右
{
	bool flag = false;
	for (int i = 0; i < 4; i++)
	{
		bool hasChanged[4] = { 0 };
		for (int k = 0; k < 3; k++)
		{
			for (int j = 3; j > 0; j--)
			{
				if (data[i][j] == data[i][j - 1] && data[i][j] != 0 && hasChanged[j] == false && hasChanged[j - 1] == false)
				{
					flag = true;
					data[i][j] *= 2;
					data[i][j - 1] = 0;
					hasChanged[j] = true;
				}
				else if (data[i][j] == 0 && data[i][j - 1] != 0)
				{
					flag = true;
					data[i][j] = data[i][j - 1];
					data[i][j - 1] = 0;
				}
			}
		}
	}
	return flag;
}

