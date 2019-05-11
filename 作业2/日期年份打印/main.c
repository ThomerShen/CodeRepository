#include <stdio.h>
#include <stdlib.h>

#define i 1
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int fun(int year)	//闰年判断
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

	data=fun(year[i]);//闰年判断

	for(j=1;j<month[i];j++)
	{
		sum[i]=sum[i]+a[j];
	}

	sum[i]=sum[i]+day[i];

	if(data&&month[i]>2)//闰年，sum加一
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
		if(fun(j))//闰年
			days+=366;
		else
			days+=365;
	}

	days=days+sum[1]-sum[0];//相隔天数
	if(data==10)//往年
	{
		days=(7-days%7)%7;
	}
	else
	{
		days=days%7;//星期几
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

	printf("请输入日期：\n");
yea:
	printf("\n年：");
	scanf("%d",&year[i]);
	gets(lese);
	if(year[i]>9999||year[i]<=0)
	{
		printf("请输入正确的年份\n");
		goto yea;
	}
	system("cls");//实现清屏操作
	//第一行冒号打印
	for(t=0;t<25;t++)
	{
		printf(".");
	}
	printf("%d年日历表",year[i]);
	for(t=0;t<26;t++)
	{
		printf(".");
	}
	printf("\n");
	//日历打印开始
	for(m=1;m<=6;m++)
	{
		month[i]=m;//前6个月份
		mont[i]=m+6;//后6个月份

		year[0]=2019;//设定2019年新年第一天
		month[0]=mont[0]==1;
		day[0]=day[i]=1;

		mon=a[month[i]];//前6个月份天数
		mon2=a[mont[i]];//后6个月份天数

		days=days_d(year,month,day);
		days2=days_d(year,mont,day);

		k=1;
		t=1;
		printf(":%d SUN MON TUE WED WHU FRI SAT	",month[i]);//前6个月
		printf(" %2d SUN MON TUE WED WHU FRI SAT:\n",month[i]+6);//后6个月
		//前6个月单个月份日历打印开始
		while(k<=mon)
		{
			printf(": ");//第一列冒号打印
			if(1==k)//初始值为1
			{
				for(data=1;data<=days;data++)//data为星期几，第一日期打印前，预留空格
					printf("    ");
			}
			for(j=(1==k?days:0);j<7;j++)//一个星期为7天，周期
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
		//前6个月单个月份日历打印结束
			//后6个月单个月份日历打印开始
			data=j;//保留上一个月份的星期几，作为参考
			printf("     ");//5NULL
			if(1==t)
			{
				for(data=1;data<=days2;data++)//data为星期几，第一日期打印前，预留空格
				{
					printf("    ");//4NULL
				}
			}
			for(j=(1==t?days2:0);j<7;j++)//一个星期为7天，周期
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
				else if(t>=10)//每月最后几天的打印
				{
					if(k==mon+1)//超出前六个月单天最多天数31天
					{
						for(data+=1;data<7;data++)
						{
							printf("    ");//4NULL
						}
					}
					printf(" %2d ",t++);

					if(t==mon2+1)//超出后六个月单天最多天数
					{
						for(j+=1;j<7;j++)
						{
							printf("    ");//4NULL
						}
					}
				}
			}
			//后6个月单个月份日历打印结束
			if(k==mon+1&&t==mon2+2)//月份天数超出范围，处理冒号对齐方式
			{
				for(data+=1;data<14;data++)
				{
					printf("    ");//4NULL
				}
			}
			printf(":\n");
		}
	}
	//日历打印结束
	//最后一行冒号打印
	for(t=0;t<63;t++)
	{
		printf(".");
	}
	printf(":\n");
	system("pause");
	return 0;
}