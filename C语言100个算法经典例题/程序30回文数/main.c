#include <stdio.h>
/*
��Ŀ��һ�� 5 λ�����ж����ǲ��ǻ��������� 12321 �ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��
*/

int main()
{
	int i = 0, n, temp,flag=0;
	int a[100] = { 0 };

	printf("�����벻���� 5 λ����������\n");
	scanf_s("%d", &n);

	while (n > 0)
	{
		temp = n % 10;
		//if (temp != 0)
		a[i++] = temp;
		n /= 10;
	}

	for (int j = 0; j <= i - 1; j++)
	{
		flag = 0;
		if (a[j] == a[i - 1 - j])
			flag = 1;
	}
	if(flag==1)
		printf("������ǻ�����");
	else
		printf("��������ǻ�����");

	system("pause");
	return 0;
}