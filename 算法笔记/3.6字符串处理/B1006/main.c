#include <stdio.h>
#include <stdlib.h>
//换格式输出整数 B代替百，S代替十，数字12...n代替个位
//234
//BBSSS123
int main()
{
	int n;
	printf("输入十进制数：\n");
	scanf_s("%d", &n);
	int num=0, ans[5];
	printf("输出结果：\n");
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