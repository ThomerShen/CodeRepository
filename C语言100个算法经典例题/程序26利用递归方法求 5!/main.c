#include <stdio.h>
/*
��Ŀ�����õݹ鷽���� 5!��
1.����������ݹ鹫ʽ��fn=fn_1*4!
*/

float recursive(float n)
{
	if (n == 1||n == 0)
		return 1;
	return  n*= recursive(n - 1);
}

int main1()
{
	int n;

	printf("n= ");
	scanf_s("%d", &n);
	printf("%d!=%.2f\n", n,recursive(n));

	system("pause");
	return 0;
}