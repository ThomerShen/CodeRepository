#include <stdio.h>
#include <stdlib.h>
//����ʽ������� B����٣�S����ʮ������12...n�����λ
//234
//BBSSS123
int main()
{
	int n;
	printf("����ʮ��������\n");
	scanf_s("%d", &n);
	int num=0, ans[5];
	printf("��������\n");
	while (n != 0)
	{
		ans[num] = n % 10;
		num++;
		n /= 10;
	}
	for (int i = num - 1; i >= 0; i--)
	{
		if (i == 2)
		{
			for (int j = 0; j < ans[i]; j++)
				printf("B");
		}
		else if (i == 1)
		{
			for (int j = 0; j < ans[i]; j++)
				printf("S");
		}
		else {
			for (int j = 1; j < ans[i]; j++)
				printf("%d",j);
		}
	}
	system("pause");
	return 0;
}