#include "test.h"

void main()
{
	int i = 10;
	int j = 20;
	if (i LAG j)
		printf("%d > %d \n", i, j);
	else if (i EQ j)
		printf("%d = %d \n", i, j);
	else if (i SMA j)
		printf("%d < %d \n", i, j);
	else
		printf("No such value.\n");
	getch();
}