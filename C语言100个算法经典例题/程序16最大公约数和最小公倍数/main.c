#include <stdio.h>
/*
�������������� m �� n���������Լ������С��������
*/

//���Լ��
int Max_common_divisor(int m,int n)
{
	int temp=-1;
	for (int i = 1; i <= m && i <= n; i++)
	{
		if (m%i == 0 && n%i == 0)
		{
			if (i > temp)
			{
				temp = i;
			}
			else
				break;
		}
	}
	return temp;
}
//��С������
int Min_common_multiple(int m, int n)
{
	int temp=m*n;
	for (int i = 1; i <= m; i++)
	{ 
		for (int j = 1; j <= n;j++)
		{
			if (m*i == n * j)
			{
				if (temp > m*i)
					temp = m * i;
			}
		}
	}
	return temp;
}

int main1()
{
	int m, n;
	int k, t;

	printf("����������������\n");
	scanf_s("%d%d", &m, &n);
	k = Max_common_divisor(m, n);
	t= Min_common_multiple(m, n);
	printf("���Լ����%d\n", k);
	printf("��С��������%d\n", t);

	system("pause");
	return 0;
}