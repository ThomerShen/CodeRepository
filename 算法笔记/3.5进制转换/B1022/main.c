#include <stdio.h>
#include <stdlib.h>
//A+B��d������������ȡ�෨
//input:123 456 8
//output:1103
int main()
{
	int a, b, d;
	printf("����������A��B�Լ�����d��\n");
	scanf_s("%d%d%d", &a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;
	//������ջ����
	do {
		ans[num++] = sum % d;
		sum /= d;
	} while (sum != 0);
	//��ջ����
	for (int i = num - 1; i >= 0; i--)
	{
		printf("%d",ans[i]);
	}
	system("pause");
	return 0;
}