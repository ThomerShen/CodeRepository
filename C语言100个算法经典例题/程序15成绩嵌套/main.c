#include <stdio.h>
/*���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90 �ֵ�ͬѧ�� A ��ʾ��60-89 ��֮����� B ��ʾ��
60 �����µ��� C ��ʾ��*/

int main()
{
	int n;
	char grade;

	printf("����ɼ���\n");
	scanf_s("%d", &n);
	grade = n >= 90 ? 'A' : (n >= 60 ? 'B' : 'C');//����ɣ����ҵ���
	printf("%d�ǵȼ�%c\n",n, grade);
	getchar();

	system("pause");
	return 0;
}