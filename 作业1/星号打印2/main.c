#include <stdio.h>
#include <stdlib.h>
int main()
{
	int row;
	int head,mid;
	printf("    *    \n");
	for(row=2;row<=5;row++)
	{
		for(head=5-row;head>0;head--)
			printf(" ");
		printf("*");
		for(mid=0;mid<2*row-3;mid++)
			printf(" ");
		printf("*\n");
	}
	for(row=4;row>1;row--)
	{
		for(head=5-row;head>0;head--)
			printf(" ");
		printf("*");
		for(mid=0;mid<2*row-3;mid++)
			printf(" ");
		printf("*\n");
	}
	printf("    *    \n");
	system("pause");
	return 0;
}
