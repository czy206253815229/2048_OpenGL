#include <cstdlib> // Header file needed to use srand and rand
#include <ctime> // Header file needed to use time
#include <sys/timeb.h>

//ʹ�����������
void initRand();

//����һ��int�����,��Χ��[MIN_VALUE,MAX_VALUE]
int randNum(int MIN_VALUE, int MAX_VALUE);