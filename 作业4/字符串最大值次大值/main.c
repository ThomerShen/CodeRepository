#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 100

void big(char *arr[],int size,char *big1,char *big2)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(strcmp(big1,arr[i])<=0)
		{
			strcpy(big2,big1);
			strcpy(big1,arr[i]);
		}
		else
		{
			if(strcmp(big2,arr[i])<=0)
				strcpy(big2,arr[i]);
		}
	}
}

int main()
{
	char *arr[MAXSIZE];
	char *big1=NULL,*big2=NULL;
	int i,size;
	big1=(char *)malloc(sizeof(char)*MAXSIZE);
	big2=(char *)malloc(sizeof(char)*MAXSIZE);
	big1[0]='\0';
	big2[0]='\0';

	printf("size=");
	scanf("%d",&size);
	printf("�����ַ�����\n");
	for(i=0;i<size;i++)
	{
		arr[i]=(char *)malloc(sizeof(char)*MAXSIZE);
		fflush(stdin);//�� ��: �����д����������Ҫ��������������������ݽ�������д��ʱ
		gets(arr[i]);
	}

	big(arr,size,big1,big2);

	printf("���ֵ�ǣ�%s\n",big1);
	printf("�δ�ֵ�ǣ�%s\n",big2);

	free(big2);
	free(big1);
	system("pause");
	return 0;
}