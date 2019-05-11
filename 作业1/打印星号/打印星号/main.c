#include <stdio.h>
#include <stdlib.h>
int main()
{
	int head,current;
	int row;
	for(row=1;row<=5;row++)	//前五行星号打印
	{
		for(head=5-row;head>0;head--)
			printf(" ");	//空格打印
		for(current=1;current<=row;current++)
			printf("* ");	//星号打印
		printf("\n");
	}
	for(row=4;row>0;row--)	//后四行星号打印
	{
		for(head=5-row;head>0;head--)
			printf(" ");
		for(current=1;current<=row;current++)
			printf("* ");
		printf("\n");
	}
	system("pause");
	return 0;
}