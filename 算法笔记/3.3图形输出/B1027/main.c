#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//打印沙漏，可视为一个倒三角形和一个正三角形，三角尖公用
//数据：1.三角形的底边拥有的字符数；2.每行非空格字符输出之前需要输出的空格数；3。剩余要输出的字符数
int main()
{
	int n;
	char c;
	printf("输入打印的数量和字符：\n");
	scanf("%d %c", &n, &c);
	int bottom = (int)sqrt(2.0*(n + 1)) - 1;//1.底边拥有的字符数
	if (bottom % 2 == 0)//遇到偶数，变奇数
		bottom--;
	int used = (bottom + 1)*(bottom + 1) / 2 - 1;//3.总输出的非空格字符数
	printf("输出打印的图形：\n");
	//倒三角形
	for (int i = bottom; i >=1; i-=2)//奇数行
	{
		for (int j = 0; j < (bottom - i) / 2; j++)
		{
			printf(" ");//2.左侧的空格数量为(bottom - i) / 2
		}
		for (int j = 0; j < i; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	//正三角形
	for (int i = 3; i <= bottom; i += 2)//奇数行
	{
		for (int j = 0; j < (bottom - i) / 2; j++)
		{
			printf(" ");//左侧的空格数量为(bottom - i) / 2
		}
		for (int j = 0; j < i; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	printf("剩余字符个数：%d\n", n - used);
	system("pause");
	return 0;
}