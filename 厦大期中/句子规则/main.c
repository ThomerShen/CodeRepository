#include <stdio.h>
#include <stdlib.h>
//���򣺣�1����һ����ĸ��д���������ĸȫ��Сд��ĸ����2��ȫ�Ǵ�д��ĸ��
//��3��ȫ��Сд��ĸ�����ӵĵ�һ�����ʣ�������ϣ�1����3������
//I AN a Student
//no Pain nO Gain
//NO pAin no gAin
int main()
{
	char string[100], c;
	int i, num = 0, word = 0,CapNum=0,HasLow=0,Errnum=0,isOK=1;
	printf("������ӣ�\n");
	gets(string);
	for (i = 0; (c = string[i]) != '\0'; i++)
	{
		if (c == ' ')//�����ո񣬳�ʼ��
		{
			word = 0;
			CapNum = 0;
			HasLow = 0;
			isOK = 1;
		}
		else if (isOK)//��Υ��
		{
			if (word == 0)//�����ж�����ĸ�����
			{
				word = 1;
				num++;
				if (c >= 'A'&&c <= 'Z')//����ĸΪ��д��ĸ
					CapNum++;
				else if (num==1)//���ӵ��׵��ʵ�����ĸΪСд��ĸ��Υ��
					isOK = 0;
				else
					HasLow = 1;//����ĸΪСд��ĸ
			}
			else//��������ĸ�����
			{
				if (c >= 'A'&&c <= 'Z')//��д��ĸ
					if (HasLow == 1)//��д��ĸ��ǰ����Сд��ĸ��Υ��
						isOK = 0;
					else
						CapNum++;//ȫ�Ǵ�д��ĸ
				else//Сд��ĸ
				{
					if (CapNum > 1)//Сд��ĸǰ���ж����д��ĸ��Υ��
						isOK = 0;
					else
						HasLow = 1;//��д��ĸ���Сд��ĸ������ȫ��Сд��ĸ
				}
			}
		}
		if (!isOK)//Υ�����
		{
			printf("%d", num);
			Errnum++;
		}
	}
	if (!Errnum)
		printf("OK\n");
	else
		printf("\n");
	system("pause");
	return 0;
}