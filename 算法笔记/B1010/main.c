#include <stdio.h>
#include <stdlib.h>
//һԪ����ʽ��
//input:3 4 -5 2 6 1 -2 0
//output:12 3 -10 1 6 0
#define N 8
int main()
{
	int a[N] = { 0 };
	int k, e, count = 0;
	printf("�������������ϵ����ָ��\n");
	while(scanf("%d %d",&k,&e)!=EOF)	//kϵ����eָ��
	{
		a[e] = k;//��¼��Ӧָ����ϵ��ֵ
	}
	a[0] = 0;//������󵼺�ֱ��Ϊ0
	for (int i = 1; i <= N-1; i++)//��һ���ʼö��
	{
		a[i - 1] = a[i] * i;//�󵼹�ʽ
		a[i] = 0;
		if (a[i - 1] != 0)
		{
			count++;//��¼��Ϊ0�ĵ�����Ŀ����
		}
	}
	if (count == 0)
		printf("0 0");
	else {
		for (int i = N-1; i >= 0; i--)//ָ���Ӹߵ��������
		{
			if (a[i] != 0)
			{
				printf("%d %d", a[i], i);
				count--;
				if (count != 0)
					printf(" ");
			}
		}
	}
	system("pause");
	return 0;
}