#include <stdio.h>
#include <stdlib.h>

/*
题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
1.程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或 if 语句判断第二个字母。
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