#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//input:I    am  a  student
int main()
{
	int i,j,a,b;
	int x[10],y[10];
	char t,c[20];
laber:
	while(gets(c)!=NULL)
	{
		if(strlen(c)==0)
			goto laber;
		for(i=0;i<strlen(c)/2;i++)//���巭ת
		{
			t=c[i];
			c[i]=c[strlen(c)-i-1];
			c[strlen(c)-i-1]=t;
		}
		for(i=0,a=0,b=0;i<strlen(c);i++)
		{
			if(i==0)//��һ���ַ�
			{
				if(c[i]!=' ')//����
				{
					x[a++]=i;
				}
				continue;
			}
			if(c[i-1]==' '&&c[i]!=' ')//����
			{
				x[a++]=i;//�洢�±�
			}
			if(c[i-1]!=' '&&c[i]==' ')//�ո�
			{
				y[b++]=i-1;
			}
		}
		if(c[i-1]!=' ')//���һ���ַ�
		{
			y[b++]=i-1;
		}
		for(i=0;i<a;i++)//��ת
		{
			for(j=x[i];j<(y[i]-x[i])/2;j++)
			{
				t=c[j];
				c[j]=c[y[i]-j];
				c[y[i]-j]=t;
			}
		}
		puts(c);
	}
	system("pause");
	return 0;
}