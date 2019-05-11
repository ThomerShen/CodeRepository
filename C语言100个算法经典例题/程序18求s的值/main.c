#include <stdio.h>
/*
求 s=a+aa+aaa+aaaa+aa...a 的值，其中 a 是一个数字。例如 2+22+222+2222+22222(此时
共有 5 个数相加)，几个数相加由键盘控制。

程序分析：关键是计算出每一项的值
*/
int main()
{
	int n;
	int sum = 0,sum_a=0;
	int a;

	printf("输入a值和n值：\n");
	scanf_s("%d%d",&a, &n);
	
	for (int i = 1; i <= n; i++)
	{
		sum_a += a;
		sum += sum_a;
		a = a * 10;
	}
	printf("a+aa+...+aa..aa= %d\n", sum);

	system("pause");
	return 0;
}