#include <stdio.h>
#include <stdlib.h>

int fun(int year)	//�����ж�
{
	if(0==year%4&&0!=year%100||0==year%400)
		return 1;
	else
		return 0;
}

int main()
{
	int i,j;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year[2],month[2],day[2],sum[2]={0},data,days=0;
	char lese[30];
	for(i=0;i<2;i++)
	{
		printf("�������%d������\n",i+1);
yea:
		printf("\n�꣺");
		scanf("%d",&year[i]);
		gets(lese);
		if(year[i]>9999||year[i]<=0)
		{
			printf("��������ȷ�����\n");
			goto yea;
		}
mon:
		printf("\n�£�");
		scanf("%d",&month[i]);
		gets(lese);
		if(month[i]>12||month[i]<=0)
		{
			printf("��������ȷ���·�\n");
			goto mon;
		}
da:
		printf("\n�գ�");
		scanf("%d",&day[i]);
		gets(lese);
		if(day[i]>28||day[i]<=0)
		{
			if(0==day[i])
			{
				printf("��������ȷ������\n");
				goto da;
			}
			if(2==month[i])
			{
				data=fun(year[i]);
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
			if(4==month[i]||6==month[i]||9==month[i]||11==month[i])
			{
				if(day[i]>30)
				{
					printf("��������ȷ������\n");
					goto da;
				}
			}
			else if(day[i]>31)
			{
				printf("��������ȷ������\n");
				goto da;
			}
		}
	}

	for(i=0;i<2;i++)
	{
		data=fun(year[i]);
		for(j=1;j<month[i];j++)
			sum[i]=sum[i]+a[j];
		sum[i]=sum[i]+day[i];
		if(data&&month[i]>2)//���꣬sum��һ
			sum[i]+=1;
	}

	for(i=year[0];i<year[1];i++)
	{
		if(fun(i))
			days+=366;
		else
			days+=365;
	}

	days=days+sum[1]-sum[0];
	printf("���%d��\n",days);
	system("pause");
	return 0;
}