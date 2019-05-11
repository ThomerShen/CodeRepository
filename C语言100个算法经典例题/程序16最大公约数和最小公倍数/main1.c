#include <stdio.h>

/*
greatest common divisor����дΪgcd
ŷ������㷨�ֳ�շת������� ���ڼ�����������a, b�����Լ���������ԭ������������Ķ���
���� gcd(a, b) = gcd(b, a mod b)

��С��������Least Common Multiple����дL.C.M.��
��С������=�����ĳ˻�/���Լ��
*/

//���Լ�� �ݹ��㷨 ʱ�临�Ӷ�O(logn)
int gcd_r(int x, int y)
{
	if (0 == y)
		return x;
	else
		return gcd(y, x%y);
}
//���Լ�� �ǵݹ��㷨
int gcd(int x, int y)
{
	int temp;
	while (y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int m, n;
	int k, t;
	int temp;

	printf("����������������\n");
	scanf_s("%d%d", &m, &n);
	if (m < n)
		swap(&m, &n);
	//k = gcd(m, n);
	k = gcd_r(m, n);
	t = (m*n) / k;
	printf("���Լ����%d\n", k);
	printf("��С��������%d\n", t);

	system("pause");
	return 0;
}