#include <stdio.h>
/*
��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ 20 ��֮�͡�
1.�����������ץס�������ĸ�ı仯���ɡ�

���е�ǰ 20 ��֮��:32.660261
*/

void func(double *x, double *y)
{
	double sum = *x + *y;
	*x = *y;
	*y = sum;
}

int main1()
{
	double x1 = 2, y1 = 1, x2 = 3, y2 = 2;
	double temp1,temp2;
	double sum = x1 / y1 + x2 / y2;

	for (int i = 2; i < 20; i++)
	{	
		func(&x1, &x2);
		func(&y1, &y2);
		temp1 = x2 / y2;
		//temp2 = x2 / y2;
		sum += temp1;
	}

	printf("���е�ǰ 20 ��֮��:%9.6f\n", sum);
	system("pause");
	return 0;
}