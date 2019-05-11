#include <stdio.h>
#include <stdlib.h>
//����ʽ��˺ϲ� polynomial
//input1:2 1 2.4 0 3.2
//input2:2 2 1.5 1 0.5
//output:3 3 3.6 2 6.0 1 1.6
struct poly
{
	int exp;//ָ��
	double cof;//ϵ��
}poly[1001];

double ans[2001];

int main()
{
	int n, m, number=0;
	printf("����A���ʽ\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %lf", &poly[i].exp, &poly[i].cof);
	}
	printf("����B���ʽ\n");
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int exp;
		double cof;
		scanf("%d %lf", &exp, &cof);
		for (int j = 0; j < n; j++)
		{
			ans[exp + poly[j].exp] += (cof*poly[j].cof);//��ʽ
		}
	}
	for (int i = 0; i < 2001; i++)
	{
		if (ans[i] != 0.0)
			number++;
	}
	printf("%d", number);
	for (int i = 2000; i >= 0; i--)
	{
		if (ans[i] != 0.0)
			printf(" %d %.1f", i, ans[i]);
	}
	system("pause");
	return 0;
}