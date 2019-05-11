#include <stdio.h>
#include <stdlib.h>
void mul(int n)
{
	int i,j;
	for(i=1;i<=n;i++)	//行数 外循环
	{
		for(j=1;j<=i;j++)	//列数 内循环
			printf("%2d*%2d=%2d ",i,j,i*j);
		printf("\n");
	}
}

int main()
{
	int n;
	printf("请输入行数：");
	scanf("%d",&n);
	mul(n);
	system("pause");
	return 0;
}