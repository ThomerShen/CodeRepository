#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
//a+b和c的大小比较，a+b>c时为true,a+b<=c时为false
#define bool int
#define false 0
#define true 1

int main()
{
	int n, tcase = 1;
	long long a, b, c;
	bool flag;
	printf("输入要计算的组数：\n");
	scanf_s("%d", &n);
	while (n--)
	{
		printf("分别输入a,b c 的值\n");
		scanf_s("%lld%lld%lld", &a, &b, &c);
		long long res = a + b;
		if (a > 0 && b > 0 && res < 0)//正溢出为true
			flag = true;
		else if (a < 0 && b < 0 && res >= 0)//负溢出为false
			flag = false;
		else if (res > c)
			flag = true;
		else
			flag = false;
		if (flag == true)
			printf("Case #%d:true\n", tcase++);
		else
			printf("Case #%d:false\n", tcase++);
	}
	system("pause");
	return 0;
}