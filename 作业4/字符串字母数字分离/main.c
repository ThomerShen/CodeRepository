#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 100

void fun(char *str,char *after)
{
	int i,numi=0,wordi=0;
	char word[MAXSIZE];
	int length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]<=57&&str[i]>=48)//����
		{
			after[numi++]=str[i];
		}
		else
		{
			word[wordi++]=str[i];
		}
	}
	after[numi]='\0';//ĩβ��ӡ�\0��������
	word[wordi]='\0';
	strcat(after,word);//����after
}

int main()
{
	char str[MAXSIZE],after[MAXSIZE];
	printf("�����ַ�����\n");
	gets(str);
	fun(str,after);
	printf("�������ǣ�%s\n",after);
	system("pause");
	return 0;
}