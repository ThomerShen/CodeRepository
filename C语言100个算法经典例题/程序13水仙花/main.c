#include <stdio.h>
//ˮ�ɻ�������һ����λ�������λ���������͵��ڸ�������153=1^3+5^3+3^3=1+125+27

int main()
{
	int n;
	int i, j, k;

	for(int n=100;n<1000;n++)
	{
		i = n / 100;
		j = n / 10 % 10;
		k = n % 10;
		if (i * 100 + j * 10 + k == i * i*i + j * j*j + k * k*k)
			printf("%5d", n);
	}

	system("pause");
	return 0;
}