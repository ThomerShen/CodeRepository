#include <stdio.h>
#include <stdlib.h>
//��һ�����ӣ�������3������ÿ3������һ�����ӣ��������ƣ��������Ӷ�����������ÿ���µ���������Ϊ��
//���������Ĺ���Ϊ��1��1,2,3,5,8,13,21����������
int main()
{
	long int a=1, b=1;
	int n;
	printf("����ÿ3��������");
	scanf_s("%d",&n);

	for (int i = 1; i <= n; i++)
	{
		printf("%2ld%2ld", a, b);
		a = a + b;
		b = a + b;
	}
	getchar();
	system("pause");
	return 0;
}