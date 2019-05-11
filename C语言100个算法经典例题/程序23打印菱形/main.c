#include <stdio.h>
/*
程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重
for 循环，第一层控制行，第二层控制列。
*/
int main()
{
	int i,j;

	for (i = 0; i < 4; i++)
	{
		for(j=0;j<4-i;j++)
			printf(" ");
		for(j=0;j<(2*i+1);j++)
			printf("*");
		printf("\n");		
	}
	for (i = 2; i >=0; i--)
	{
		for (j = 0; j < 4 - i; j++)
			printf(" ");
		for (j = 0; j < (2 * i + 1); j++)
			printf("*");
		printf("\n");
	}
	
	getchar();
	return 0;
}