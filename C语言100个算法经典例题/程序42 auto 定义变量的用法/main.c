#include <stdio.h>
#include <stdlib.h>
//auto 定义变量
main()
{
	int i, num;
	num = 2;
	for (i = 0; i < 3; i++)
	{
		printf("The num = %d \n", num);
		num++;
		{
			auto int num = 1;//自动分配
			//int num = 1;//类似自动分配
			printf("The internal block num = %d \n", num++);
			//num++;
			printf("\n");
		}
	}
	getchar();
}