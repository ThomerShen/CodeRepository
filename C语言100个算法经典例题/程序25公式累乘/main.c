#include <stdio.h>
/*
 ��Ŀ���� 1+2!+3!+...+20!�ĺ�
 ����������˳���ֻ�ǰ��ۼӱ�����۳ˡ�

 sum=2561327455189073920.000000

*/

int main()
{
	float sum = 0,sub_sum;
	int n;

	printf("n= ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sub_sum = 1;
		for (int j = 1; j <= i; j++)
			sub_sum *= j;
		sum += sub_sum;
	}

	printf("sum=%f\n", sum);

	system("pause");
	return 0;
}