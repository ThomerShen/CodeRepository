#include <stdio.h>

/*
greatest common divisor，简写为gcd
欧几里德算法又称辗转相除法， 用于计算两个整数a, b的最大公约数。其计算原理依赖于下面的定理：
定理： gcd(a, b) = gcd(b, a mod b)

最小公倍数（Least Common Multiple，缩写L.C.M.）
最小公倍数=两数的乘积/最大公约数
*/

//最大公约数 递归算法 时间复杂度O(logn)
int gcd_r(int x, int y)
{
	if (0 == y)
		return x;
	else
		return gcd(y, x%y);
}
//最大公约数 非递归算法
int gcd(int x, int y)
{
	int temp;
	while (y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int m, n;
	int k, t;
	int temp;

	printf("输入两个正整数：\n");
	scanf_s("%d%d", &m, &n);
	if (m < n)
		swap(&m, &n);
	//k = gcd(m, n);
	k = gcd_r(m, n);
	t = (m*n) / k;
	printf("最大公约数是%d\n", k);
	printf("最小公倍数是%d\n", t);

	system("pause");
	return 0;
}