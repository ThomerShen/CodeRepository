#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,k=0,a[101];
	for(i=0;i<100;i++)//���鸳ֵ�������ε�ֵ
	{
		if(i<50)
			a[i]=i+1;
		else
			a[i]=i-49;
	}
	a[100]=433;//����һ�ε�ֵ
	for(i=0;i<101;i++)
		k=k^a[i];//���
	printf("%d\n",k);
	system("pause");
	return 0;
}