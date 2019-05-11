#include <stdio.h>
#include <stdlib.h>
// static 定义静态变量

int main()
{
	int i, num;
	num = 2;
	for (i = 0; i < 3; i++)
	{
		printf("The num = %d \n", num);
		num++;
		{
			static int num = 1;//只在编译时被初始化一次
			//int num = 1;//自动分配
			printf("The internal block num = %d\n", num++);
			printf("\n");
		}
	}
	getch();
}