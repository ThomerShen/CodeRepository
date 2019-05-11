#include <stdio.h>
#include <stdlib.h>
//求 100 之内的素数

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
	int count = 0;
	int m;

	for (int k = 2; k <= 100; k++)
	{
		m = isPrime(k);
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