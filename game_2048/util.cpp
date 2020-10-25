#include "util.h"


//使用随机数种子
void initRand()
{
	struct timeb timeSeed;// 随机数种子（毫秒级）
	ftime(&timeSeed);
	srand(timeSeed.time + timeSeed.millitm);
}

//生成一个int随机数,范围是[MIN_VALUE,MAX_VALUE]
int randNum(int MIN_VALUE, int MAX_VALUE)
{
	int number;
	number = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
	return number;
}