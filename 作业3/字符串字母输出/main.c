#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//A BB  CCC   DDDD
//   hello  world  how  are  you  
int main()
{
	int n,i;
	char c[100];
	while(gets(c)!=NULL)
	{
		n=0;
		for(i=0;i<strlen(c);i++)
		{
			if(i!=0&&c[i-1]!=' '&&c[i]==' ')//���ʴ���
			{
				c[i]='\n';
			}
		}
		for(i=0;i<strlen(c);i++)//�������
		{
			if(c[i]!=' ')
			{
				printf("%c",c[i]);
			}
		}
		if(i==0||c[i-1]!=' ')
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}