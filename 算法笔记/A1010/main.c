#include <stdio.h>
#include <stdlib.h>
//���籭���������,ÿ������ȷ��Ϊ65%��ÿ��Ͷע2Ԫ
//1.1 2.5 1.7
//1.2 3.0 1.6
//4.1 1.2 1.1

char s[3] = { 'W','T','L' };//Win Tie Lost

int main()
{
	double ans = 1.0, temp, a;
	int maxi;
	printf("�ֱ�������������������Ϊ��\n");
	for (int i = 0; i < 3; i++)
	{
		temp = 0.0;
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%lf", &a);
			if (a > temp)
			{
				temp = a;
				maxi = j;
			}
		}
		ans *= temp;
		printf("ÿһ����������Ϊ%c\n", s[maxi]);
	}
	printf("�������Ϊ%.2f\n", (ans*0.65 - 1) * 2);
	system("pause");
	return 0;
}