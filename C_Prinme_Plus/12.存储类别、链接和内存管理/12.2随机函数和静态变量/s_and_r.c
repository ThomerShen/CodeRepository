#include <stdio.h>
//ʹ���ڲ����ӵľ�̬�����ĺ�����α�������

static unsigned long int next = 1;//���ӣ��ڲ����ӵľ�̬����

int rand1(void)
{
	//����α�������ħ����ʽ
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
	next = seed;
}