#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main()
{
	const float rain[YEARS][MONTHS] =//初始化二维数组
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.1},
		{4.2,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.2},
		{4.1,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.3},
		{4.0,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.4},
		{3.9,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.5},
	};
	int year, month;
	float subtot, total;

	printf("%2s%15s\n", "年份", "降雨量（inches）");
	for (year = 0, total = 0; year < YEARS; year++)//处理每一年的数据
	{
		for (month = 0, subtot = 0; month < MONTHS; month++)//处理每月的数据
		{
			subtot += rain[year][month];
		}
		printf("%5d%15.1f\n", 2010 + year, subtot);
		total += subtot;//五年的总降雨量
	}
	printf("五年的平均年度降雨量为：%.1f inches.\n", total / YEARS);
	printf("五年的平均月度降雨量为：\n");
	printf(" 一月 二月 三月 四月 五月 六月 七月 八月 九月 十月 十一月 十二月\n");

	for (month = 0; month < MONTHS; month++)//处理每月的数据
	{
		for (year = 0, subtot = 0; year < YEARS; year++)//处理每一年的数据
		{
			subtot += rain[year][month];
		}
		printf("%5.lf", subtot / YEARS);
	}
	printf("\n");
	system("pause");
	return 0;
}