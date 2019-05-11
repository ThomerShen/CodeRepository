#include <stdio.h>

int fact(int j);

int main()
{
	int i;

	for (i = 1; i <= 5; i++)
		printf("%d!=%d\n", i, fact(i));
	getch();
}

int fact(int j)
{
	int sum;
	if (j == 0)
		sum = 1;
	else
		sum = j * fact(j - 1);
	return sum;
}