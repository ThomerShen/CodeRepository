#include <stdio.h>
#include <assert.h>
//求最小值
double getMin(double *dbData, int isize)
{
	double dbMin;
	int i;
	assert((dbData != NULL) && (isize > 0));//其作用是如果它的条件返回错误，则终止程序执行,assert是用来避免显而易见的错误的
	dbMin = dbData[0];
	for (i = 0; i < isize; i++)
	{
		if (dbMin > dbData[i])
			dbMin = dbData[i];
	}
	return dbMin;
}
//求最大值
double getMax(double *dbData, int isize)
{
	double dbMax;
	int i;
	assert((dbData != NULL) && (isize > 0));
	dbMax = dbData[0];
	for (i = 0; i < isize; i++)
	{
		if (dbMax < dbData[i])
			dbMax = dbData[i];
	}
	return dbMax;
}
//求平均值
double getAverage(double *dbData, int isize)
{
	double dbSum=0;
	int i;
	assert((dbData != NULL) && (isize > 0));
	//dbSum = dbData[0];
	for (i = 0; i < isize; i++)
	{
		dbSum += dbData[i];
	}
	return dbSum / isize;;
}
//未知算法
double unKnown(double *dbData, int isize)
{
	return 0;
}

//结构体定义
typedef double(*PF)(double *dbData, int isize);//定义函数指针类型，本质上是一个指针变量，起指向的是一个函数
//int (*)(int) 类型名被解析为返回int函数（参数为int ）的指针类型
//在C语言中，通常用函数指针来是想DIP（倒置依赖关系）。既可以通过函数指针调用服务（被调用代码），服务也可以通过函数指针回调用户函数

//根据字符得到操作符，返回函数指针
PF getOperation(char c)
{
	switch (c)
	{
	case'd':
		return getMax;
	case'x':
		return getMin;
	case'p':
		return getAverage;
	default:
		return unKnown;
	}
}
int main()
{
	double dbData[] = {5.0,4.0,9.0,10.0};
	int isize = sizeof(dbData) / sizeof(dbData[0]);
	char c;

	printf("please input the Operation:\n");
	c = getchar();
	PF pf = getOperation(c);
	printf("result is %lf\n", pf(dbData, isize));
	system("pause");
	return 0;

}