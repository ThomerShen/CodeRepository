#include <stdio.h>
//const���Ա��������Ԫ�ز����޸ģ�
//ָ��const��ָ��ͨ�����ں����β��У������ú�������ʹ��ָ���޸�����
//��const���ݻ��߷�const���ݵĵ�ַ��ʼ��Ϊָ��const��ָ���Ϊ�丳ֵ�ǺϷ���
//Ȼ��ֻ�ܰѷ�const���ݵõ�ַ��ֵΪ��ͨ��ָ��
//const������������ʼ��һ������ָ��𴦵�ָ�룬����������ָ���޸�����ָ���ֵ������ֻ��ָ���ʼ��ʱ���õ�ֵ
//�ڴ���ָ��ʱ������ʹ��const���Σ���ָ��Ȳ����޸�����ָ������ֵ��Ҳ�����޸�ָ���ַ�ϵ�ֵ

#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);

int main(void)
{
	double dip[SIZE] = { 20.0,17.66,8.2,15.3,22.22 };

	printf("The original dip array :\n");
	show_array(dip,SIZE);
	mult_array(dip, SIZE, 2.5);
	printf("The dip array after calling mult_array():\n");
	show_array(dip, SIZE);
	system("pause");
	return 0;
}
//��ʾ���������
void show_array(const double ar[], int n)
{
	int i;
	for (i = 0; i < SIZE; i++)
		printf("%8.3f", ar[i]);
	putchar('\n');
}
//�������е�ÿһ��Ԫ�ض�������ͬ����ֵ������const�������޸������е�Ԫ��
void mult_array(double ar[], int n, double mult)
{
	int i;
	for (i = 0; i < SIZE; i++)
		ar[i] *= mult;
}