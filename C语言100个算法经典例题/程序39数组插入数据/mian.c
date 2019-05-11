#include <stdio.h>
#include <stdlib.h>
/*
题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
1. 程序分析：首先判断此数是否大于最后一个数，然后再考虑插入中间的数的情况，插入后
此元素之后的数，依次后移一个位置。
*/

void swap(int *x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
//折半查找
int halfsearch(int a[], int n,int key)
{
	int i = 0, j = n - 1;
	int mid;

	while (i <= j)
	{
		mid = (i + j) >> 1;
		if (key == a[mid])
			return mid;
		else if (key > a[mid])
			i = mid + 1;
		else
			j = mid - 1;
	}
	return mid;
}
//冒泡排序
void BubbleSort(int arr[], int n)
{
	int i, j, flag;
	for (i = n - 1; i >= 1; --i)
	{
		flag = 0;
		for (j = 1; j <= i; j++)
			if (arr[j - 1] > arr[j])
			{
				swap(&arr[j - 1], &arr[j]);
				flag = 1;
			}
		if (flag == 0)
			return;
	}
}

int main()
{
	int a[100] = { 0 };
	int n,t;

	printf("输入数字个数：\n");
	scanf_s("%d", &t);
	printf("输入数组：\n");
	for (int i = 0; i < t; i++)
		scanf_s("%d", &a[i]);
	printf("排好序的数组：\n");
	BubbleSort(a, t);
	for (int i = 0; i < t; i++)
		printf("%3d", a[i]);
	printf("\n");
	printf("输入要排序的数：\n");
	scanf_s("%d", &n);
	
	int i = t-1;
	while (i >= 0 && a[i] > n)
	{
		swap(&a[i + 1], &a[i]);
		//a[i + 1] = a[i];
		i--;
	}
	i++;
	a[i] = n;
	printf("排好序的数组：\n");
	for (int i = 0; i < t+1; i++)
		printf("%3d", a[i]);

	system("pause");
	return 0;
}