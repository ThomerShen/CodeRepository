#include <stdio.h>
#include <stdlib.h>

#define i 1
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

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

int days_d(int year[],int month[],int day[])
{
	int data,j,days=0;
	int sum[2]={0};

	data=fun(year[i]);//�����ж�

	for(j=1;j<month[i];j++)
	{
		sum[i]=sum[i]+a[j];
	}

	sum[i]=sum[i]+day[i];

	if(data&&month[i]>2)//���꣬sum��һ
	{
		sum[i]+=1;
	}
	sum[0]=-1;
	if(year[0]>year[1])
	{
		swap(&year[0],&year[1]);
		swap(&month[0],&month[1]);
		swap(&day[0],&day[1]);
		swap(&sum[0],&sum[1]);
		data=10;
	}

	for(j=year[0];j<year[1];j++)
	{
		if(fun(j))//����
			days+=366;
		else
			days+=365;
	}

	days=days+sum[1]-sum[0];//�������
	if(data==10)//����
	{
		days=(7-days%7)%7;
	}
	else
	{
		days=days%7;//���ڼ�
	}
	return days;
}

int main()
{
	int j,t,m,k;
	//int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year[2],month[2],mont[2],day[2],sum[2]={0};
	int mon,mon2,data,days=0,days2=0;
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
	system("cls");//ʵ����������
	//��һ��ð�Ŵ�ӡ
	for(t=0;t<25;t++)
	{
		printf(".");
	}
	printf("%d��������",year[i]);
	for(t=0;t<26;t++)
	{
		printf(".");
	}
	printf("\n");
	//������ӡ��ʼ
	for(m=1;m<=6;m++)
	{
		month[i]=m;//ǰ6���·�
		mont[i]=m+6;//��6���·�

		year[0]=2019;//�趨2019�������һ��
		month[0]=mont[0]==1;
		day[0]=day[i]=1;

		mon=a[month[i]];//ǰ6���·�����
		mon2=a[mont[i]];//��6���·�����

		days=days_d(year,month,day);
		days2=days_d(year,mont,day);

		k=1;
		t=1;
		printf(":%d SUN MON TUE WED WHU FRI SAT	",month[i]);//ǰ6����
		printf(" %2d SUN MON TUE WED WHU FRI SAT:\n",month[i]+6);//��6����
		//ǰ6���µ����·�������ӡ��ʼ
		while(k<=mon)
		{
			printf(": ");//��һ��ð�Ŵ�ӡ
			if(1==k)//��ʼֵΪ1
			{
				for(data=1;data<=days;data++)//dataΪ���ڼ�����һ���ڴ�ӡǰ��Ԥ���ո�
					printf("    ");
			}
			for(j=(1==k?days:0);j<7;j++)//һ������Ϊ7�죬����
			{
				if(k<10)
					printf(" %2d ",k++);
				else
					printf(" %2d ",k++);
				if(k>mon)
					break;
				//printf("\n");
			}
			//printf("\n");
		//ǰ6���µ����·�������ӡ����
			//��6���µ����·�������ӡ��ʼ
			data=j;//������һ���·ݵ����ڼ�����Ϊ�ο�
			printf("     ");//5NULL
			if(1==t)
			{
				for(data=1;data<=days2;data++)//dataΪ���ڼ�����һ���ڴ�ӡǰ��Ԥ���ո�
				{
					printf("    ");//4NULL
				}
			}
			for(j=(1==t?days2:0);j<7;j++)//һ������Ϊ7�죬����
			{
				if(t>mon2)
				{
					t++;
					break;
				}
				if(t<10)
				{
					printf(" %2d ",t++);
				}
				else if(t>=10)//ÿ�������Ĵ�ӡ
				{
					if(k==mon+1)//����ǰ�����µ����������31��
					{
						for(data+=1;data<7;data++)
						{
							printf("    ");//4NULL
						}
					}
					printf(" %2d ",t++);

					if(t==mon2+1)//�����������µ����������
					{
						for(j+=1;j<7;j++)
						{
							printf("    ");//4NULL
						}
					}
				}
			}
			//��6���µ����·�������ӡ����
			if(k==mon+1&&t==mon2+2)//�·�����������Χ������ð�Ŷ��뷽ʽ
			{
				for(data+=1;data<14;data++)
				{
					printf("    ");//4NULL
				}
			}
			printf(":\n");
		}
	}
	//������ӡ����
	//���һ��ð�Ŵ�ӡ
	for(t=0;t<63;t++)
	{
		printf(".");
	}
	printf(":\n");
	system("pause");
	return 0;
}