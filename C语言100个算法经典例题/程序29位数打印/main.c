#include <stdio.h>
/*
��Ŀ����һ�������� 5 λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
1. ���������ѧ��ֽ��ÿһλ����
*/

int main1()
{
	int i=0,n,temp;
	int a[5] = { 0 };

	printf("�����벻���� 5 λ����������\n");
	scanf_s("%d", &n);

	while (n>0)
	{
		temp = n % 10;
		//if (temp != 0)
			a[i++] = temp;
		n /= 10;
	}

	printf("�����������%dλ��\n", i);
	for (int j = 0; j <= i-1; j++)
		printf("%2d", a[j]);

	system("pause");
	return 0;
}