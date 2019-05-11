#include <stdio.h>
#include <stdlib.h>
/*
1.程序分析：
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
//二维数组
int main()
{
	int n;
	int a[10][10];

	printf("打印行数：\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;	
	}

	for (int i = 2; i < n; i++)
		for (int j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <=i; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}			

	system("pause");
	return 0;
}