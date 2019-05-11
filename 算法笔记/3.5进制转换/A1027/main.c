#include <stdio.h>
#include <stdlib.h>
//给定三个[0,168]范围内的十进制数字，将它们转换成十三进制后按顺序输出
//I:15 43 71
//O:#123456
char radix[13] = { '0','1','2','3','4','5','6','7','8','9','A','B','C' };

int main()
{
	int r, g, b;
	scanf_s("%d%d%d", &r, &g, &b);
	printf("#");
	printf("%c%c", radix[r / 13], radix[r % 13]);
	printf("%c%c", radix[g / 13], radix[g % 13]);
	printf("%c%c", radix[b / 13], radix[b % 13]);
	system("pause");
	return 0;
}