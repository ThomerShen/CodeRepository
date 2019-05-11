#include <stdio.h>
#include <stdlib.h>
/*
�� 10 ������������
1.�����������������ѡ�񷨣����Ӻ� 9 ���ȽϹ����У�ѡ��һ����С�����һ��Ԫ�ؽ�����
�´����ƣ����õڶ���Ԫ����� 8 �����бȽϣ������н�����
*/

void swap(int *x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

//ð������
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
//��ѡ������
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
//��������
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

	printf("�������ָ�����\n");
	scanf_s("%d", &n);
	printf("�������飺\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);

	BubbleSort(arr, n);//ð������
	//selectsort(arr, n);//��ѡ������
	//quicksort(arr, 0, n-1);//��������

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}