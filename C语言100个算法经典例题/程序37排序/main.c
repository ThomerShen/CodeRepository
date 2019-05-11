#include <stdio.h>
#include <stdlib.h>
/*
对 10 个数进行排序
1.程序分析：可以利用选择法，即从后 9 个比较过程中，选择一个最小的与第一个元素交换，
下次类推，即用第二个元素与后 8 个进行比较，并进行交换。
*/

void swap(int *x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
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
//简单选择排序
void selectsort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i ; j < n; j++)
		{
			if(arr[j]<arr[j-1])
				swap(&arr[j - 1], &arr[j]);
		}
	}
	return;
}
//快速排序
int partition(int arr[], int i,int j)
{
	int pivot=arr[i];

	while (i < j)
	{
		while(i < j && pivot <= arr[j])
			j--;
		swap(&arr[j], &arr[i]);
		while(i < j && pivot >= arr[i])
			i++;
		swap(&arr[i], &arr[j]);
		
	}
	
	return i;
}

void quicksort(int arr[], int i, int j)
{
	if (i < j)
	{
		int pivotloc = partition(arr, i, j);
		quicksort(arr, i, pivotloc - 1);
		quicksort(arr, pivotloc + 1, j);
	}
}
//////////////////////////////////////////////////////////////////
int main()
{
	int n, d;
	int arr[100];

	printf("输入数字个数：\n");
	scanf_s("%d", &n);
	printf("输入数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);

	BubbleSort(arr, n);//冒泡排序
	//selectsort(arr, n);//简单选择排序
	//quicksort(arr, 0, n-1);//快速排序

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}