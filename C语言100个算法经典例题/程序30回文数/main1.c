#include <stdio.h>

int main1()
{
	long ge, shi, qian, wan, x;
	scanf_s("%ld", &x);
	wan = x / 10000;
	qian = x % 10000 / 1000;
	shi = x % 100 / 10;
	ge = x % 10;
	if (ge == wan && shi == qian)/*��λ������λ����ʮλ����ǧλ*/
		printf("this number is a huiwen\n");
	else
		printf("this number is not a huiwen\n");
	//getch();
}