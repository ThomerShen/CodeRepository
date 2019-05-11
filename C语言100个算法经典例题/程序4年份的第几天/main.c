#include <stdio.h>
#include <stdlib.h>
//输入年份日期，判断这一天是这一年的第几天
int main()
{
	int months[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year,mon, date,days=0;

	scanf_s("%d-%d-%d",&year, &mon, &date);
	for (int i = 0; i < mon; i++)
	{
		days += months[i];
	}
	days += date;
	if (mon > 2)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			days += 1;
		}
	}
	printf("%d年的第 %d 天\n",year, days);

	system("pause");
	return 0;
}