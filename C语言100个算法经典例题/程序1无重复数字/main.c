#include <stdio.h>
#include <stdlib.h>
//��λ����1��2,3,4������ظ�����λ����

int main()
{
	int i, j, k;
	int count = 0;
	for(i=1;i<5;i++)
		for(j=1;j<5;j++)
			for (k = 1; k < 5; k++)
			{
				if (i != j && i != k && j != k)
				{
					printf("%d%d%d\n", i, j, k);
					count++;
				}
			}
	//getch();
	printf("һ����%d�����\n", count);
	system("pause");
	return 0;
}