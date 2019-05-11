#include <stdio.h>
#include <stdlib.h>

int fun(int year)	//闰年判断
{
	if(0==year%4&&0!=year%100||0==year%400)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,data,sum=0;
	char lese[30];
	printf("请输入你要查询的日期：\n");
yea:
	printf("\n年：");
	scanf("%d",&year);
	gets(lese);
	if(year>9999||year<=0)
	{
		printf("请输入正确的年份\n");
			goto yea;
	}
mon:
	printf("\n月：");
	scanf("%d",&month);
	gets(lese);
	if(month>12||month<=0)
	{
		printf("请输入正确的月份\n");
			goto mon;
	}
da:
	printf("\n日：");
	scanf("%d",&day);
	gets(lese);
	if(day>28||day<=0)
	{
		if(0==day)
		{
		printf("请输入正确的日期\n");
			goto da;
		}
		if(2==month)
		{
			data=fun(year);
			if(data)//闰年
			{
				if(29!=data)
				{
					printf("请输入正确的日期\n");
					goto da;
				}
			}
			else
			{
				printf("请输入正确的日期\n");
				goto da;
			}
		}
		if(4==month||6==month||9==month||11==month)
		{
			if(day>30)
			{
				printf("请输入正确的日期\n");
				goto da;
			}
		}
		else if(day>31)
			{
				printf("请输入正确的日期\n");
				goto da;
			}
	}
	data=fun(year);

	for(i=1;i<month;i++)
	{
		sum=sum+a[i];
	}
	sum=sum+day;
	if(data&&month>2)//闰年，sum加一
		sum+=1;
	printf("是该年的第%d天\n",sum);
	system("pause");
	return 0;
}