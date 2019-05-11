#include <stdio.h>
//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
//my office **** have 100 days ##
//字母=16个，空格= 6个，数字= 3个，其它字符= 6个
int main()
{
	char c;
	int letters = 0, space = 0, digit = 0, others = 0;

	printf("输入一行字符：\n");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
			letters++;
		else if (c == ' ')
			space++;
		else if (c >= '0'&&c <= '9')
			digit++;
		else
			others++;
	}
	printf("字母=%2d个，空格=%2d个，数字=%2d个，其它字符=%2d个\n", letters, space, digit, others);

	getchar();
	return 0;
}