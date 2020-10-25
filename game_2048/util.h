#include <cstdlib> // Header file needed to use srand and rand
#include <ctime> // Header file needed to use time
#include <sys/timeb.h>

//使用随机数种子
void initRand();

//生成一个int随机数,范围是[MIN_VALUE,MAX_VALUE]
int randNum(int MIN_VALUE, int MAX_VALUE);