#include <stdio.h>
/*
��Ŀ�����õݹ麯�����÷�ʽ����������� 5 ���ַ������෴˳���ӡ����
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