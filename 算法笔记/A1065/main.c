#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
//a+b��c�Ĵ�С�Ƚϣ�a+b>cʱΪtrue,a+b<=cʱΪfalse
#define bool int
#define false 0
#define true 1

int main()
{
	int n, tcase = 1;
	long long a, b, c;
	bool flag;
	printf("����Ҫ�����������\n");
	scanf_s("%d", &n);
	while (n--)
	{
		printf("�ֱ�����a,b c ��ֵ\n");
		scanf_s("%lld%lld%lld", &a, &b, &c);
		long long res = a + b;
		if (a > 0 && b > 0 && res < 0)//�����Ϊtrue
			flag = true;
		else if (a < 0 && b < 0 && res >= 0)//�����Ϊfalse
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