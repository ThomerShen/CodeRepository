#include <stdio.h>
#include <stdlib.h>
//ʮ����n��B�������Ƿ��ǻ�����
//27 2
//Yes
//1 1 0 1 1
int judge(int z[], int num)
{
	for (int i = 0; i <= num / 2; i++)
	{
		if (z[i] != z[num - 1 - i])
			return 0;
	}
	return 1;
}

int main()
{
	int n, b, z[40], num = 0;
	printf("����ʮ������n�ͽ�����b��\n");
	scanf_s("%d%d", &n, &b);
	do {
		z[num++] = n % b;//����ȡ��
		n /= b;
	} while (n != 0);//����ת��
	int flag = judge(z, num);
	if (flag)
		printf("Yes\n");
	else
		printf("No\n");
	for (int i = num - 1; i >= 0; i--)
	{
		printf("%d", z[i]);
		if (i != 0)
			printf(" ");
	}
	system("pause");
	return 0;
}
