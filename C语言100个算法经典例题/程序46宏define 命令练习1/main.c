#include <stdio.h>
#include <stdlib.h>
//ºêdefine ÃüÁîÁ·Ï°1

#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
void main()
{
	int num;
	int again = 1;
	printf("Program will stop if input value less than 50.\n");
	while (again)
	{
		printf("Please input number:");
		scanf_s("%d", &num);
		printf("The square for this number is %d \n", SQ(num));
		if (num >= 50)
			again = TRUE;
		else
			again = FALSE;
	}
	getchar();

	system("pause");
}