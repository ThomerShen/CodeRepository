#include <stdio.h>
//使用内部链接的静态变量的函数：伪随机函数

static unsigned long int next = 1;//种子，内部链接的静态变量

int rand1(void)
{
	//生成伪随机数的魔术公式
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
	next = seed;
}