#include <stdio.h>
#include <stdlib.h>
/*
题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
2 3 1 5 4

*/
void swap(int *p1, int *p2)
{
	int p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
}

void max_min(int a[],int n)
{
	int *max, *min,*p,*arr_end;
	int k, l;
	arr_end = a + n;
	max = min = a;

	for (p = a+1 ; p < arr_end-1; p++)
	{
		if (*p > *max)
			max = p;
		else if (*p < *min)
			min = p;
	}

	k = *max;
	l = *min;
	swap(&a[n], &max);
	swap(&a[0], &min);
	
	return;
}
int main()
{
	int n;
	int a[100];

	printf("输入数字个数：\n");
	scanf_s("%d", &n);
	printf("输入数组：\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	max_min(a, n);

	for (int i = 0; i < n; i++)
	{
		printf("%3d", a[i]);
	}

	system("pause");
	return 0;
}