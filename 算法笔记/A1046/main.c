#include <stdio.h>
#include <stdlib.h>

#define MAXN 100005

//��A�ڵ㵽B�ڵ����С���룬��֪N���ڵ�Χ��һ��Ȧ�����ڽڵ�ľ�����֪

//const int MAXN = 100005;
int dis[MAXN], A[MAXN];

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int sum = 0, query, n, left, rigth;
	printf("����ڵ�����\n");
	scanf_s("%d", &n);
	printf("�������ڽڵ�ľ��룺\n");
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &A[i]);
		sum += A[i];//�ۼӵ�һ���ڵ㵽�����ڵ�ľ���
		dis[i] = sum;//�������ڽڵ�Ĵ���
	}
	printf("����Ҫ��ѯ�Ľڵ�����\n");
	scanf_s("%d", &query);
	for (int i = 0; i < query; i++)
	{
		printf("�������������ڵ㣺\n");
		scanf_s("%d%d", &left, &rigth);
		if (left > rigth)
			swap(&left, &rigth);
		int temp = dis[rigth - 1] - dis[left - 1];
		printf("%d\n", min(temp, sum - temp));
	}
	system("pause");
	return 0;
}