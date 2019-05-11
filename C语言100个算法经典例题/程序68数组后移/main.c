#include <stdio.h>
#include <stdlib.h>
/*
题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
1 2 3 4 5
*/

int main()
{
	int n,m;
	int a[100];

	printf("输入个数：\n");
	scanf_s("%d", &n);
	printf("输入整数：\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("输入后移m：\n");
	scanf_s("%d", &m);

	for (int i = 0; i < m; i++)
	{
		int temp = a[n - 1];
		for (int j = n-1; j > 0; j--)
		{
			a[j] = a[j-1];		
		}	
		a[0] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		printf(" %d", a[i]);
	}

	system("pause");
	return 0;
}