#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i,j,k,a[3]={0};
	char c,st[5],str[3][5]={"alp","num","oth"};
	while((c=getchar())!='\n')	//����ͳ��
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')//��ĸ
		{
			a[0]++;
		}
		else if(c>='0'&&c<='9')//����
		{
			a[1]++;
		}
		else//�����ַ�
		{
			a[2]++;
		}
	}
		for(i=0;i<2;i++)//��״����
		{
			for(j=i+1;j<3;j++)
			{
				if(a[i]<a[j])
				{
					k=a[i];
					a[i]=a[j];
					a[j]=k;
					strcpy(st,str[i]);
					strcpy(str[i],str[j]);
					strcpy(str[j],st);
				}
			}
		}
		if(a[0]==a[1])
		{
			if(a[0]==a[2])//����ͳ���������
			{
				printf(" %d		%d		%d\n",a[0],a[1],a[2]);
			}
			else//ǰ�������
			{
				printf(" %d		%d\n",a[0],a[1]);
			}
		}
		else
		{
			printf("  %d\n",a[0]);//���߲���
		}
		for(i=0;i<a[0];i++)//��ӡ�Ǻ����
		{
			printf("*****	");
			if(a[0]==a[1]);
			else if(a[0]-i-1==a[1])
			{
				if(a[1]==a[2])
				{
					printf(" %d	 %d",a[1],a[2]);
				}
				else
				{
					printf(" %d",a[1]);
				}
			}
			if(a[0]-i<=a[1])
			{
				printf("*****	 ");
			}
			if(a[1]==a[2]);
			else if(a[0]-i-1==a[2])
			{
				printf("  %d",a[2]);
			}
			if(a[0]-i<=a[2])
			{
				printf("*****");
			}
			printf("\n");
	}
	printf("%s	%s	 %s\n",str[0],str[1],str[2]);
	system("pause");
	return 0;
}