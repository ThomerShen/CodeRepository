#include <stdio.h>
#include <stdlib.h>
// static ���徲̬����
void func()
{
	int var = 1;
	static int static_var = 1;//ֻ�ڱ���ʱ����ʼ��һ��

	printf("var= %d \n", var++);
	printf("static var= %d \n", static_var++);
	printf("\n");
}
//��̬����static_var��������������1���ֵ����var����ÿ�ζ���1.ÿ�ε���
//func()���������ʼ��var������static_varֻ�ڱ���ʱ����ʼ��һ�Ρ�

void main()
{
	for (int i = 1; i <= 3; i++)
	{
		printf("���ô�����%d\n", i);
		func();
	}
	getchar();
}