#include <stdio.h>
#include <stdlib.h>
//�°����� �ҳ�ͼ�ε��Ų����ɣ��õ���ʽ
int main()
{
	int row, col;
	char c;
	printf("�����ӡ���������ַ���\n");
	scanf("%d %c", &col, &c);
	if (col % 2 == 1)
		row = col / 2 + 1;
	else 
		row = col / 2 ;
	//��һ�д�ӡ
	for (int i = 0; i < col; i++)
		printf("%c", c);
	printf("\n");
	//��2~row-1�д�ӡ
	for (int i = 2; i < row; i++)
	{
		printf("%c", c);
		for (int j = 0; j < col - 2; j++)
		{
			printf(" ");
		}
		printf("%c\n", c);
	}
	//��row�д�ӡ
	for (int i = 0; i < col; i++)
		printf("%c", c);
	system("pause");
	return 0;
}