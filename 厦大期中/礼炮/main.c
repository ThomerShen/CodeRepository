#include <stdio.h>
#include <stdlib.h>
//A��B��C���Ҵ�Ҫͬʱ��21�����ڣ�Aÿ5���1�죬Bÿ6�룬Cÿ7�룬ͳ�ƹ�������������
//����С��Լ������
int main()
{
	int t, count = 0;
	for (t = 0; t <= 20 * 7; t++)//ͳ�����ķ���ʱ��
	{
		if (t % 5 == 0 && t <= 20 * 5)
		{
			count++;
			continue;
		}
		if (t % 6 == 0 && t <= 20 * 6)
		{
			count++;
			continue;
		}
		if (t % 7 == 0)
		{
			count++;
		}
	}
	printf("��������������Ϊ��%d\n", count);
	system("pause");
	return 0;
}