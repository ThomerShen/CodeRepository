#include <stdio.h>
#include <stdlib.h>

int fun(int year)	//�����ж�
{
	if(0==year%4&&0!=year%100||0==year%400)
		return 1;
	else
		return 0;
}

void swap(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}

int main()
{
	int i=1,j,k=1;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mon,year[2],month[2],day[2],sum[2]={0},data,days=0;
	char lese[30];

	printf("���������ڣ�\n");
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

	day[i]=1;
	data=fun(year[i]);

	for(j=1;j<month[i];j++)
		sum[i]=sum[i]+a[j];
	sum[i]=sum[i]+day[i];
	if(data&&month[i]>2)//���꣬sum��һ
		sum[i]+=1;

	year[0]=2019;//�趨�����һ��
	month[0]=1;
	day[0]=1;
	sum[0]=-1;
	mon=a[month[i]];//�·�����

	if(year[0]>year[1])
	{
		swap(&year[0],&year[1]);
		swap(&month[0],&month[1]);
		swap(&day[0],&day[1]);
		swap(&sum[0],&sum[1]);
		data=10;
	}

	for(i=year[0];i<year[1];i++)
	{
		if(fun(i))
			days+=366;
		else
			days+=365;
	}

	days=days+sum[1]-sum[0];//�������
	if(data==10)
	{
		//days=days%7;
		days=(7-days%7)%7;
	}
	else
	{
		days=days%7;//���ڼ�
	}

	printf("SUN	MON	TUE	WED	WHU	FRI	SAT\n");
	while(k<=mon)
	{
		if(1==k)//��ʼֵΪ1
		{
			for(data=1;data<=days;data++)//dataΪ���ڼ�
				printf("	");
		}
		for(j=(1==k?days:0);j<7;j++)//һ������Ϊ7��
		{
			if(k<10)
				printf("%2d	",k++);
			else
				printf("%2d	",k++);
			if(k>mon)
				break;
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}