#include "difficultyLevel.h"

//ÄÑ¶ÈÑ¡Ôñ
int difficultyLevel;

void difficulty(int level)
{
	difficultyLevel = level;
}

void allotRand(int i, int j)
{
	switch (difficultyLevel)
	{
	case 0:
	{
		data[i][j] = 2;
	}break;
	case 1: 
	{
		int rand = 0;
		rand = randNum(1, 4);
		if (rand == 4)
			data[i][j] = 4;
		else
			data[i][j] = 2;
	}break;
	case 2: 
	{
		int rand = 0;
		rand = randNum(1, 2) * 2;
		data[i][j] = rand ;

	}break;
	case 3:
	{
		int rand = 0;
		rand = randNum(1, 16);
		if (rand > 14)
			data[i][j] = 8;
		else if(rand > 8)
			data[i][j] = 4;
		else
			data[i][j] = 2;

	}break;
	case 4: 
	{
		int rand = 0;
		rand = randNum(1, 1024);

		if (rand > 512)
		{
			data[i][j] = 2;
		}
		else if (rand > 256)
		{
			data[i][j] = 4;
		}
		else if (rand > 128)
		{
			data[i][j] = 8;
		}
		else if (rand > 64)
		{
			data[i][j] = 16;
		}
		else if (rand > 32)
		{
			data[i][j] = 32;
		}
		else if (rand > 16)
		{
			data[i][j] = 64;
		}
		else if (rand > 8)
		{
			data[i][j] = 128;
		}
		else if (rand > 4)
		{
			data[i][j] = 256;
		}
		else if (rand > 2)
		{
			data[i][j] = 512;
		}
		else if (rand >= 1)
		{
			data[i][j] = 1024;
		}
	}break;
	}
}