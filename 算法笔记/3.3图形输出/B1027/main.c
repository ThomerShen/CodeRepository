#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//��ӡɳ©������Ϊһ���������κ�һ���������Σ����Ǽ⹫��
//���ݣ�1.�����εĵױ�ӵ�е��ַ�����2.ÿ�зǿո��ַ����֮ǰ��Ҫ����Ŀո�����3��ʣ��Ҫ������ַ���
int main()
{
	int n;
	char c;
	printf("�����ӡ���������ַ���\n");
	scanf("%d %c", &n, &c);
	int bottom = (int)sqrt(2.0*(n + 1)) - 1;//1.�ױ�ӵ�е��ַ���
	if (bottom % 2 == 0)//����ż����������
		bottom--;
	int used = (bottom + 1)*(bottom + 1) / 2 - 1;//3.������ķǿո��ַ���
	printf("�����ӡ��ͼ�Σ�\n");
	//��������
	for (int i = bottom; i >=1; i-=2)//������
	{
		for (int j = 0; j < (bottom - i) / 2; j++)
		{
			printf(" ");//2.���Ŀո�����Ϊ(bottom - i) / 2
		}
		for (int j = 0; j < i; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	//��������
	for (int i = 3; i <= bottom; i += 2)//������
	{
		for (int j = 0; j < (bottom - i) / 2; j++)
		{
			printf(" ");//���Ŀո�����Ϊ(bottom - i) / 2
		}
		for (int j = 0; j < i; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	printf("ʣ���ַ�������%d\n", n - used);
	system("pause");
	return 0;
}