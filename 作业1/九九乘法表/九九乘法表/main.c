#include <stdio.h>
#include <stdlib.h>
void mul(int n)
{
	int i,j;
	for(i=1;i<=n;i++)	//���� ��ѭ��
	{
		for(j=1;j<=i;j++)	//���� ��ѭ��
			printf("%2d*%2d=%2d ",i,j,i*j);
		printf("\n");
	}
}

int main()
{
	int n;
	printf("������������");
	scanf("%d",&n);
	mul(n);
	system("pause");
	return 0;
}