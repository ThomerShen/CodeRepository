#include <stdio.h>
#include <stdlib.h>

#define MAXN 100005

//求A节点到B节点的最小距离，已知N个节点围成一个圈，相邻节点的距离已知

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
	printf("输入节点数：\n");
	scanf_s("%d", &n);
	printf("输入相邻节点的距离：\n");
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &A[i]);
		sum += A[i];//累加第一个节点到其他节点的距离
		dis[i] = sum;//处理相邻节点的处理
	}
	printf("输入要查询的节点数：\n");
	scanf_s("%d", &query);
	for (int i = 0; i < query; i++)
	{
		printf("输入任意两个节点：\n");
		scanf_s("%d%d", &left, &rigth);
		if (left > rigth)
			swap(&left, &rigth);
		int temp = dis[rigth - 1] - dis[left - 1];
		printf("%d\n", min(temp, sum - temp));
	}
	system("pause");
	return 0;
}