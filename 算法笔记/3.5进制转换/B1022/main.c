#include <stdio.h>
#include <stdlib.h>
//A+B的d进制数，除基取余法
//input:123 456 8
//output:1103
int main()
{
	int a, b, d;
	printf("输入正整数A和B以及进制d：\n");
	scanf_s("%d%d%d", &a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;
	//类似入栈操作
	do {
		ans[num++] = sum % d;
		sum /= d;
	} while (sum != 0);
	//出栈操作
	for (int i = num - 1; i >= 0; i--)
	{
		printf("%d",ans[i]);
	}
	system("pause");
	return 0;
}