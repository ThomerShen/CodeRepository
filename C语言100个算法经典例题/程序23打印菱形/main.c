#include <stdio.h>
/*
����������Ȱ�ͼ�ηֳ���������������ǰ����һ�����ɣ�������һ�����ɣ�����˫��
for ѭ������һ������У��ڶ�������С�
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