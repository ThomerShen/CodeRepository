#include <stdio.h>
/*
一球从 100 米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
第 10 次落地时，共经过多少米？第 10 次反弹多高？
*/

int main()
{
	int n;
	float sn = 100.00,hn=sn/2;

	printf("经过n次反弹：n= ");
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		sn = sn + 2 * hn;
		hn = hn / 2;
	}
	printf("经过的总高度为：%f\n", sn);
	printf("第%d次反弹的高度为：%f\n", n, hn);
	system("pause");
	return 0;
}