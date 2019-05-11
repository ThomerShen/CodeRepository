#include <stdio.h>
#include <stdlib.h>
//输出数列的中枢数的位置
//1 2 3 2 1
//1 2 3
//1 2 -2

int main()
{
	int n,pivot=-1;
	int a[10000];
	int leftsum = 0, rightsum = 0;//初始化左右的和
	printf("输入数列长度：\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		rightsum += a[i];//统计数列的总和
	}
	rightsum -= a[0];//出现除去一个数的右序列的总和为0
	if (leftsum == rightsum)
		pivot = 0;
	else
	{
		for (int i = 1; i < n; i++)
		{
			leftsum += a[i-1];
			rightsum -= a[i];
			if (leftsum == rightsum)
			{
				pivot = i;
				break;
			}				
		}
	}
	printf("中枢数的位置为%d\n", pivot);
	system("pause");
	return 0;
}