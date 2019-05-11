#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

void swap(int *x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int cmp(int x, int y)
{
	if (x != y)
		return x > y;
	else
		return x < y;
}
void BubbleSort(int arr[], int n)
{
	int i, j, flag;
	for (i = n - 1; i >= 1; --i)
	{
		flag = 0;
		for(j=1;j<i;j++)
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
	int n,d;
	int arr[100];
	//char c;

	printf("输入数字个数：\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	//c = getchar();

	//sort(arr, arr + n, cmp);
	BubbleSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}