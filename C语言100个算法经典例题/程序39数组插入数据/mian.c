#include <stdio.h>
#include <stdlib.h>
/*
��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
1. ��������������жϴ����Ƿ�������һ������Ȼ���ٿ��ǲ����м����������������
��Ԫ��֮����������κ���һ��λ�á�
*/

void swap(int *x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
//�۰����
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

int main()
{
	int a[100] = { 0 };
	int n,t;

	printf("�������ָ�����\n");
	scanf_s("%d", &t);
	printf("�������飺\n");
	for (int i = 0; i < t; i++)
		scanf_s("%d", &a[i]);
	printf("�ź�������飺\n");
	BubbleSort(a, t);
	for (int i = 0; i < t; i++)
		printf("%3d", a[i]);
	printf("\n");
	printf("����Ҫ���������\n");
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
	printf("�ź�������飺\n");
	for (int i = 0; i < t+1; i++)
		printf("%3d", a[i]);

	system("pause");
	return 0;
}