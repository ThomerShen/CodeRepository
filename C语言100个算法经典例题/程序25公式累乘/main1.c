#include <stdio.h>
//1+2!+3!...+20!=2.561327e+18
//1+2!+3!...+20!=2561327455189073920.000000

int main1()
{
	float n, s = 0, t = 1;
	int k;

	printf("k= ");
	scanf_s("%d", &k);
	for (n = 1; n <= k; n++)
	{
		t *= n;
		s += t;
	}
	printf("1+2!+3!...+20!=%f\n", s);
	getch();
}