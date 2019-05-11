#include <stdio.h>
#include <stdlib.h>

//register 定义变量

void main()
{
	//register int i;
	int i;
	int tmp = 0;
	for (i = 1; i <= 100; i++)
		tmp += i;
	printf("The sum is %d\n", tmp);
	getch();
}