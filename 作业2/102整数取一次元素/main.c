#include <stdio.h>
#include <stdlib.h>
//看不大懂
int main(void)
{
	int i,j=0,t=1,k=0;
	int a[102],b[2][101];
	for(i=0;i<100;i++)
	{
		if(i<50)
			a[i]=i+1;
		else
			a[i]=i-49;
	}
	a[100]=200;
	a[101]=203;
	for(i=0;i<102;i++)
		k=k^a[i];//异或
	while(!(k&t))
		t=t<<1;//乘2操作
	for(k=0,i=0;i<102;i++)
	{
		if(t&a[i])
			b[0][k++]=a[i];
		else
			b[1][k++]=a[i];
	}
	for(j=0;j<2;j++)
	{
		for(t=0,i=0;i<k;i++)
			t=t^b[j][i];
		printf("%d\n",t);
	}
	system("pause");
	return 0;
}