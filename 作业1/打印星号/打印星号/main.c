#include <stdio.h>
#include <stdlib.h>
int main()
{
	int head,current;
	int row;
	for(row=1;row<=5;row++)	//ǰ�����ǺŴ�ӡ
	{
		for(head=5-row;head>0;head--)
			printf(" ");	//�ո��ӡ
		for(current=1;current<=row;current++)
			printf("* ");	//�ǺŴ�ӡ
		printf("\n");
	}
	for(row=4;row>0;row--)	//�������ǺŴ�ӡ
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