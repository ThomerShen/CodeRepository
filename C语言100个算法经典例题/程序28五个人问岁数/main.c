#include <stdio.h>
/*
题目：有 5 个人坐在一起，问第五个人多少岁？他说比第 4 个人大 2 岁。问第 4 个人岁数，他说比第
3 个人大 2 岁。问第三个人，又说比第 2 人大两岁。问第 2 个人，说比第一个人大两岁。最后
问第一个人，他说是 10 岁。请问第五个人多大？
1.程序分析：利用递归的方法，递归分为回推和递推两个阶段。要想知道第五个人岁数，需知道
第四人的岁数，依次类推，推到第一人（10 岁），再往回推。
*/

int age(int n)
{
	int ages;
	if (n == 1)
		return ages = 10;
	else
		ages=age(n - 1)+2;
}

int main()
{
	int n = 5;
	
	printf("问第n个人的年龄：\n");
	scanf_s("%d", &n);
	printf("%d\n", age(n));

	system("pause");
	return 0;
}