#include <stdio.h>
#include <stdlib.h>
//ºêdefine ÃüÁîÁ·Ï°3

#define LAG >
#define SMA <
#define EQ ==

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