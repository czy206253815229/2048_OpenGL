#include "util.h"


//ʹ�����������
void initRand()
{
	struct timeb timeSeed;// ��������ӣ����뼶��
	ftime(&timeSeed);
	srand(timeSeed.time + timeSeed.millitm);
}

//����һ��int�����,��Χ��[MIN_VALUE,MAX_VALUE]
int randNum(int MIN_VALUE, int MAX_VALUE)
{
	int number;
	number = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
	return number;
}