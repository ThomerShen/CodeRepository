#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Hello World for U
//HelloWorld!
int main()
{
	char str[100], ans[40][40];
	printf("输入打印的字符串：\n");
	gets(str);
	int n = strlen(str);
	int n1 = (n + 2) / 3, n3 = n1, n2 = n + 2 - n1 - n3;

	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
			ans[i][j] = ' ';//初始化二维数组，赋值为空格
	}
	int pos = 0;
	//最左侧
	for (int i = 1; i <= n1; i++)
	{
		ans[i][1] = str[pos++];
	}
	//最底层
	for (int j = 2; j <= n2; j++)
	{
		ans[n1][j] = str[pos++];
	}
	//最右侧
	for (int i = n3 - 1; i >= 1; i--)
	{
		ans[i][n2] = str[pos++];
	}

	printf("输出打印的图形：\n");
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
			printf("%c", ans[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}