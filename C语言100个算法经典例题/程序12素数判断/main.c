#include <stdio.h>
//101到200之间的素数
//素数就是质数，指在一个大于1的自然数中，除了1和此整数自身外，不能被其他自然数整除的数。
//素数判断方法：用一个数n分别除2到sqrt(n)的范围，如果能整除，则不是素数
/*200以内的素数
2 3 5 7 11 13 17 19 23 29
31 37 41 43 47 53 59 61 67 71
73 79 83 89 97 101 103 107 109 113
127 131 137 139 149 151 157 163 167 173
179 181 191 193 197 199
*/

int isPrime(int n)
{
	for (int i = 2; i*i <= n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}		
	}
	return 1;
}

int main()
{
	int count=0;
	int m;

	for (int k = 2; k <= 200; k++)
	{
		m=isPrime(k);
		if (m == 1)
		{
			count++;
			printf("%4d", k);
			if (count % 10 == 0)
				printf("\n");
		}
	}
	printf("素数个数为：%d", count);

	system("pause");
	return 0;
}