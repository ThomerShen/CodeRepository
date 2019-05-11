#include <stdio.h>
/*
题目：利用递归函数调用方式，将所输入的 5 个字符，以相反顺序打印出来
*/

void printf_x(int n)
{
	char next;

	if (n == 1||n==0)
	{
		next = getchar();
		//printf("\n\0:");
		putchar(next);
	}
	else
	{
		next = getchar();
		printf_x(n-1);
		putchar(next);
	}
}

int main()
{
	int i = 5;

	printf_x(i);

	getchar();
	system("pause");
	return 0;
}