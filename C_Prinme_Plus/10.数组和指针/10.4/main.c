#include <stdio.h>
//������Ԫ��֮�� 199
//�ĳ����ӡԭʼ����Ĵ�С�͸�����ĺ����βεĴ�С
#define SIZE 10
int sum(int ar[], int n);
int main()
{
	int marbles[SIZE] = { 20,10,5,33,24,55,12,12,13,15 };//marbles�Ĵ�С��40�ֽڣ�����10��Int���͵�ֵ��ÿ��ֵռ4���ֽ�
	long answer;

	answer = sum(marbles, SIZE);

	printf("The total number of marbles id %ld.\n", answer);
	printf("The size of marbles is %zd bytes.\n", sizeof marbles);//ת��˵��%zd��ӡsizeof����ֵ
	system("pause");
	return 0;
}

int sum(int ar[], int n)//������Ĵ�С��ar�β�
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += ar[i];
	printf("The size of ar is %zd bytes.\n", sizeof ar);//ar�������鱾������һ��ָ��marbles������Ԫ�ص�ָ�룬ϵͳ����8�ֽ����洢��ַ����arΪ8���ֽ�
	return total;
}