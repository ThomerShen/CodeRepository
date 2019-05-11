#include <stdio.h>
#include <stdlib.h>
//四位数字1，2,3,4组成无重复的三位数字

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
	printf("一共有%d个组合\n", count);
	system("pause");
	return 0;
}