#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strcopy复制
int mystrcopy(char a[],char b[])
{
	int i=0;
	while(b[i])
	{
		a[i]=b[i];
		i++;
	}
	a[i]=0;
	return 0;
}
//strcmp比较
int mystrcmp(char a[],char b[])
{
	int i=0;
	while(!(a[i]==0&&b[i]==0))
	{
		if(a[i]<b[i])
		{
			return -1;
		}
		else if(a[i]>b[i])
		{
			return 1;
		}
		i++;
	}
	return 0;
}
//strcat连接
int mystrcat(char a[],char b[])
{
	int i=0,j=0;
	while(a[i])
		i++;
	while(b[j])
	{
		a[i]=b[j];
		j++;
		i++;
	}
	a[i]=b[j];
	return 0;
}
//strlen长度
int mystrlen(char a[])
{
	int i=0;
	while(a[i])
	{
		i++;
	}
	return i;
}
int main()
{
	int k;
	char a='ni',b='hoa';
	k=mystrlen(&a);
	printf("%d\n",k);
	system("pause");
	return 0;
}