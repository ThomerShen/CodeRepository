#include <stdio.h>
#include <stdlib.h>
//一元多项式求导
//input:3 4 -5 2 6 1 -2 0
//output:12 3 -10 1 6 0
#define N 8
int main()
{
	int a[N] = { 0 };
	int k, e, count = 0;
	printf("请依次输入各项系数和指数\n");
	while(scanf("%d %d",&k,&e)!=EOF)	//k系数，e指数
	{
		a[e] = k;//记录对应指数的系数值
	}
	a[0] = 0;//零次项求导后直接为0
	for (int i = 1; i <= N-1; i++)//从一次项开始枚举
	{
		a[i - 1] = a[i] * i;//求导公式
		a[i] = 0;
		if (a[i - 1] != 0)
		{
			count++;//记录不为0的倒数项目个数
		}
	}
	if (count == 0)
		printf("0 0");
	else {
		for (int i = N-1; i >= 0; i--)//指数从高到低来输出
		{
			if (a[i] != 0)
			{
				printf("%d %d", a[i], i);
				count--;
				if (count != 0)
					printf(" ");
			}
		}
	}
	system("pause");
	return 0;
}