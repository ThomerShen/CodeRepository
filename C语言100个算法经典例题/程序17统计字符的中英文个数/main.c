#include <stdio.h>
//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
//my office **** have 100 days ##
//��ĸ=16�����ո�= 6��������= 3���������ַ�= 6��
int main()
{
	char c;
	int letters = 0, space = 0, digit = 0, others = 0;

	printf("����һ���ַ���\n");
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
	printf("��ĸ=%2d�����ո�=%2d��������=%2d���������ַ�=%2d��\n", letters, space, digit, others);

	getchar();
	return 0;
}