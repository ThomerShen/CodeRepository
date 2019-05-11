#include <stdio.h>
#include <stdlib.h>
//十进制n在B进制下是否是回文数
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
	printf("输入十进制数n和进制数b：\n");
	scanf_s("%d%d", &n, &b);
	do {
		z[num++] = n % b;//除基取余
		n /= b;
	} while (n != 0);//进制转换
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
