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
			if(i!=0&&c[i-1]!=' '&&c[i]==' ')//单词存在
			{
				c[i]='\n';
			}
		}
		for(i=0;i<strlen(c);i++)//输出单词
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