#include <stdio.h>
#include <stdlib.h>
//auto �������
main()
{
	int i, num;
	num = 2;
	for (i = 0; i < 3; i++)
	{
		printf("The num = %d \n", num);
		num++;
		{
			auto int num = 1;//�Զ�����
			//int num = 1;//�����Զ�����
			printf("The internal block num = %d \n", num++);
			//num++;
			printf("\n");
		}
	}
	getchar();
}