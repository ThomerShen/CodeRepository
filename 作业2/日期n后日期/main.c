#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int fun(int year)	//�����ж�
{
	if(0==year%4&&0!=year%100||0==year%400)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i,n;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,data,sum=0;
	char lese[30];
	printf("��������Ҫ��ѯ�����ڣ�\n");
yea:
	printf("\n�꣺");
	scanf("%d",&year);
	gets(lese);
	if(year>9999||year<=0)
	{
		printf("��������ȷ�����\n");
			goto yea;
	}
mon:
	printf("\n�£�");
	scanf("%d",&month);
	gets(lese);
	if(month>12||month<=0)
	{
		printf("��������ȷ���·�\n");
			goto mon;
	}
da:
	printf("\n�գ�");
	scanf("%d",&day);
	gets(lese);
	if(day>28||day<=0)
	{
		if(0==day)
		{
		printf("��������ȷ������\n");
			goto da;
		}
		if(2==month)
		{
			data=fun(year);
			if(data)//����
			{
				if(29!=data)
				{
					printf("��������ȷ������\n");
					goto da;
				}
			}
			else
			{
				printf("��������ȷ������\n");
				goto da;
			}
		}
		if(4==month||6==month||9==month||11==month)
		{
			if(day>30)
			{
				printf("��������ȷ������\n");
				goto da;
			}
		}
		else if(day>31)
			{
				printf("��������ȷ������\n");
				goto da;
			}
	}
	printf("�����뾭����������\nn=");
	scanf("%d",&n);
	gets(lese);
	data=fun(year);

	for(i=1;i<month;i++)
	{
		sum=sum+a[i];
	}
	sum=sum+day;
	if(data&&month>2)//���꣬sum��һ
		sum+=1;
	day=sum+n;
	while(day<0)
	{
		year-=1;
		day+=365;
		if(fun(year))//ǰһ��������
		{
			day+=1;
		}
	}
	for(i=1;day>a[i];)
	{
		day=day-a[i];
		if(2==i&&fun(year))
		{
			day-=1;
		}
		i++;
		if(13==i)
		{
			i=1;
			year+=1;
		}
	}
	printf("����n����������%d-%d-%d\n",year,i,day);
	system("pause");
	return 0;
}