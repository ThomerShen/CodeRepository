#include <stdio.h>
#include <stdlib.h>
/*
��Ŀ����һ�� 3*3 ����Խ���Ԫ��֮��
1.�������������˫�� for ѭ�����������ά���飬�ٽ� a �ۼӺ����
*/

int main()
{
	float a[3][3] = { 0 };
	float sum = 0;

	printf("�������飺\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf_s("%f",&a[i][j]);
	for (int i = 0; i < 3; i++)
		sum += a[i][i];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %.2f", a[i][j]);
		}
		printf("\n");
	}

			

	printf("���Խ���Ԫ��֮��Ϊ��%4.2f\n", sum);

	system("pause");
	return 0;
}