#include <stdio.h>
#include <assert.h>
//����Сֵ
double getMin(double *dbData, int isize)
{
	double dbMin;
	int i;
	assert((dbData != NULL) && (isize > 0));//����������������������ش�������ֹ����ִ��,assert�����������Զ��׼��Ĵ����
	dbMin = dbData[0];
	for (i = 0; i < isize; i++)
	{
		if (dbMin > dbData[i])
			dbMin = dbData[i];
	}
	return dbMin;
}
//�����ֵ
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
//��ƽ��ֵ
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
//δ֪�㷨
double unKnown(double *dbData, int isize)
{
	return 0;
}

//�ṹ�嶨��
typedef double(*PF)(double *dbData, int isize);//���庯��ָ�����ͣ���������һ��ָ���������ָ�����һ������
//int (*)(int) ������������Ϊ����int����������Ϊint ����ָ������
//��C�����У�ͨ���ú���ָ��������DIP������������ϵ�����ȿ���ͨ������ָ����÷��񣨱����ô��룩������Ҳ����ͨ������ָ��ص��û�����

//�����ַ��õ������������غ���ָ��
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