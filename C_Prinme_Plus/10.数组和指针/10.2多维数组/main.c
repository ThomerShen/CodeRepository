#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main()
{
	const float rain[YEARS][MONTHS] =//��ʼ����ά����
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.1},
		{4.2,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.2},
		{4.1,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.3},
		{4.0,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.4},
		{3.9,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.5},
	};
	int year, month;
	float subtot, total;

	printf("%2s%15s\n", "���", "��������inches��");
	for (year = 0, total = 0; year < YEARS; year++)//����ÿһ�������
	{
		for (month = 0, subtot = 0; month < MONTHS; month++)//����ÿ�µ�����
		{
			subtot += rain[year][month];
		}
		printf("%5d%15.1f\n", 2010 + year, subtot);
		total += subtot;//������ܽ�����
	}
	printf("�����ƽ����Ƚ�����Ϊ��%.1f inches.\n", total / YEARS);
	printf("�����ƽ���¶Ƚ�����Ϊ��\n");
	printf(" һ�� ���� ���� ���� ���� ���� ���� ���� ���� ʮ�� ʮһ�� ʮ����\n");

	for (month = 0; month < MONTHS; month++)//����ÿ�µ�����
	{
		for (year = 0, subtot = 0; year < YEARS; year++)//����ÿһ�������
		{
			subtot += rain[year][month];
		}
		printf("%5.lf", subtot / YEARS);
	}
	printf("\n");
	system("pause");
	return 0;
}