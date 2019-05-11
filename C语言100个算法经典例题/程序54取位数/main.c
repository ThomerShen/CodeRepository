﻿#include <stdio.h>
#include <stdlib.h>
/*
题目：取一个整数 a 从右端开始的 4～7 位
程序分析：可以这样考虑：
(1)先使a右移4位。
(2)设置一个低4位全为1,其余全为0的数。可用~(~0<<4)
(3)将上面二者进行&运算。

~(~0<<4) 分三步
1. 取反 ~0 = 11111111 11111111 11111111 11111111
2. 左移 ~0 << 4 = 11111111 11111111 11111111 11110000
3.取反 ~(~0<<4) = 00000000 00000000 00000000 00001111
*/

//100  ‭01100100‬
int main()
{
	unsigned a, b, c, d;
	printf("输入一个正整数：");
	scanf_s("%d", &a);
	b = a >> 4;// ‭00000110
	//c = ~(~0 << 4);//00001111
	c = ~(1 << 4);
	d = b & c;//0000‭0110‬
	printf("%x\n%x\n", a, d);//‭01100100‬(0x64)  ‭0110‬(0x6)
	system("pause");
	return 0;
}
