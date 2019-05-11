#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//一个数加100是一个完全平方数，再加上168又是一个完全平方数
int main()
{
	long int i, x, y;
	for (i = 1; i < 100000; i++)
	{
		x = sqrt(i + 100);
		y = sqrt(i + 268);
		if (x*x == i+100 && y*y == i + 268)
			printf("%ld\n", i);
	}
	system("pause");
	return 0;
}