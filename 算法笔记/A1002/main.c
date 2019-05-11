#include <stdio.h>
#include <stdlib.h>
//多项式相加合并 polynomial
//input1:2 1 2.4 0 3.2
//input2:2 2 1.5 1 0.5
//output:3 2 1.2 1 2.9 0 3.2
const int max = 1111;
double p[1111] = {0};

int main()
{
	int k, n, count = 0;
	double a;
	printf("输入A表达式\n");
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d%lf", &n, &a);//n次项数，a 系数
		p[n] += a;
	}
	printf("输入B表达式\n");
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d%lf", &n, &a);
		p[n] += a;
	}
	for (int i = 0; i < max; i++)
	{
		if (p[i] != 0)
			count++;
	}
	printf("%d", count);
	for (int i = max-1; i >=0; i--)
	{
		if (p[i] != 0)
			printf(" %d %.1f", i, p[i]);
	}
	system("pause");
	return 0;
}