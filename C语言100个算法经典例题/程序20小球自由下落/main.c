#include <stdio.h>
/*
һ��� 100 �׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£�������
�� 10 �����ʱ�������������ף��� 10 �η�����ߣ�
*/

int main()
{
	int n;
	float sn = 100.00,hn=sn/2;

	printf("����n�η�����n= ");
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		sn = sn + 2 * hn;
		hn = hn / 2;
	}
	printf("�������ܸ߶�Ϊ��%f\n", sn);
	printf("��%d�η����ĸ߶�Ϊ��%f\n", n, hn);
	system("pause");
	return 0;
}