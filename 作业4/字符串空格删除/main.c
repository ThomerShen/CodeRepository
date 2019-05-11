#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char *str,char *after)
{
	int j=0,i;
	int length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]==' '&&str[i-1]==' ')
			continue;
		else
		{
			after[j++]=str[i];
		}
	}
	after[j]='\0';
}

int main()
{
	char *str=NULL,*after=NULL;
	str=(char *)malloc(sizeof(char)*100);
	after=(char *)malloc(sizeof(char)*300);
	after[0]='\0';
	printf("输入字符串：\n");
	gets(str);
	fun(str,after);
	printf("输出结果是：%s\n",after);
	free(str);
	free(after);
	system("pause");
	return 0;
}