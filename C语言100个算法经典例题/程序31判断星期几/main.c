#include <stdio.h>
#include <stdlib.h>

/*
��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
1.�����������������ȽϺã������һ����ĸһ�������ж���������� if ����жϵڶ�����ĸ��
*/

int main()
{
	char ch;

	printf("enter the frist letters: ");
	while ((ch = getchar()) != '\n')
	{
		switch (ch)
		{
		case'm':printf("Monday\n"); break;
		case't':
			printf("enter the second letters:");
			if ((ch = getchar()) == 'u')
			{
				printf("Tuesday\n");
			}
			else if ((ch = getchar()) == 'h')
			{
				printf("Thursday\n");
			}
			else
			{
				printf("error date.\n");
			}
			break;
		case'w':printf("Wednesday\n"); break;

		case'f':printf("Friday\n"); break;
		case's':
			printf("enter the second letters:");
			if ((ch = getchar()) == 'u')
			{
				printf("Sunday\n");
			}
			else if ((ch = getchar()) == 'a')
			{
				printf("Saturday\n");
			}
			else
			{
				printf("error date.\n");
			}
			break;
			default:printf("error date.\n"); break;
		}
		printf("enter the frist letters: ");
		if ((ch = getchar()) != '\0')
			continue;
	}
	
	system("pause");
	return 0;
}