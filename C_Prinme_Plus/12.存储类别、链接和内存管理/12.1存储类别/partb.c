#include <stdio.h>

extern int count;//����ʽ�������ⲿ����

static int total = 0;//��̬���壬�ڲ����ӣ�ͳ�����д���accumulate()����������
void accumulate(int k);//����ԭ��

void accumulate(int k)//k���п�������������
{
	static int subtotal = 0;//��̬�������ӣ�ͳ��ÿ��whileѭ������accumulate()����������
	if (k <= 0)
	{
		printf("loop cycle:%d\n", count);
		printf("subtotal: %d; total: %d\n", subtotal, total);
		subtotal = 0;
	}
	else {
		subtotal += k;
		total += k;
	}
}