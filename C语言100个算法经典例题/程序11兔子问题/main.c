#include <stdio.h>
#include <stdlib.h>
//有一对兔子，出生后3个月起每3个月生一对兔子，依次类推，假如兔子都不死，请问每个月的兔子总量为？
//兔子数量的规律为：1，1,2,3,5,8,13,21，。。。。
int main()
{
	long int a=1, b=1;
	int n;
	printf("输入每3个月数：");
	scanf_s("%d",&n);

	for (int i = 1; i <= n; i++)
	{
		printf("%2ld%2ld", a, b);
		a = a + b;
		b = a + b;
	}
	getchar();
	system("pause");
	return 0;
}