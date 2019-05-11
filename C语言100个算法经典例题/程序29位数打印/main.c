#include <stdio.h>
/*
题目：给一个不多于 5 位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
1. 程序分析：学会分解出每一位数，
*/

int main1()
{
	int i=0,n,temp;
	int a[5] = { 0 };

	printf("请输入不多于 5 位的正整数：\n");
	scanf_s("%d", &n);

	while (n>0)
	{
		temp = n % 10;
		//if (temp != 0)
			a[i++] = temp;
		n /= 10;
	}

	printf("这个正整数是%d位数\n", i);
	for (int j = 0; j <= i-1; j++)
		printf("%2d", a[j]);

	system("pause");
	return 0;
}