#include <stdio.h>
#include <stdlib.h>
// external µÄÓÃ·¨
int a, b, c;

void add()
{
	int a;
	a = 3;
	c = a + b;
}

void main()
{
	a = 4, b = 4;
	add();
	printf("The value of c = %d\n", c); 
	getch();
}