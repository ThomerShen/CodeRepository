#include <stdio.h>
#include <stdlib.h>
//���Ǻ�*�����ĸCͼ��

int main()
{
	for (int i = 0; i < 2; i++)
		printf(" ");
	for(int i=2;i<7;i++)
		printf("*");
	printf("\n");
	printf(" *\n");
	printf("*\n");
	printf("*\n");
	printf(" *\n");
	for (int i = 0; i < 2; i++)
		printf(" ");
	for (int i = 2; i < 7; i++)
		printf("*");
	printf("\n");
	getchar();
}