#include <stdio.h>
#include <stdlib.h>
// static ���徲̬����

int main()
{
	int i, num;
	num = 2;
	for (i = 0; i < 3; i++)
	{
		printf("The num = %d \n", num);
		num++;
		{
			static int num = 1;//ֻ�ڱ���ʱ����ʼ��һ��
			//int num = 1;//�Զ�����
			printf("The internal block num = %d\n", num++);
			printf("\n");
		}
	}
	getch();
}