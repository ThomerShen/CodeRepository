#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[100] = { 0 };
	int t;

	printf("�������ָ�����\n");
	scanf_s("%d", &t);
	printf("�������飺\n");
	for (int i = 0; i < t; i++)
		scanf_s("%d", &a[i]);
	printf("��������飺\n");
/*	for (int i = t-1; i >= 0; i--)
	{
		printf("%3d", a[i]);
	}	*/	
	for (int i = 0; i < t / 2; i++)
	{
		int temp = a[i];
		a[i] = a[t - i - 1];
		a[t - i - 1] = temp;
	}
	for (int i = 0; i < t; i++)
		printf("%3d", a[i]);
	system("pause");
	return 0;
}