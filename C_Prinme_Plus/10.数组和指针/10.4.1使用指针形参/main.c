#include <stdio.h>
//������Ԫ��֮�� 199
#define SIZE 10
int sump(int *start, int *end);

int main(void)
{
	int marbles[SIZE] = { 20,10,5,33,24,55,12,12,13,15 };//marbles�Ĵ�С��40�ֽڣ�����10��Int���͵�ֵ��ÿ��ֵռ4���ֽ�
	long answer;

	answer = sump(marbles, marbles+SIZE);//marbles+SIZEָ������ĩβ����һ��λ��
	printf("The total number of marbles id %ld.\n", answer);
	system("pause");
	return 0;
}

int sump(int *start, int *end)
{
	int total = 0;
	while (start < end)//endָ���λ��ʵ�������������һ��Ԫ�صĺ���
	{
		total += *start++;//ָ��start�ȵ�����ָ���൱���Ȱ�ָ��ָ���ֵ�ӵ�total�ϣ�Ȼ���ٵ���ָ��
		//total += *++start;//�������෴����ָ������
		//total += (*start)++;//��ʹ��startָ���ֵ���ٵ�����ֵ
		//start++;
	}
	return total;
}