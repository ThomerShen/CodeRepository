#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char *str,char *after)
{
	int i,j=0;
	int length=strlen(str);
	char ins[5]="%020";
	for(i=0;i<length;i++)
	{
		if(str[i]==' ')
		{
			strcat(after,ins);
			j=strlen(after);
		}
		else
		{
			after[j++]=str[i];
			after[j]='\0';
		}
	}
}

//void main()
//{
//	char *str=NULL;
//	char *after=NULL;
//	str=(char*)malloc(sizeof(char)*100);
//	after=(char*)malloc(sizeof(char)*300);
//	after[0]='\0';
//	printf("输入字符：\n");
//	gets(str);
//	fun(str,after);
//	printf("输出结果：%s\n",after);
//	free(str);
//	free(after);
//	system("pause");
//}

int main()
{
	char str[100],after[300];
	printf("输入字符串：\n");
	gets(str);
	fun(str,after);
	printf("输出结果是：%s\n",after);
	system("pause");
	return 0;
}